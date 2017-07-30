#include <macro.h>
/*
	File:  fn_setNonLu.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:
	1. ARRAY(Message)

	RETURNS:
	NONE

	CALL:
	[ARRAY] call KIRA_fnc_setNonLu
*/
_msg = param[0,[],[[]]];
_lu = _msg param[2,false];
diag_log str(_msg);
if(!_lu)exitWith{};

private _listconversations = varProfile("conversations");
_index = _listconversations find _msg;

(_listconversations select _index) set[2, false];
setVarProfile("conversations",_listconversations);