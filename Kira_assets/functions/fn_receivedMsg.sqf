#include <macro.h>
/*
	File: fn_receivedMsg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	[number,[conversation]]
	conversation: 
		[NOMBRE, MESSAGE]
		1.NOMBRE(0: lui, 1: Moi)
		2.MESSAGE(PARSETEXT)

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_receivedMsg
*/

private["_listMsg","_i","_msg","_number","_listconversations","_num"];
params[
	["_msg","",[""]],
	["_number","",[""]]
];
_listconversations = varProfile("conversations");

{
	_num = (_x select 0);
	if(_number == _num) exitWith{
		_i = _forEachIndex;
		_listMsg = _x;
		_num = (_x select 0);
	};
}foreach _listconversations;
if(!(isNil "_listMsg")) then{
	(_listMsg select 1) pushBack [0,_msg];
	_listconversations set [_i,_listMsg];
	setVarProfile("conversations",_listconversations);
}else{
	_listMsg = [_number,[[0,_msg]]];
	_listconversations pushBack _listMsg;
	setVarProfile("conversations",_listconversations);
};
if((!isNull findDisplay 4150) && !(isNil "conversationTarget")) then {
	if((conversationTarget select 1) != _num) then{
		_color = [conversationTarget select 1] call KIRA_fnc_getColorContact;
		[_msg,0,_color] spawn KIRA_fnc_addMsg;
	};
};