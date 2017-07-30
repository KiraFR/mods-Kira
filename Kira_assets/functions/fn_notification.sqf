/*
	File: fn_notification.sqf
	Auteur: J. `Kira` D.
	
	Description:
	flemme
	
	PARAMETRES:
	NONE

	RETURNS: 
	NONE 

	CALL: 
	[] spawn KIRA_fnc_notification
*/
private ["_num","_ico","_msg","_c"];
disableSerialization;
_msg = "<t align='left'><img image='\Kira_assets\texture\notification\SMS.paa'/><t size='1'>Nouveau message.</t>";

(15+nbNotif) cutRsc ["DOSTARA_Notification", "PLAIN"];
_display = uiNamespace getVariable "DOSTARA_Notification";
_c = _display displayCtrl 6301;
_c ctrlSetStructuredText parseText _msg;
if(nbNotif == 0)then{
	_c ctrlSetPosition [(0.82049 * safezoneW + safezoneX)-(0.82049 * safezoneW + safezoneX), ((ctrlPosition _c) select 1), (ctrlPosition _c) select 2, (0.04 * safezoneH)];
}else{
	_c ctrlSetPosition [0.82049 * safezoneW + safezoneX, ((ctrlPosition _c) select 1) + ((0.04 * safezoneH)*(nbNotif) + ((nbNotif)*0.02)), (ctrlPosition _c) select 2, (0.04 * safezoneH)];
};
_c ctrlCommit 1;
sleep 4;
nbNotif=nbNotif-1;