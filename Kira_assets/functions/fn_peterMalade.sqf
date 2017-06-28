#include <macro.h>
/*
	File:  fn_peterMalade.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_peterMalade
*/

if !(isNil "entraindepeter") exitWith{
	hint "Vous vous sentez mal...";
	_cri = [
	    "KIRA_cri_1",
	    "KIRA_cri_2",
	    "KIRA_cri_3",
	    "KIRA_cri_4",
	    "KIRA_cri_5",
	    "KIRA_cri_6",
	    "KIRA_cri_7",
	    "KIRA_cri_8",
	    "KIRA_cri_9",
	    "KIRA_cri_10",
	    "KIRA_cri_11",
	    "KIRA_cri_12",
	    "KIRA_cri_13",
	    "KIRA_cri_14",
	    "KIRA_cri_15"
	];
	player setDamage ((damage player) + 0.1);
	_index = floor(random[1,7,15]);
	_distance = random[8,14,20];
	[player,(_cri select _index),_distance] remoteExecCall ["life_fnc_play3D",-2];
};


private ["_listPet"];
_listPet = [["pet_1",1],["pet_2",1],["pet_3",1],["pet_4",1],["pet_5",1],["pet_6",2],["pet_7",1],["pet_8",3],["pet_9",7],["pet_10",1],["pet_11",4]];
entraindepeter = true;
for "_i" from 0 to 4 do {
	_distance = random 10;
	_petl = _listPet select (floor(random 12));
	_pet = _petl select 0;
	[player,_pet,_distance] remoteExecCall ["life_fnc_play3D",-2];
	sleep (floor(random 16) + (_petl select 1));
};
entraindepeter = nil;