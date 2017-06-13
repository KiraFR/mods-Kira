/*
	File: fn_HBrouilleur.sqf
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
private["_chance","_random"];
if((missionNamespace getVariable "VPNHACK") == 0) then{
	call KIRA_fnc_HCallFlics;
}else{
	_chance = (missionNamespace getVariable "VPNHACK")*(life_chanceHACKER);
	_random = floor(random(100));
	if(_random < _chance)then{
		call KIRA_fnc_HCallFlics;
	};
	missionNamespace setVariable ["VPNHACK",(missionNamespace getVariable "VPNHACK")-1];
};
{
	if((_x distance player) < KIRA_distance) then {
		[player] remoteExec ["KIRA_fnc_HRadioPlayer",_x];
	};
}foreach allUnits;