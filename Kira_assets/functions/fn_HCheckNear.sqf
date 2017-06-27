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
if(count _listNear == 0) exitWith{setVarMission("listNear",nil);Terminal_fulltext = "Problème lors du scan... <br/>";};
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
//[[ID ,NUMERO, NAME, NUMERO_COMPTE_ACC, MONTANT_ACC],...];
setVarMission("listNear",_listNear);
