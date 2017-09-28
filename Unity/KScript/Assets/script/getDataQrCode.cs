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
		camTexture = new WebCamTexture(275, 275);
	}

	void Update () {
		CameraCapture.transform.rotation = baseRotation * Quaternion.AngleAxis(camTexture.videoRotationAngle, Vector3.back);
	}

	#region camera QrCode Working
	public void openCamera() {
		if (!camTexture.isPlaying) {
			GameObject.Find("CanvasGetPicture").GetComponent<Canvas>().enabled = true;
			CameraCapture.GetComponent<RawImage>().texture = camTexture;

			if (camTexture != null) {
				camTexture.Play();
			}
		} else
			closeCamera();
	}

	public void closeCamera() {
		if (camTexture != null) {
			camTexture.Stop();
		}
		GameObject.Find("CanvasGetPicture").GetComponent<Canvas>().enabled = false;
	}

	public void takePicture() {
		try {
			IBarcodeReader barcodeReader = new BarcodeReader ();

			var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width , camTexture.height);
			if (result != null) {
				Debug.Log("DECODED TEXT FROM QR: " + result.Text);

				var dataSend = new Dictionary<string, string>();
				dataSend.Add("qrcode",result.Text);
				POST("http://timelaps.fr/Ogame/postData.php", dataSend);
				GameObject.Find("Canvas").GetComponent<getDataQrCode>().closeCamera();
			}
		} catch ( Exception ex) {
			Debug.Log(ex.Message);
		}
	}
	#endregion

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
		Debug.Log("*" + www.error + "*");
		// check for errors
		if (www.error == "" || www.error == null)
		{
			PlayerPrefs.SetString("jsonData",www.text);
			jsonToList();
			GameObject.Find("MainGameObject").GetComponent<MainGameObject>().refreshListFleet();
			if (UnityEngine.Random.Range(1, 3) == 1) {
				AdBuddizBinding.ShowAd();
			}
		}
		else
			Debug.Log("WWW Error: " + www.error);
	}
	#endregion

	public void jsonToList() {
		if (PlayerPrefs.HasKey("jsonData")) {
			var decodeJSON = JSON.Parse(PlayerPrefs.GetString("jsonData"));
			listFleet.Clear();
			for (int i = 0; i < decodeJSON.Count; i++) {
				var fleetEventTmp = new fleetEvent();
				fleetEventTmp.timeStamp = decodeJSON[i]["timeStamp"];
				fleetEventTmp.isReturn = decodeJSON[i]["isReturn"];
				fleetEventTmp.missionType = decodeJSON[i]["missionType"];
				fleetEventTmp.originFleet = decodeJSON[i]["originFleet"];
				fleetEventTmp.sizeFleet = decodeJSON[i]["sizeFleet"];
				fleetEventTmp.destFleet = decodeJSON[i]["destFleet"];
				fleetEventTmp.destCoords = decodeJSON[i]["destCoords"];
				listFleet.Add(fleetEventTmp);
			}
		}
	}
}