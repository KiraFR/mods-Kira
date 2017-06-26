#include "..\macro.h"
/*
	File: fn_initSetting.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initSetting
*/
private["_listB","_listA"];
disableSerialization;
waitUntil {!isNull findDisplay 4650};
_listB = getControl(4650,4652);
_listA = getControl(4650,4655);
thisBackground = profileNamespace getVariable "imageBackground";
ctrlSetText[4106,thisBackground];

_listBackground = missionNamespace getVariable "listBackground";
_listAnonyme = [["Activer",true],["Desactiver",false]];

lbClear _listB;

{
	_listB lbAdd (_x select 0);
	_listB lbSetData [lbSize(_listB)-1,str (_x select 1)];
}foreach _listBackground;

lbSort [_listB, "ASC"];
lbClear _listA;

{
	_listA lbAdd (_x select 0);
	_listA lbSetData [lbSize(_listA)-1,str(_x select 1)];
}foreach _listAnonyme;
