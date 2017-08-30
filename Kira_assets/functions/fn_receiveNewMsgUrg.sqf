#include <macro.h>
/*
	File:  fn_receiveNewMsgUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
	[	[ID,[Type,[Conversation]],[(numero/”Inconnu”),Pos],Marker,traité/nontraité,guid(, objet)], ....];

	PARAMETRES:
	1. STRING (type)
	2. STRING (message)
	3. SIDE (qui reçoit le nouveau message)
		1. West (Police Insulaire)
		2. independent (Service Medical)

	RETURNS:
	NONE

	CALL:
	[STRING,STRING,SIDE] call KIRA_fnc_receiveMsgUrg
*/
private["_numero","_position","_message","_i","_side"];
_receiver = param[0,sideUnknown,[sideUnknown]];
_type = param[1,"",[""]];
_msgReceived = param[2,"",[""]];
_checkPosition = getControl(7000,7006);
_checkNumero = getControl(7000,7007);


if(cbChecked _checkNumero)then{_numero = number;}else{_numero = "Inconnu";};
if(cbChecked _checkPosition)then{_position = position player;}else{_position = "Inconnu";};
_uid = getPlayerUID player;
_side = format["messages%1",_receiver];
_messages = VarObject(Marker_object, _side,[]);

{
	_uidP = _x param[5,"",[""]];
	if(_uid isEqualTo _uidP)exitWith{_i = true;};
}foreach _messages;
if(_i)exitWith{hint "Veuillez attendre que votre dernier appel d'urgence soit traité."};

_marker = _uid;
_msg = format["Message d’urgence en provenance de %1 à la position %2 pour la raison suivante: %3.</br>Message:</br> %4",_numero,_position,_type,_msgReceived];
_message = [[_type,[[0,_msg]]],[_numero,_position],_marker,false,_uid];
_messages pushBack _message;
setVarPublic(Marker_object,_side,_messages);
if(typeName _position != "STRING")then{
	_aff = format["%1 - %2",_numero,_type];
	[_marker,_aff,_position] remoteExecCall ["KIRA_fnc_markerUrgence",_receiver];
};
if(typeName _receiver == "SCALAR")then{
	[1,true] remoteExec ["KIRA_fnc_notification",_receiver];
}else{
	[1] remoteExec ["KIRA_fnc_notification",_receiver];
};