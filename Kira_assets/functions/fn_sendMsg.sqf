#include <macro.h>
/*
	File:  fn_sendMsg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	[numero,[conversation]]
	conversation: 
		[NOMBRE, MESSAGE]
		1.NOMBRE(0: lui, 1: Moi)
		2.MESSAGE(PARSETEXT)

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_receivedMsg
*/
private["_listMsg","_i","_msg","_unit","_numero","_color"];
disableSerialization;
_display = findDisplay 4920;
waitUntil {!isNull _display};
_controlGrp = _display displayCtrl 4921;
_titleConv = _display displayCtrl 4922;
_listconversations = varProfile("conversations");

{
	_num = (_x select 0);
	_i = _forEachIndex;
	if((conversationTarget select 1) == _num) exitWith{_listMsg = _x;};
}foreach _listconversations;

if(!(isNil "_listMsg")) then{
	_msg = ctrlText 4939;
	_numero = _listMsg select 0;
	(_listMsg select 1) pushBack [1,_msg];
	_listconversations set [_i,_listMsg];
	setVarProfile("conversations",_listconversations);
}else{
	_msg = ctrlText 4939;
	_numero = (conversationTarget select 1);
	_listMsg = [(conversationTarget select 1),[[1,_msg]]];
	_listconversations pushBack _listMsg;
	setVarProfile("conversations",_listconversations);
};
_color = [_numero] call KIRA_fnc_getColorContact;
[_msg,1,_color] spawn KIRA_fnc_addMsg;
_unit = [(conversationTarget select 1)] call KIRA_fnc_numToUnit;
if(isNull _unit) exitWith{};
sleep 1;
[_msg,number] remoteExecCall ["KIRA_fnc_receivedMsg",_unit];