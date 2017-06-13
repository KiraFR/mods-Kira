/*
	File: fn_HPhonePlayer.sqf
	Auteur: J. `Kira` D.
	
	Description:
	voir message phone
	
	PARAMETRES:
	1. OBJECT(KIRAer)
	
	RETURNS: 
	NONE 
	
	CALL: 
	[OBJECT] spawn KIRA_fnc_HPhonePlayer
*/
private["_chance","_random","_num"];
_num = ctrlText 8201;
if(!([_num] call life_fnc_isnumeric))exitWith{hint "Ce n'est pas un numero";};
if(!([_num] call CALL_fnc_checkConnected)) exitWith {hint "Le numero est introuvable ou le smartphone de la cible est éteinds."};
_target = [_num] call CALL_fnc_numToUnit;
if(typeName _target == "STRING") exitWith {hint "Le Smartphone de la cible est éteinds."};
closeDialog 0;
createDialog "life_KIRAmsg";
[player,_num] remoteExecCall ["KIRA_fnc_FetchMsgPlayer",2];