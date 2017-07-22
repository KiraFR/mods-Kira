#include <macro.h>
/*
	File:  fn_initBourse.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initBourse
*/
private["_sender"];
_sender = player;
[_sender,"KIRA_fnc_initBourse_Receive"] remoteExecCall ["Bourse_fnc_ReturnBourse",2];