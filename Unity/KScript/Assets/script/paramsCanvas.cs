using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

public class paramsCanvas : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (!PlayerPrefs.HasKey("notificationImpact"))
			PlayerPrefs.SetInt("notificationImpact", 1);
		if (!PlayerPrefs.HasKey("notificationBefore"))
			PlayerPrefs.SetInt("notificationBefore", 5);
		printParams();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void openParams() {
		var canvasParams = GameObject.Find("CanvasParams");
		if (canvasParams.GetComponent<Canvas>().enabled == true)
			canvasParams.GetComponent<Canvas>().enabled = false;
		else
			canvasParams.GetComponent<Canvas>().enabled = true;
	}

	public void printParams() {
		bool atImpact = true;
		if (PlayerPrefs.GetInt("notificationImpact") == 0)
			atImpact = false;

		GameObject.Find("notificationAtImpact").GetComponent<Toggle>().isOn = atImpact;
		GameObject.Find("minutesBefore").GetComponent<InputField>().text = "" + PlayerPrefs.GetInt("notificationBefore");
	}

	public void saveParams() {
		int atImpact = 0;
		if (GameObject.Find("notificationAtImpact").GetComponent<Toggle>().isOn)
			atImpact = 1;

		PlayerPrefs.SetInt("notificationImpact", atImpact);
		PlayerPrefs.SetInt("notificationBefore", int.Parse(GameObject.Find("minutesBefore").GetComponent<InputField>().text));
	}
}
