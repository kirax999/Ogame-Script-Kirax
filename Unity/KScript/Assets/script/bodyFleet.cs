using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.iOS;

public class bodyFleet : MonoBehaviour {
	public Text timeStamp;
	public Text originFleet;
	public Text sizeFleet;
	public Text destFleet;
	public Text destCoords;

	public int timeStampValue;
	public string isReturn;

	void Start () {
		if (!PlayerPrefs.HasKey("notificationImpact"))
			PlayerPrefs.SetInt("notificationImpact", 1);
		if (!PlayerPrefs.HasKey("notificationBefore"))
			PlayerPrefs.SetInt("notificationImpact", 5);
	}

	public void refreshTime() {
		var time = UnixTimeStampToDateTime(timeStampValue).Subtract(System.DateTime.Now);
		if (time.TotalSeconds > 0)
			timeStamp.text = time.Days + "." + time.Hours + ":" + time.Minutes + ":" + time.Seconds; //  (@"dd\.hh\:mm\:ss");
		else
			timeStamp.text = "Arrive";
		//
	}

	public static System.DateTime UnixTimeStampToDateTime(int unixTimeStamp)
	{
		System.DateTime dtDateTime = new System.DateTime(1970,1,1,0,0,0,0,System.DateTimeKind.Utc);
		dtDateTime = dtDateTime.AddSeconds(unixTimeStamp).ToLocalTime();
		return dtDateTime;
	}

	public void makeNotification() {
		#if UNITY_IPHONE
		if (PlayerPrefs.GetInt("notificationBefore") > 0) {
			var localNotif = new UnityEngine.iOS.LocalNotification();
			localNotif.alertAction = "Your fleet arrive in 5 minutes";
			if (isReturn == "true")
				localNotif.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text + " on 5 minutes";
			else
				localNotif.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text + " on 5 minutes";
			localNotif.fireDate = UnixTimeStampToDateTime((timeStampValue - (PlayerPrefs.GetInt("notificationBefore") * 60)));
			UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(localNotif);
		}

		if (PlayerPrefs.GetInt("notificationImpact") == 1) {
			var localNotif2 = new UnityEngine.iOS.LocalNotification();
			localNotif2.alertAction = "Your fleet arrive";
			if (isReturn == "true")
				localNotif2.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text;
			else
				localNotif2.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text;
			localNotif2.fireDate = UnixTimeStampToDateTime((timeStampValue));
			UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(localNotif2);

			UnityEngine.iOS.NotificationServices.RegisterForNotifications(NotificationType.Alert | NotificationType.Badge | NotificationType.Sound);
		}
		#endif
		#if UNITY_ANDROID

		if (PlayerPrefs.GetInt("notificationBefore") > 0) {
			var localNotif = new UnityEngine.iOS.LocalNotification();
			localNotif.alertAction = "Your fleet arrive in 5 minutes";
			if (isReturn == "true")
			localNotif.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text + " on 5 minutes";
			else
			localNotif.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text + " on 5 minutes";
			localNotif.fireDate = UnixTimeStampToDateTime((timeStampValue - PlayerPrefs.GetInt("notificationBefore")));
			UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(localNotif);
		}

		if (PlayerPrefs.GetInt("notificationImpact") == 1) {
			var localNotif2 = new UnityEngine.iOS.LocalNotification();
			localNotif2.alertAction = "Your fleet arrive";
			if (isReturn == "true")
			localNotif2.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text;
			else
			localNotif2.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text;
			localNotif2.fireDate = UnixTimeStampToDateTime((timeStampValue));
			UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(localNotif2);

			UnityEngine.iOS.NotificationServices.RegisterForNotifications(NotificationType.Alert | NotificationType.Badge | NotificationType.Sound);
		}

		#endif
	}
}
