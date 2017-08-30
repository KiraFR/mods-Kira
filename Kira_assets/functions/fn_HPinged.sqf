#include <macro.h>
/*
	File:  fn_HPinged.sqf
	Auteur: J. `Kira` D.
	
	Description:

	
	PARAMETRES:
	1. STRING (message) 
	
	RETURNS: 
	NONE 

	CALL: 
	[STRING] call KIRA_fnc_HPinged
*/

_msg = param[0,"",[""]];
Terminal_fulltext = Terminal_fulltext + _msg;