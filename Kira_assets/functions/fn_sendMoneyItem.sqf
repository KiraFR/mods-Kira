#include <macro.h>
/*
	File: fn_sendMoneyItem.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	KIRA_typeSend = 
		1. Give Item
		2. Give Money

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_sendMoneyItem
*/
ctrlEnable[9004,false];
private _type = KIRA_typeSend;
private _unit = KIRA_toSend;
if(isNil "_type")exitWith{ctrlEnable[9004,true];};
if(isNil "_unit" OR isNull _unit)exitWith{ctrlEnable[9004,true];};
switch (_type) do { 
	case 1 : {
		if((lbCurSel 9002) == -1) exitWith {hint "Pas de cible";ctrlEnable[9004,true];};
		_val = ctrlText 9005;
		_item = lbData [9002,lbCurSel 9002];
		_item = call compile format["%1",_item];
		[_val,_item,_unit] call life_fnc_giveItem;
	}; 
	case 2 : {
		_amount = ctrlText 9003;
		[_amount,_unit] call life_fnc_giveMoney;
	};
};