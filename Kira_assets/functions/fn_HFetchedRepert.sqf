#include <macro.h>
/*
	File:  fn_HFetchedRepert.sqf
	Auteur: J. `Kira` D.
	
	Description:
	
	
	PARAMETRES:
	1. ARRAY (repertoire de la cible)
	
	RETURNS: 
	NONE

	CALL: 
	[ARRAY] call KIRA_fnc_HFetchedRepert
*/
_repert = param[0,[],[[]]];
if(count _repert == 0)exitWith{Terminal_fulltext = Terminal_fulltext + "La cible n'a pas de contact dans son repertoire..</br>";};
private _num = varMission("lockphonenum");
Terminal_fulltext = Terminal_fulltext + format["Repertoire de la cible (%1):</br>",_num];
{
	_str = format["%1 - %2</br>",_x select 0, _x select 1];
	Terminal_fulltext = Terminal_fulltext + _str;
}foreach _repert;