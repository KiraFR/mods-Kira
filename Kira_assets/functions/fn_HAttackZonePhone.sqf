#include <macro.h>
/*
	File:  fn_HAttackZonePhone.sqf
	Auteur: J. `Kira` D.
	
	Description:
	desactiver un telephone
	
	PARAMETRES:
	1. STRING (rayon) 
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HAttackZonePhone
*/
private ["_num","_unit"];
_rayon = param[0,"",[""]];
_rayon = parseNumber (_rayon);
{
	_unit = _x;
	_num = numberPlayer(_x);
	if(((_x distance player) < _rayon) && !(isNil "_num"))then{
		[_num,_unit] remoteExecCall ["KIRA_fnc_HAttackedPhone",2];
	};
}foreach playableUnits;

Terminal_fulltext = Terminal_fulltext + "Attaque envoyé.. </br>";