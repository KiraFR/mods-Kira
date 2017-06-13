/*
	File: fn_HCheckNear.sqf
	Auteur: J. `Kira` D.
	
	Description:
	scan
	
	PARAMETRES:
	1. ARRAY
	
	RETURNS: 
	NONE 

	CALL: 
	[ARRAY] call KIRA_fnc_HCheckNear
*/
private["_text"];
_listNear = param[0,[],[[]]];
if(count _listNear == 0) exitWith{missionNamespace setVariable ["listNear",nil];Terminal_fulltext = "Problème lors du scan... <br/>";};
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
//[[ID ,NUMERO, NAME, NUMERO_COMPTE_ACC, MONTANT_ACC],...];
missionNamespace setVariable ["listNear",_listNear];
