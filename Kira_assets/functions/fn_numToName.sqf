#include <macro.h>
/*
	File:  fn_numToName.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:
	1. STRING(numero)

	RETURNS:
	1. STRING(numero/nom)

	CALL:
	[STRING] call KIRA_fnc_numToName
*/
private["_nom","_num"];
_num = param[0,"",[""]];

// nom,numero,color
_listRepertoire = varProfile("repertoire");

{
	_numeroC = _x select 1;
	if(_num == _numeroC)exitWith{
		_nom = _x select 0;
	};
}foreach _listRepertoire;

if(isNil "_nom")exitWith{_num};
_nom;