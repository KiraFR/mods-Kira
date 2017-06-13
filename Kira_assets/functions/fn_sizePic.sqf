/*
	File: fn_sizePic.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.STRING

	RETURNS:
	1.SCALAR

	CALL:
	[STRING] call KIRA_fnc_sizePic
*/
private["_nbr"];
_msg = param[0,"",[""]];
_arrayoftestLigne = _msg splitString "";

switch (true) do { 
	case ((count _arrayoftestLigne > 38) && (count _arrayoftestLigne < 76)) : {  _nbr = 0.15; }; 
	case ((count _arrayoftestLigne > 76) && (count _arrayoftestLigne < 112)) : {  _nbr = 0.2; }; 
	case ((count _arrayoftestLigne > 112) && (count _arrayoftestLigne < 150)) : { _nbr = 0.25; }; 
	case (count _arrayoftestLigne == 150) : { _nbr = 0.3;}; 
	default {_nbr = 0.1;}; 
};
_nbr