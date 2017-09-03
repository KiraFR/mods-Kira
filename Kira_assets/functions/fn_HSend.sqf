#include <macro.h>
/*
	File:  fn_HSend.sqf
	Auteur: J. `Kira` D.
	
	Description:
	1 STRING (numero)
	
	PARAMETRES:
	1. STRING (destination du message)
	2. STRING (Message)
	
	RETURNS: 
	NONE

	CALL: 
	[STRING] call KIRA_fnc_HSend
*/
params[
	["_numDest","",[""]],
	["_msg","",[""]]
];
private _num = varMission("lockphonenum");
private _unit = [_num] call KIRA_fnc_numToUnit;
private _unitDest = [_numDest] call KIRA_fnc_numToUnit;

if(isNull _unit)exitWith{
	Terminal_fulltext = Terminal_fulltext + "La cible a éteint son téléphone ou n'existe pas.";
};
[_numDest,_msg] remoteExecCall["KIRA_fnc_HreceivedMsg",_unit];

if(isNull _unitDest)exitWith{
	Terminal_fulltext = Terminal_fulltext + "La personne que vous essayez de joindre a éteint son téléphone ou n'existe pas.";
};

[_numDest,_msg] remoteExecCall["KIRA_fnc_receivedMsg",_unitDest];