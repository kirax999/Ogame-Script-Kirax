using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

public class bodyFleet : MonoBehaviour {
	public Text timeStamp;
	public Text originFleet;
	public Text sizeFleet;
	public Text destFleet;
	public Text destCoords;

	public int timeStampValue;

	public void refreshTime() {
		var time = UnixTimeStampToDateTime(timeStampValue).Subtract(System.DateTime.Now);
		timeStamp.text = time.ToString(@"dd\.hh\:mm\:ss");
	}

	public static System.DateTime UnixTimeStampToDateTime(int unixTimeStamp)
	{
		System.DateTime dtDateTime = new System.DateTime(1970,1,1,0,0,0,0,System.DateTimeKind.Utc);
		dtDateTime = dtDateTime.AddSeconds(unixTimeStamp).ToLocalTime();
		return dtDateTime;
	}
}
