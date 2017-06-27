/*
	File: fn_getColorContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1. STRING(numéro)

	RETURNS:
	1. ARRAY(COLOR[r,g,b,o])

	CALL:
	[STRING] call KIRA_fnc_getColorContact
*/
private["_color"];
_numero = param[0,"",[""]];
_repertoire = varProfile("repertoire");
{
	_numCont = (_x select 1);
	if(_numero == _numCont)exitWith{_color = _x select 2;};
}foreach _repertoire;
if(isNil "_color") exitWith{[1,1,1,1];};
_color;