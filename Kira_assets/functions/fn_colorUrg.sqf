/*
	File: fn_colorUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
		[ ID,[Type,[Conversation]],[numero/”Inconnu”,Pos],Marker,traité/nontraité(, objet)];

	PARAMETRES:
	1. BOOL (traité/non traité)

	RETURNS:
	1. ARRAY (couleur)

	CALL:
	[BOOL] call KIRA_fnc_colorUrg
*/
private ["_ret"];
_bool = param[0,false,[false]];

switch (playerSide) do { 
	case west : {_ret = if(_bool)then{[0.53,0.53,0.53,1]}else{[0,0.32,0.9,1]};}; 
	case independent : {_ret = if(_bool)then{[0.53,0.53,0.53,1]}else{[0,0.64,0.01,1]};}; 
	case civilian : {_ret = if(_bool)then{[0.53,0.53,0.53,1]}else{[0.4,0.15,0.67,1]};}; 
};

_ret;