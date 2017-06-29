#include <macro.h>
/*
	File:  fn_receivedMsg.sqf
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

private["_listMsg","_i","_msg","_number","_listconversations","_num","_findisplay"];
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

if(dialog)then{_findisplay = findDisplay 4150;};
diag_log format["%1",_findisplay];
if((!(isNull _findisplay)) && !(isNil "conversationTarget")) then {
	diag_log format["%1",conversationTarget];
	_target = (conversationTarget select 1);
	if(_target != _num) then{
		_color = [_target] call KIRA_fnc_getColorContact;
		[_msg,0,_color] spawn KIRA_fnc_addMsg;
	};
};