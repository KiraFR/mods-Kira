#include <macro.h>
/*
	File: fn_initCivUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initCivUrg
*/
private["_messages","_pour"];
disableSerialization;
_list = getControl(6400,6401);;
ctrlSetText[4106,varProfile("imageBackground")];
_urgence = [["Police Insulaire",west,[0.53,0.53,0.53,1]],["S I M",independent,[0.53,0.53,0.53,1]]];

{
	_title = _x param[0,"",[""]];
	_side = _x param[1,sideUnknown,[sideUnknown]];
	_color = _x param[2,[1,1,1,1],[[]]];
	_list lbAdd _title;
	_list lbSetData [(lbSize _list)-1,str(_side)];
	_list lbSetColor _color;
}foreach _urgence;