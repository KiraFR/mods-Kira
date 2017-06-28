#include <macro.h>
/*
	File:  fn_initAddCont.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initAddCont
*/
disableSerialization;
waitUntil {!isNull findDisplay 4250};
_listColor = getControl(4250,4254);
[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;
ctrlSetText[4106,varProfile("imageBackground")];

_color = [[1,0,0,1],[0.45,0.09,0.56,1],[1,1,1,1],[0,0.91,0.88,1],[1,0,1,1],[1,1,0,1]];
_colorText = ["Rouge","Violet","Blanche","Cyan","Rose","Jaune"];
{
	_value = lbAdd[4254,_x];
	lbSetColor[4254,lbSize(4254)-1,_color select (lbSize(4254)-1)];
	lbSetData[4254,_value,str(_color select (lbSize(4254)-1))];
}foreach _colorText;
lbSetCurSel[4254,0];
