#include <macro.h>
/*
	File:  fn_HBrouilleur.sqf
	Auteur: J. `Kira` D.

	Description:
	plus de radio

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_HBrouilleur
*/
private["_chance","_random","_vpn"];
_vpn = varMission("VPNHACK");
call KIRA_fnc_HBuyVPN
{
	if((_x distance player) < KIRA_distance) then {
		[player] remoteExec ["KIRA_fnc_HRadioPlayer",_x];
	};
}foreach allUnits;
