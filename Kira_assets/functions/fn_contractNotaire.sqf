/*
	File: fn_contractNotaire.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1. STRING(Montant argent)
	2. STRING(Description)

	RETURNS:
	NONE

	CALL:
	[STRING,STRING] call KIRA_fnc_contractNotaire
*/
private["_contratAct","_obj"];
params[
	["_amount","",[""]],
	["_desc","",[""]],
	["_nameClient","",[""]]
];
if(isNull OBJECTMAP) exitWith {hint "Contactez un administrateur, un objet mapping est manquant."};
_obj = missionNamespace getVariable ["Clientnotain",objNull];
if(isNull _obj) exitWith {hint "Veuillez recommencer la procédure.";closeDialog 0;};
_taxe = OBJECTMAP getVariable ["taxeNotaire",0.5];
_gouvTake = _taxe * _amount;
_realAmount = _amount - _gouvTake;
_realAmount = [_realAmount] call life_fnc_numberText;
_gouvTake = [_gouvTake] call life_fnc_numberText;
_amount = [_amount] call life_fnc_numberText;
_contratAct = missionNamespace getVariable ["contratActuel",[]];
if not (count _contratAct > 0) exitWith{hint "Veuillez recommencer la procédure.";closeDialog 0;};
{if(_contratAct select _forEachIndex == "") then{(_contratAct select _forEachIndex) = _x;};
}forEach [_nameClient,_amount,_realAmount,name player,_desc];
diag_log str(_contratAct);
missionNamespace setVariable ["contratActuel",_contratAct];
closeDialog 0;
[[name player],true,player] remoteExecCall ["KIRA_fnc_receiveTestament",_obj];
[true,_obj] spawn KIRA_fnc_waitUntilBothSign;