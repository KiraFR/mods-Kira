#include <macro.h>
/*
	File:  fn_addMsg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	[[nom,numero,color],[conversation]]
	conversation: 
		[NOMBRE, MESSAGE]
		1.NOMBRE(0: lui, 1: Moi)
		2.MESSAGE(PARSETEXT)

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_addMsg
*/
private["_msg","_size","_controlGrp","_titleConv","_display","_ctrl"];
params[
	["_msg","",[""]],
	["_who",0,[0]],
	["_color",[],[[]]]
];
disableSerialization;
_display = findDisplay 4920;
waitUntil {!isNull _display};
_controlGrp = _display displayCtrl 4921;
_titleConv = _display displayCtrl 4922;

_xV = 0;
_size = [_msg] call KIRA_fnc_sizePic;
_msg = [_msg] call KIRA_fnc_strToPic;
_pic = _display ctrlCreate ["RscPicture", -1,_controlGrp];
_pic ctrlSetPosition [_xV,xNext + yEcart,0.348,_size];
if(_who isEqualTo 0) then{
	_pic ctrlSetBackgroundColor _color;
	_xV = 0.03;
}else{
	_pic ctrlSetBackgroundColor [0,0,0,1];
};
_pic ctrlCommit 0; 
_pic ctrlSetText ([_who] call KIRA_fnc_deQui);
_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp]; 
_ctrl ctrlSetPosition [_xV,xNext+0.02,0.33,_size]; 
_ctrl ctrlCommit 0; 
_ctrl ctrlSetStructuredText parseText format["<t size='1.0' color='#000000'>%1</t>",_msg];
xNext =xNext + _size + yEcart;
ctrlSetText [4939,""];