#include <macro.h>
/*
	File: fn_initMsgUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
		[ID,[Type,[Conversation]],[(numero/”Inconnu”),Pos],Marker,traité/nontraité(, objet)];

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initMsgUrg
*/
private["_display","_controlGrp","_titleConv","_message","_pic","_ctrl","_color","_who","_text","_bg"];
disableSerialization;
_message = param[0,[],[[]]];
_conversation = _message param[1,[],[[]]];
_sender = (_message param[2,[],[[]]]) select 0;

createDialog "DOSTARA_CONVERSATIONURG";
idUrgenceConv = _message param[0,0,[0]];
_display = findDisplay 4920;
_controlGrp = getControl(4920,6921);
_titleConv = getControl(4920,6922);
_bg = getControl(4920,4106);
_titleConv ctrlSetText _sender;
_bg ctrlSetText varProfile("imageBackground");
xNext = 0;
yEcart = 0.01;

{
	_text = _x param[1,"",[""]];
	_who = _x param[0,0,[0]];
	_color = [0,0,0,1];
	_xV = 0;
	_size = [_text] call KIRA_fnc_sizePic;
	_msg = [_text] call KIRA_fnc_strToPic;
	_pic = _display ctrlCreate ["RscPicture", -1,_controlGrp];
	_pic ctrlSetPosition [0,xNext + yEcart,0.348,_size];
	if((_x select 0) isEqualTo 0) then{_pic ctrlSetBackgroundColor _color;_xV = 0.03;}else{_pic ctrlSetBackgroundColor [0,0,0,1];};
	_pic ctrlCommit 0;
	_pic ctrlSetText ([_who] call KIRA_fnc_deQui);

	_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp];
	_ctrl ctrlSetPosition [_xV,xNext+0.02,0.33,_size];
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetStructuredText parseText format["<t size='1.0' color='#000000'>%1</t>",_msg];
	xNext = xNext + _size + yEcart;
}forEach _conversation;