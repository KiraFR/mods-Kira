#include <macro.h>
/*
	File: fn_initUrg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	un message = 
		[ ID,[Type,[Conversation]],[numero/”Inconnu”,Pos],Marker,traité/nontraité(, objet)];

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initUrg
*/
private["_messages","_pour"];
disableSerialization;
_display = findDisplay 6400;
_list = _display displayCtrl 6401;
ctrlSetText[4106,varProfile("imageBackground")];
if(levelAdmin >)
_messages = Marker_object getVariable [format["messages%1",playerSide],[]];
lbClear _list;
if(count _messages > 0)then{
	{

		_numero = format["%1 - %2",(_x select 2) select 1,(_x select 2) select 0];
		_list lbAdd _numero;
		_list lbSetColor [(lbSize _list)-1,[_x param[4,false,[false]]] call KIRA_fnc_colorUrg];
		_toSend = [_forEachIndex] + _x;
		_list lbSetData [(lbSize _list)-1,str(_toSend)];
	}forEach _messages;
}else{
	_list lbAdd "Pas de nouveaux messages";
	ctrlEnable[6402,false];
	ctrlEnable[6403,false];
};