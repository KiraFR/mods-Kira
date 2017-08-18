#include <macro.h>
/*
	File:  fn_HAttackPhone.sqf
	Auteur: J. `Kira` D.
	
	Description:
	desactiver un telephone
	
	PARAMETRES:
	NONE 
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HAttackPhone
*/
private ["_num","_unit"];
_type = param[0,0,[0]];
switch () do { 
	case 0 : { _num = varMission("lockphonenum");}; 
	case 1 : { _num = param[1,"",[""]]}; 
};
if(isNil "_num")exitWith{};//?? fuck you arma
_unit = [_num] call KIRA_fnc_numToUnit;
if(isNull _unit)exitWith{
	Terminal_fulltext = Terminal_fulltext + "La cible a éteint son téléphone ou n'existe pas.";
};

[_num,_unit] remoteExecCall ["KIRA_fnc_HAttackedPhone",2];