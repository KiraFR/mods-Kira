#include "..\macro.h"
/*
	File: fn_initConversation.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initConversation
*/
private["_nbr","_listconversations","_listMsg","_color"];
disableSerialization;
waitUntil {!isNull findDisplay 4920};
_controlGrp = getControl(4920,4921);
_titleConv = getControl(4920,4922);
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];
if((conversationTarget select 0) == "") then{
	_titleConv ctrlSetText format["%1",conversationTarget select 1];
}else{
	_titleConv ctrlSetText format["%1(%2)",conversationTarget select 0,conversationTarget select 1];
};
_titleConv ctrlSetTextColor (conversationTarget select 2);
ctrlshow[4903,false];
ctrlshow[4924,false];


// [number,[conversation]]
/*
	conversation:
	[NOMBRE, MESSAGE]
	1.NOMBRE(0: lui, 1: Moi)
	2.MESSAGE(PARSETEXT)
*/

_listconversations = profileNamespace getVariable "conversations";;
{
	_num = (_x select 0);
	if((conversationTarget select 1) == _num) exitWith{
		_listMsg = _x select 1;
		_color = [_num] call KIRA_fnc_getColorContact;
	};
}foreach _listconversations;

xNext = 0;
yEcart = 0.01;
if(isNil "_listMsg")exitWith{};
{
	_size = [(_x select 1)] call KIRA_fnc_sizePic;
	_msg = [(_x select 1)] call KIRA_fnc_strToPic;
	_pic = _display ctrlCreate ["RscPicture", -1,_controlGrp];
	_pic ctrlSetPosition [0,xNext + yEcart,0.348,_size];
	if((_x select 0) isEqualTo 0) then{_pic ctrlSetBackgroundColor _color;}else{_pic ctrlSetBackgroundColor [0,0,0,1];};
	_pic ctrlCommit 0;
	_pic ctrlSetText ([_x select 0] call KIRA_fnc_deQui);

	_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp];
	_ctrl ctrlSetPosition [0,xNext+0.02,0.33,_size];
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetStructuredText parseText format["<t size='1.0' color='#000000'>%1</t>",_msg];
	xNext =xNext + _size + yEcart;
}foreach _listMsg;
