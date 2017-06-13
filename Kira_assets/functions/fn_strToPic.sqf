/*
	File: fn_strToPic.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.STRING

	RETURNS:
	1.STRING

	CALL:
	[STRING] call KIRA_fnc_strToPic
*/
private["_arrayOfStr"];
params[
	["_msg","",[""]]
];

_toArray = _msg splitString "";
if(count _toArray == 0) exitWith{_msg};
for "_i" from 0 to count(_toArray)-3 do {
	if(_toArray select _i == ":")then {
		_arrayOfStr = [_toArray select _i,_toArray select _i+1,_toArray select _i+2] call KIRA_fnc_cfgEm;
		_toArray set [_i,_arrayOfStr select 0];
		_toArray set [_i+1,_arrayOfStr select 1];
		_toArray set [_i+2,_arrayOfStr select 2];
	};
};

_msg = _toArray select 0;
for "_d" from 1 to count(_toArray)-1 do {
	_msg = format["%1%2",_msg, _toArray	select _d];
};
_msg;