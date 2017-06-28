#include <macro.h>
/*
	File:  fn_showRepertoire.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_showRepertoire
*/
private["_listC"];
disableSerialization;
_display = findDisplay 4450;
_listC = _display displayCtrl 4451;
// nom,numero,color
_listRepertoire = varProfile("repertoire");

lbClear _listC;
{
	_listC lbAdd (_x select 0);
	_listC lbSetTooltip [lbSize(_listC)-1,str(_x select 1)];
	_listC lbSetColor [lbSize(_listC)-1,_x select 2];
	_listC lbSetData [lbSize(_listC)-1,str([(_x select 0),(_x select 1),(_x select 2)])];
}foreach _listRepertoire;
lbSort [_listC, "ASC"];