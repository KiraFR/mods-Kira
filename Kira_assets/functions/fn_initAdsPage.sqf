/*
	File: fn_initAdsPage.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initAdsPage
*/
_list = OBJECTMAP getVariable ["Annonces",[]];
disableSerialization;
createDialog "DOSTARA_ANNONCE";
_display = findDisplay 6100;
if(isNull _display)exitWith{};
ctrlSetText[4106,varProfile("imageBackground")];
xNextAds = 0;

if(count _list > 0) then {
	diag_log "il y a des annonces";
	{
		_x call KIRA_fnc_showAnnonce; 
	}foreach _list;
}else{
	diag_log "il y a pas d'annonce";
	_controlGrp = _display displayCtrl 6101;
	_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp]; 
	_ctrl ctrlSetPosition [0,xNextAds+0.02,0.348,0.3]; 
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetStructuredText parseText "<t size='1.1' align='center'>Pas d'annonces disponible.</t>";
	_ctrl ctrlSetBackgroundColor [0,0,0,1];
	_ctrl ctrlSetForegroundColor [1,1,1,1];
	xNextAds =xNextAds + 0.3 + 0.01;
};