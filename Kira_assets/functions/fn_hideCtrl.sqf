#include <macro.h>
/*
	File:  fn_hideCtrl.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_hideCtrl
*/
private["_i","_stop"];
params[
	["_idc",0,[0]],
	["_noMouse",[],[[]]],
	["_mouse",[],[[]]]
];
_i = 0;
_stop = false;
stopB = false;

while {_i <= 3} do {
	if(stopB) exitWith {_stop=true;};
	sleep 0.2;
	_i = _i + 1;
	if(_i > 3) then {finished = true;};
};

waitUntil {finished};
if(_stop)exitWith{};

disableSerialization;
if(_idc in _noMouse)then{
	_indexIdc = _noMouse find _idc;
	{
		if(ctrlVisible _x) then {
			ctrlShow[_x,false];
		};
	}foreach _mouse;
	ctrlShow[_idc,false];
	ctrlShow[(_mouse select _indexIdc),true];
};