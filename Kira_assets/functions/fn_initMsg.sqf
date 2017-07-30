#include <macro.h>
/*
	File:  fn_initMsg.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	[number,[conversation]]
	conversation: 
		[NOMBRE, MESSAGE]
		1.NOMBRE(0: lui, 1: Moi)
		2.MESSAGE(PARSETEXT)

	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initMsg
*/
private["_listC"];
disableSerialization;
waitUntil {!isNull findDisplay 4150};
_display = findDisplay 4150;
_listC = _display displayCtrl 4901;

ctrlSetText[4106,varProfile("imageBackground")];
ctrlSetText[4155,format["Mes messages(%1)",number]];
// [number,[conversation]]
_listconversations = varProfile("conversations");

lbClear _listC;
{
	_bool = _x param[2,false];
	_ico = if(_bool)then{
		"\Kira_assets\texture\notification\SMSnonLu.paa";
	}else{
		"\Kira_assets\texture\notification\SMSLu.paa";
	};
	_contact = [(_x select 0)] call KIRA_fnc_fetchRepertoire;
	if((_contact select 0) == "")then {_listC lbAdd (_contact select 1);}else{_listC lbAdd (_contact select 0);};
	_size = lbSize(_listC)-1;
	_listC lbSetTooltip [_size,str(_contact select 1)];
	_listC lbSetColor [_size,_contact select 2];
	_listC lbSetData [_size,str(_contact)];
	_listC lbSetPicture [_size,_ico];
}foreach _listconversations;
lbSort [_listC, "ASC"];
ctrlEnable[4154,false];
ctrlEnable[4152,false];
ctrlEnable[4153,false];