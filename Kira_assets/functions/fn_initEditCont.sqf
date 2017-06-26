#include "..\macro.h"
/*
	File: fn_initEditCont.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initEditCont
*/
disableSerialization;
waitUntil {!isNull findDisplay 4550};
_listColor = getControl(4550,4552);
_ctrlStructuredText = getControl(4550,4555);
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];
_ctrlStructuredText ctrlSetStructuredText parseText format["<t align='center'>%1</t>",(contact select 1)];
_color = [[1,0,0,1],[0.45,0.09,0.56,1],[1,1,1,1],[0,0.91,0.88,1],[1,0,1,1],[1,1,0,1]];
_colorText = ["Rouge","Violet","Blanche","Cyan","Rose","Jaune"];
{
	_value = lbAdd[4552,_x];
	lbSetColor[4552,lbSize(4552)-1,_color select (lbSize(4552)-1)];
	lbSetData[4552,_value,str(_color select (lbSize(4552)-1))];
}foreach _colorText;
lbSetCurSel[4552,0];
