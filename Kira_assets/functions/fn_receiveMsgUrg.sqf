#include <macro.h>
/*
	File:  fn_receiveMsgUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
	[	[ID,[Type,[Conversation]],[(numero/”Inconnu”),Pos],Marker,traité/nontraité,guid(, objet)], ....];

	PARAMETRES:
	1. STRING (message)
	2. STRING (uid)
	(3. OBJECT (Joueur)) = Admin

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_receiveMsgUrg
*/
private["_numero","_position","_uid",,"_message","_i"];
_msgReceived = param[0,"",[""]];
_uid = param[1,"",[""]];
_sideP = param[2,sideUnknown,[0,sideUnknown]];
if(_uid == "" OR (_sideP == sideUnknown))exitWith{};
switch (_sideP) do {
	case 0 : {
			_unit = param[3,objNull,[objNull]];
			_position = position _unit;
			_numero = numberPlayer(_unit);
			_side = "messagesAdmin";
			_messages = VarObject(Marker_object, _side,[]);
		};
	};
	default {
		_side = format["messages%1",playerSide];
		_messages = VarObject(Marker_object, _side,[]);
	};
};

_i = -1;
{
	_uidP = _x param[5,"",[""]];
	if(_uid isEqualTo _uidP)exitWith{
		_i = _forEachIndex;
	};
}foreach _messages;

if(_i != -1) then{
	_message = (_messages select _i);
	_conv = (_message select 1) select 1;
	_conv pushBack [0,_msg];
	_message set[1,_conv];
	_messages set [_i,_message];
	setVarPublic(Marker_object,_side,_messages);
	[1] remoteExec ["KIRA_fnc_notification",_sideP];
}else{
	hint "Le service que vous essayez de joindre n'est pas/plus disponible, veuillez renvoyer un message d'urgence à ce service.";
};