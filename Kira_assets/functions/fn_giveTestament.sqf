#include <macro.h>
/*
	File:  fn_giveTestament.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:


	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_giveTestament
*/
_target = _this;
[[name player],true,player] remoteExecCall ["KIRA_fnc_receiveTestament",_target];
[true,_target] spawn KIRA_fnc_waitUntilBothSign;