using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.iOS;

#if UNITY_ANDROID
using Assets.SimpleAndroidNotifications;
#endif

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
				localNotif.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text + " on " + PlayerPrefs.GetInt("notificationBefore") + " minutes";
			else
				localNotif.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text + " on " + PlayerPrefs.GetInt("notificationBefore") + " minutes";
			localNotif.fireDate = UnixTimeStampToDateTime((timeStampValue - (PlayerPrefs.GetInt("notificationBefore") * 60)));
			localNotif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
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
			localNotif2.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
			UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(localNotif2);

			UnityEngine.iOS.NotificationServices.RegisterForNotifications(NotificationType.Alert | NotificationType.Badge | NotificationType.Sound);
		}
		#endif
		#if UNITY_ANDROID
		var time = UnixTimeStampToDateTime(timeStampValue).Subtract(System.DateTime.Now);
		var timeBeforeImpact = UnixTimeStampToDateTime((timeStampValue - (PlayerPrefs.GetInt("notificationBefore") * 60))).Subtract(System.DateTime.Now);

		if (PlayerPrefs.GetInt("notificationBefore") > 0) {
			if (isReturn == "true")
				NotificationManager.SendWithAppIcon(timeBeforeImpact, "KScript", "Fleet return " + originFleet.text + " arrive in " + destCoords.text + " since " + PlayerPrefs.GetInt("notificationBefore") + " minutes", new Color(0, 0.6f, 1), NotificationIcon.Message);
			//localNotif2.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text;
			else
				NotificationManager.SendWithAppIcon(timeBeforeImpact, "KScript", "Fleet from " + originFleet.text + " arrive in " + destCoords.text + " since " + PlayerPrefs.GetInt("notificationBefore") + " minutes", new Color(0, 0.6f, 1), NotificationIcon.Message);
			//localNotif2.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text;
		}

		if (PlayerPrefs.GetInt("notificationImpact") == 1) {
			if (isReturn == "true")
				NotificationManager.SendWithAppIcon(time, "KScript", "Fleet return " + originFleet.text + " arrive in " + destCoords.text, new Color(0, 0.6f, 1), NotificationIcon.Message);
			//localNotif2.alertBody = "Fleet return " + originFleet.text + " arrive in " + destCoords.text;
			else
				NotificationManager.SendWithAppIcon(time, "KScript", "Fleet from " + originFleet.text + " arrive in " + destCoords.text, new Color(0, 0.6f, 1), NotificationIcon.Message);
			//localNotif2.alertBody = "Fleet from " + originFleet.text + " arrive in " + destCoords.text;
		}
		#endif
	}
}
