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
	private Rect screenRect;
	private GameObject CameraCapture;

	void Start() {
		baseRotation = transform.rotation;

		WebCamDevice[] devices = WebCamTexture.devices;
		for (int i = 0; i < devices.Length; i++)
			Debug.Log(devices[i].name);

		CameraCapture = GameObject.Find("CameraCapture");
		screenRect = new Rect(0, 0, Screen.width, Screen.height);
		camTexture = new WebCamTexture();
		Debug.Log(camTexture.videoRotationAngle + "degrer");

		camTexture.requestedHeight = (int)CameraCapture.GetComponent<RectTransform>().rect.height; 
		camTexture.requestedWidth = (int)CameraCapture.GetComponent<RectTransform>().rect.width;
	}

	void OnGUI () {
		//if (clicked)
			//GUI.DrawTexture (screenRect, camTexture, ScaleMode.ScaleToFit);
	}
		
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
	
	void Update () {
		CameraCapture.transform.rotation = baseRotation * Quaternion.AngleAxis(camTexture.videoRotationAngle, Vector3.back);
	}

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
			Debug.Log("WWW Ok!: " + www.text);
			var decodeJSON = JSON.Parse(www.text);
			Debug.Log(decodeJSON[0]["timeStamp"] + " = " + decodeJSON[1]["timeStamp"] + " = " + decodeJSON[2]["timeStamp"]);
		}
		else
		{
			Debug.Log("WWW Error: " + www.error);
		}
	}

	/*
	IEnumerator Upload(string qrCode) {
		Hashtable data = new Hashtable();
		data.Add("name", name);
		data.Add("score", score);

		HTTP.Request postRequest = new HTTP.Request("post", "https://Mygame.firebaseio.com/scores.json", data);
		postRequest.Send(( request ) => {
			Hashtable jsonObj = (Hashtable)JSON.JsonDecode(request.response.Text);
			if(jsonObj == null) 
			{
				Debug.LogError("server returned null or malformed response ):");
			}
		});
	
		WWWForm form = new WWWForm();
		form.AddField("qrcode", qrCode);

		UnityWebRequest www = UnityWebRequest.Post("http://timelaps.fr/Ogame/postData.php", form);
		yield return www.Send();
		Debug.Log(www.data);
		if(www.isError) {
			Debug.Log(www.error);
		}
		else {
			Debug.Log("Form upload complete!");
		}
	}
	*/
}
