/*
	File: fn_HSelectPlayer.sqf
	Auteur: J. `Kira` D.
	
	Description:
	plus de radio
	
	PARAMETRES:
	NONE
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HSelectPlayer
*/
disableSerialization;
_display = findDisplay 9300;
_list = _display displayCtrl 9301;
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
/*{
	if((_x distance player) < 10) then {
			
		};
	};
}foreach allUnits;*/