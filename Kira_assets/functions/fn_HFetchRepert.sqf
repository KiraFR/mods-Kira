#include <macro.h>
/*
	File:  fn_HFetchRepert.sqf
	Auteur: J. `Kira` D.
	
	Description:
	
	
	PARAMETRES:
	1. OBJECT (Hacker)
	
	RETURNS: 
	NONE

	CALL: 
	[OBJECT] call KIRA_fnc_HFetchRepert
*/
_hacker = param[0,objNull,[objNull]];
_repert = varProfileDft("repertoire",[]);
[_repert] remoteExecCall ["KIRA_fnc_HFetchedRepert",_hacker];