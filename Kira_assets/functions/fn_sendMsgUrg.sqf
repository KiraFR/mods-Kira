#include <macro.h>
/*
	File:  fn_sendMsgUrg.sqf
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
	[] spawn KIRA_fnc_sendMsgUrg
*/
private["_listMsg","_i","_msg","_unit","_numero","_color","_message","_messages","_side","_sender","_ctrl","_pic","_display"];
disableSerialization;
_display = findDisplay 6900;
waitUntil {!isNull _display};
_controlGrp = getControl(4920,6921);
_titleConv = getControl(4920,6922);
_side = format["messages%1",playerSide];
_messages = VarObject(Marker_object, _side,[]);
_message = _messages select idUrgenceConv;

if(!(isNil "_message")) then{
	_msg = ctrlText 6939;
	(_message select 1) pushBack [1,_msg];
	_message pushBack [2,false];
	_messages set [idUrgenceConv,_message];
	setVarPublic(Marker_object,_side,_messages);
}else{
	hint parseText "Votre conversation a été supprimé par le destinataire.";
	closeDialog 0;
};

_numero = _message select 0;
if(_numero isEqualTo "Inconnu")exitWith{
	hint "Vous ne pouvez pas répondre car votre destinataire a envoyé un message d'urgence en inconnu.";
};


_color = [0,0,0,1];
_size = [_msg] call KIRA_fnc_sizePic;
_text = [_msg] call KIRA_fnc_strToPic;
_pic = _display ctrlCreate ["RscPicture", -1,_controlGrp];
_pic ctrlSetPosition [0,xNext + yEcart,0.348,_size];
_pic ctrlSetBackgroundColor [0,0,0,1];
_pic ctrlCommit 0;
_pic ctrlSetText ([1] call KIRA_fnc_deQui);

_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp];
_ctrl ctrlSetPosition [0,xNext+0.02,0.33,_size];
_ctrl ctrlCommit 0;
_ctrl ctrlSetStructuredText parseText format["<t size='1.0' color='#000000'>%1</t>",_text];
xNext = xNext + _size + yEcart;


_unit = [_numero] call KIRA_fnc_numToUnit;
if(isNull _unit) exitWith {};
sleep 1;
_sender = switch (playerSide) do {
	case west : {"Police Insulaire"}; 
	case independent : {"Service Medical"};
};
[_msg,_sender] remoteExecCall ["KIRA_fnc_receivedMsg",_unit];