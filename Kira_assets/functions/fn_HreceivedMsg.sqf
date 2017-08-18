#include <macro.h>
/*
	File:  fn_HreceivedMsg.sqf
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
	[] call KIRA_fnc_HreceivedMsg
*/

private["_listMsg","_i","_msg","_number","_listconversations","_num","_display"];
disableSerialization;
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
	(_listMsg select 1) pushBack [1,_msg];
	_listMsg set[2,true];
	_listconversations set [_i,_listMsg];
	setVarProfile("conversations",_listconversations);
}else{
	_listMsg = [_number,[[1,_msg]],true];
	_listconversations pushBack _listMsg;
	setVarProfile("conversations",_listconversations);
};
