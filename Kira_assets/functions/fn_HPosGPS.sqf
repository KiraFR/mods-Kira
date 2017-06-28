#include <macro.h>
/*
	File:  fn_HPosGPS.sqf
	Auteur: J. `Kira` D.
	
	Description:
	KIRA de la position GPS du joueur
	
	PARAMETRES:
	1. STRING(numero joueur)
	
	RETURNS: 
	1. LOCATION(Position joueur) 

	CALL: 
	[STRING] spawn KIRA_fnc_HRadioPlayer
*/
_num = param[0,"",[""]];
_display = findDisplay 6100;
_Text = _display displayCtrl 6101;
if(!([_num] call CALL_fnc_checkConnected)) exitWith{hint "Le Smarphone de la cible est éteind."};
_target = [_num] call CALL_fnc_numToUnit;
_pos = position _target;
_text = format["Voici la position du numero %1: %2<br/>", _num, _pos];
Terminal_fulltext = Termimal_fulltext + _text;
_Text ctrlSetStructuredText parseText Terminal_fulltext