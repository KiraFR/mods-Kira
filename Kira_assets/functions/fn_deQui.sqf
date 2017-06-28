#include <macro.h>
/*
	File:  fn_deQui.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.SCALAR

	RETURNS:
	1.STRING(Image)

	CALL:
	[SCALAR] call KIRA_fnc_deQui
*/
private["_image"];
_who = param[0,0,[0]];
_image = "";
switch (_who) do { 
	case 0 : {  _image = "\kira_assets\texture\convLeft.paa"; }; 
	case 1 : { _image = "\kira_assets\texture\convRight.paa"; }; 
};

_image