private["_result","_ret"];
if(isNil "gpsClose")exitWith{
	closeGPS = true;
	true
};

_result = ["Voulez-vous fermer le GPS ?", "Êtes vous sur ?","Oui","Non"] call BIS_fnc_GUImessage;
if(_result)then {
	( [ "GpsMapKira" ] call BIS_fnc_rscLayer ) cutRsc [ "DOSTARA_GPSSTUCK", "BLACK IN", 1, false ];
	gpsClose = nil;
	closeGPS = true;
	_ret = true;
}else{
	closeGPS = false;
	_ret = false;
};
sleep 1;