#include <macro.h>
/*
	File:  fn_HRadioPlayer.sqf
	Auteur: J. `Kira` D.
	
	Description:
	plus de radio
	
	PARAMETRES:
	1. OBJECT(Hacker)
	
	RETURNS: 
	NONE 

	CALL: 
	[] spawn KIRA_fnc_HRadioPlayer
*/

private["_pos"];
_Hacker = _this select 0;

while{(_Hacker distance player) < KIRA_distance} do {
	if((player getVariable ["tf_sendingDistanceMultiplicator",1]) != 0) then {
		player setVariable ["tf_sendingDistanceMultiplicator",0,true];
	};
	if((player getVariable ["tf_receivingDistanceMultiplicator",1]) != 0) then {
		player setVariable ["tf_receivingDistanceMultiplicator",0,true];
	};
	if((player getVariable ["tf_terrain_interception_coefficient",7]) != 0) then {
		player setVariable ["tf_terrain_interception_coefficient",0,true];
	};
	sleep 1;
};

player setVariable ["tf_sendingDistanceMultiplicator",1,true];
player setVariable ["tf_receivingDistanceMultiplicator",1,true];
player setVariable ["tf_terrain_interception_coefficient",7,true];