#include "..\macro.h"
/*
	File: fn_initAddConversation.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initAddConversation
*/
disableSerialization;
waitUntil {!isNull findDisplay 4900};
private _listC = getControl(4900,4901);
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];

// nom,numero,color
_listRepertoire = profileNamespace getVariable "repertoire";

lbClear _listC;
{
	_listC lbAdd (_x select 0);
	_listC lbSetTooltip [lbSize(_listC)-1,_x select 1];
	_listC lbSetColor [lbSize(_listC)-1,_x select 2];
	_listC lbSetData [lbSize(_listC)-1,str(_x)];
}foreach _listRepertoire;
lbSort [_listC, "ASC"];
