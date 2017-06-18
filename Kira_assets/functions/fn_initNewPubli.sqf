/*
	File: fn_initNewPubli.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initNewPubli
*/
_list = OBJECTMAP getVariable ["Annonces",[]];
if(count _list == 0) exitWith {
	ctrlSetText[6203,""];
};