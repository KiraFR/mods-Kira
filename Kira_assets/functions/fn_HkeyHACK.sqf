#include <macro.h>
/*
	File:  fn_HkeyKIRA.sqf
	Auteur: J. `Kira` D.
	
	Description:
	action touche
	
	PARAMETRES:
	IMPORTANT: KEYCODE (https://community.bistudio.com/wiki/DIK_KeyCodes)
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HkeyKIRA
*/
private ["_handled","_code","_enterKey"];
if(isNull findDisplay 6900) exitWith{};
_code = _this select 1;
_handled = false;
_enterKey = [156,28];
switch (_code) do{
	case _enterKey:{
		[] spawn KIRA_fnc_Hcommand;
		ctrlSetText [9602,""];
	};
};
_handled;