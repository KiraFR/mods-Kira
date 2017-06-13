( [ "GpsMapKira" ] call BIS_fnc_rscLayer ) cutRsc [ "DOSTARA_GPSSTUCK", "PLAIN", 1, false ];
gpsclose = false;
[] spawn KIRA_fnc_powerOFF;