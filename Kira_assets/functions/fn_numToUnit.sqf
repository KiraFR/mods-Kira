#define numberPlayer(num) (num getVariable "phoneNumber")
#include <macro.h>
/*
	File:  fn_numToUnit.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
		
	PARAMETRES:
	1. STRING(Numero)

	RETURNS:
	1. OBJECT(unit)

	CALL:
	[STRING] call KIRA_fnc_numToUnit
*/
private["_phoneNumber","_unit"];
_phoneNumber = param[0,"",[""]];
{
	if(numberPlayer(_x) == _phoneNumber) exitWith{
		_unit = _x;
	};
}foreach playableUnits;
if(isNil "_unit")exitWith{objNull};
_unit;