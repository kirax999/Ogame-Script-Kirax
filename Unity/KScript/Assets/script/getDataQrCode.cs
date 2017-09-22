using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

using ZXing;
using ZXing.QrCode;
using SimpleJSON;

public class getDataQrCode : MonoBehaviour {
	private WebCamTexture camTexture;
	public Quaternion baseRotation;
	private GameObject CameraCapture;
	public List<fleetEvent> listFleet = new List<fleetEvent>();

	void Start() {
		baseRotation = transform.rotation;
		CameraCapture = GameObject.Find("CameraCapture");
		camTexture = new WebCamTexture();

		//camTexture.requestedHeight = (int)CameraCapture.GetComponent<RectTransform>().rect.height; 
		//camTexture.requestedWidth = (int)CameraCapture.GetComponent<RectTransform>().rect.width;
	}

	#region camera QrCode Working
	public void openCamera() {
		GameObject.Find("CanvasGetPicture").GetComponent<Canvas>().enabled = true;
		CameraCapture.GetComponent<RawImage>().texture = camTexture;
		//CameraCapture.transform.rotation = CameraCapture.transform.rotation;
		if (camTexture != null) {
			camTexture.Play();
		}
	}

	public void takePicture() {
		try {
			IBarcodeReader barcodeReader = new BarcodeReader ();
			// decode the current frame
			var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width , camTexture.height);
			if (result != null) {
				Debug.Log("DECODED TEXT FROM QR: " + result.Text);

				var dataSend = new Dictionary<string, string>();
				dataSend.Add("qrcode",result.Text);
				var postRequest = POST("http://timelaps.fr/Ogame/postData.php", dataSend);
			}
		} catch ( Exception ex) {
			Debug.Log(ex.Message);
		}
	}
	#endregion
	
	void Update () {
		CameraCapture.transform.rotation = baseRotation * Quaternion.AngleAxis(camTexture.videoRotationAngle, Vector3.back);
	}

	#region network data send and receve
	public WWW POST(string url, Dictionary<string, string> post)
	{
		WWWForm form = new WWWForm();
		foreach (KeyValuePair<String, String> post_arg in post)
		{
			form.AddField(post_arg.Key, post_arg.Value);
		}
		WWW www = new WWW(url, form);

		StartCoroutine(WaitForRequest(www));
		return www;
	}

	private IEnumerator WaitForRequest(WWW www)
	{
		yield return www;

		// check for errors
		if (www.error == "")
		{
			PlayerPrefs.SetString("jsonData",www.text);
			jsonToList();
			//
		}
		else
		{
			Debug.Log("WWW Error: " + www.error);
		}
	}
	#endregion

	public void jsonToList() {
		if (PlayerPrefs.HasKey("jsonData")) {
			var decodeJSON = JSON.Parse(PlayerPrefs.GetString("jsonData"));
			for (int i = 0; i < decodeJSON.Count; i++) {
				var fleetEventTmp = new fleetEvent();
				fleetEventTmp.timeStamp = decodeJSON[i]["timeStamp"];
				fleetEventTmp.originFleet = decodeJSON[i]["originFleet"];
				fleetEventTmp.sizeFleet = decodeJSON[i]["sizeFleet"];
				fleetEventTmp.destFleet = decodeJSON[i]["destFleet"];
				fleetEventTmp.destCoords = decodeJSON[i]["destCoords"];
				listFleet.Add(fleetEventTmp);
			}
		}
	}
}