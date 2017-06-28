#include <macro.h>
/*
	File:  fn_HCallFlics.sqf
	Auteur: J. `Kira` D.

	Description:
	appelle les flics

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_HCallFlics
*/

if(isNil {varMission("VPNHACK")})exitWith {};
_antiHacker = call KIRA_fnc_antiHacker;
if(count _antiHacker > 0) then {
  {
    [position player,true] remoteExecCall ["KIRA_fnc_flicReceived",_x];
  }foreach _antiHacker;
}else{
  [position player,false] remoteExecCall ["KIRA_fnc_flicReceived",west];
};
