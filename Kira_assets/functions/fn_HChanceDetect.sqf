#include <macro.h>
/*
	File:  fn_HChanceDetect.sqf
	Auteur: J. `Kira` D.
	
	Description:
	% de chance de reussite
	
	PARAMETRES:
	NONE
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HChanceDetect
*/
if((varMission("VPNHACK")) == 0) then{
	call KIRA_fnc_HCallFlics;
}else{
	_chance = (varMission("VPNHACK"))*(life_chanceHACKER);
	_random = floor(random(100));
	if(_random < _chance)then{
		call KIRA_fnc_HCallFlics;
	};
	setVarMission("VPNHACK",(varMission("VPNHACK"))-1);
};