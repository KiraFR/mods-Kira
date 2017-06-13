/*
	File: fn_removeConv.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_removeConv
*/
private["_listMsg"];
_listconversations = profileNamespace getVariable "conversations";
{
	_num = (_x select 0);
	if((conversationTarget select 1) == _num) exitWith{
		_listMsg = _x;
	};
}foreach _listconversations;
if(isNil "_listMsg") exitWith{}; // JE VOIS PAS POURQUOI !

_index = _listconversations find _listMsg;
_listconversations deleteAt _index;
profileNamespace setVariable ["conversations",_listconversations];
[] spawn KIRA_fnc_initMsg;