#include <macro.h>
/*
	File:  fn_delMessageUrgence.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
	[ [ID,[Type,[Conversation]],[(numero/”Inconnu”),Pos],Marker,traité/nontraité,guid(, objet)], ....];

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	[STRING,STRING, ARRAY] call KIRA_fnc_delMessageUrgence
*/
private _message = param[0,[],[[]]];
private _marker = _message param[3,"",[""]];
private _id = _message param[0,0,[0]];
private _side = format["messages%1",_receiver];
private _messages = VarObject(Marker_object, _side,[]);
_messages deleteAt _id;
_marker remoteExecCall ["deleteMarkerLocal",playerSide];
setVarPublic(Marker_object,_side,_messages);