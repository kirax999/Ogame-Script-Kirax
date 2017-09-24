using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

public class MainGameObject : MonoBehaviour {
	public GameObject bodyFleet;
	// Use this for initialization
	void Start () {
		
		var epochStart = new System.DateTime(1970, 1, 1, 8, 0, 0, System.DateTimeKind.Local);
		var timestamp = (System.DateTime.UtcNow - epochStart).TotalSeconds;

		GameObject.Find("Canvas").GetComponent<getDataQrCode>().jsonToList();

		var listFleet = GameObject.Find("Canvas").GetComponent<getDataQrCode>().listFleet;

		foreach (var obj in listFleet) {
			GameObject go = Instantiate(bodyFleet) as GameObject;
			go.SetActive(true);
			foreach (var item in go.GetComponentsInChildren<Text>()) {
				if  (item.name == "destCoords")
					item.text = obj.destCoords;
				else if  (item.name == "originFleet")
					item.text = obj.originFleet;
				else if  (item.name == "destFleet")
					item.text = obj.destFleet;
				else if  (item.name == "sizeFleet")
					item.text = obj.sizeFleet;
			}
			go.GetComponent<bodyFleet>().timeStampValue = int.Parse(obj.timeStamp);
			go.GetComponent<bodyFleet>().refreshTime();
			go.transform.SetParent(bodyFleet.transform.parent);
			go.transform.localScale = new Vector3(1, 1, 1);
		}
	}
	
	void Update () {
		
	}

	void FixedUpdate() {
		foreach (var fleet in GameObject.FindGameObjectsWithTag("bodyFleet")) {
			fleet.GetComponent<bodyFleet>().refreshTime();
		}
	}

	private void refreshListFleet() {

	}
}
