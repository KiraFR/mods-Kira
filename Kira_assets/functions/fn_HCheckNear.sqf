#include <macro.h>
/*
	File:  fn_HCheckNear.sqf
	Auteur: J. `Kira` D.

	Description:
	scan

	PARAMETRES:
	1. ARRAY

	RETURNS:
	NONE

	CALL:
	[ARRAY] call KIRA_fnc_HCheckNear
*/
private["_text"];
_listNear = param[0,[],[[]]];
if(count _listNear == 0) exitWith{
	setVarMission("listNear",nil);
	Terminal_fulltext = "Problème lors du scan... <br/>";
};
//[[ID ,NUMERO, NAME, NUMERO_COMPTE_ACC, MONTANT_ACC],...];
{
	_user = format["%1 - %2 - %3 - %4 <br/>",_x select 0,_x select 1,_x select 2,_x select 3];
	Terminal_fulltext = Terminal_fulltext + _user;
}foreach _listNear;
setVarMission("listNear",_listNear);
