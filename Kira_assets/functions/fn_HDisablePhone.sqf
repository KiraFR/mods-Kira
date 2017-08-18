#include <macro.h>
/*
	File:  fn_HDisablePhone.sqf
	Auteur: J. `Kira` D.
	
	Description:
	desactiver un telephone
	
	PARAMETRES:
	NONE 
	
	RETURNS: 
	NONE 

	CALL: 
	[] spawn KIRA_fnc_HDisablePhone
*/
setVarMission("phoneDisabled",true);
sleep 60;
setVarMission("phoneDisabled",nil);