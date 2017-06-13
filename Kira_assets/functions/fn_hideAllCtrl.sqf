/*
	File: fn_hideAllCtrl.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_hideAllCtrl
*/
private["_noMouse","_mouse"];
params[
	["_noMouse",[],[[]]],
	["_mouse",[],[[]]]
];
disableSerialization;
{ctrlShow[_x,false];}foreach _mouse;
{ctrlShow[_x,true];}foreach _noMouse;