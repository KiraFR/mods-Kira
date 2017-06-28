#include <macro.h>
/*
	File:  fn_HScanAnim.sqf
	Auteur: J. `Kira` D.
	
	Description:
	Animation scan
	
	PARAMETRES:
	1. NUMBER(RAYON)
	
	RETURNS: 
	NONE 

	CALL: 
	[RAYON] call KIRA_fnc_HScanAnim
*/
params[
	"_rayon",
	["_buyVpn",false,[false]]
];
if(isNil "_rayon")then{_rayon = 10;};
if(_rayon == 0)exitWith{};
disableSerialization;
_display = findDisplay 9600;
_structuredText = _display displayCtrl 9601;
Terminal_fulltext = Terminal_fulltext + ".:. ACTION EN COURS .:.<br/>";
_structuredText ctrlSetStructuredText parseText Terminal_fulltext;
if(_buyVpn) then {call KIRA_fnc_HChanceDetect;};
_points = "";
_y = 0;
_rayon = (_rayon*2);
for "_i" from 1 to _rayon do {
	if(_y > 3) then {_y = 1;};
	switch (_y) do {
		case 1 : {_points = "."}; 
		case 2 : {_points = ".."};
		case 3 : {_points = "..."};
	};
	_percent = floor(_i/_rayon * 100);
	_percent = format["<t align='center'>%3 %1%2 %3</t>",_percent,"%",_points];
	_structuredText ctrlSetStructuredText parseText (Terminal_fulltext + _percent);
	if(isNull _display)exitWith{Terminal_fulltext = "";};
	sleep 1;
	_y = _y +1;
};
Terminal_fulltext = Terminal_fulltext + "<br/>.:. ACTION TERMINE .:.<br/>";