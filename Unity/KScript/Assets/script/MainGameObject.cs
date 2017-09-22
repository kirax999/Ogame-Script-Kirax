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
			var eventTime = UnixTimeStampToDateTime(int.Parse(obj.timeStamp)).Subtract(System.DateTime.Now);

			GameObject go = Instantiate(bodyFleet) as GameObject;
			go.SetActive(true);
			foreach (var item in go.GetComponentsInChildren<Text>()) {
				if (item.name == "timeStamp")
					item.text = eventTime.ToString();
				else if  (item.name == "destCoords")
					item.text = obj.destCoords;
				else if  (item.name == "originFleet")
					item.text = obj.originFleet;
				else if  (item.name == "destFleet")
					item.text = obj.destFleet;
				else if  (item.name == "sizeFleet")
					item.text = obj.sizeFleet;
			}
			//go = info.Name;
			//go.GetComponentInChildren<choiceLVLButton>().SetFile(info.Name);
			go.transform.SetParent(bodyFleet.transform.parent);
			go.transform.localScale = new Vector3(1, 1, 1);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public static System.DateTime UnixTimeStampToDateTime(int unixTimeStamp)
	{
		// Unix timestamp is seconds past epoch
		System.DateTime dtDateTime = new System.DateTime(1970,1,1,0,0,0,0,System.DateTimeKind.Utc);
		dtDateTime = dtDateTime.AddSeconds(unixTimeStamp).ToLocalTime();
		Debug.Log(dtDateTime);
		return dtDateTime;
	}
}
