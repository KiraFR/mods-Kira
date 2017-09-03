#include <macro.h>
/*
	File: fn_InitsendMoneyItem.sqf
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
	call KIRA_fnc_InitsendMoneyItem
*/
disableSerialization;
private _unit = param[0,objNull,[objNull]];
private _type = param[1,0,[0]];
createDialog "DOSTARA_GIVE";
waitUntil {!isNull (findDisplay 9000)};
private _dialog = findDisplay 9000;
private _title = _dialog displayCtrl 9001;
private _list = displayNull;
KIRA_typeSend = _type;
KIRA_toSend = _unit;

switch (_type) do { 
	case 1 : {
		ctrlShow[9003,false];
		_list = _dialog displayCtrl 9002;
		_title ctrlSetText format["Envoyer un item à %1",name _unit];
		{
			_str = [_x] call life_fnc_varToStr;
			_shrt = [_x,1] call life_fnc_varHandle;
			_val = missionNameSpace getVariable _x;
			if(_val > 0) then
			{
				_list lbAdd format["%1x - %2",_val,_str];
				_list lbSetData [(lbSize _list)-1,_shrt];
			};
		} forEach life_inv_items;
	}; 
	case 2 : {
		ctrlShow[9002,false];
		ctrlShow[9005,false];
		_title ctrlSetText format["Envoyer de l'argent à %1",name _unit];
	};
};