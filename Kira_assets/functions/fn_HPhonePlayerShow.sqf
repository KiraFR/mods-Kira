/*
	File: fn_HPhonePlayerShow.sqf
	Auteur: J. `Kira` D.
	
	Description:
	voir message phone
	
	PARAMETRES:
	1. ARRAY(Messages)
	
	RETURNS: 
	NONE
	
	CALL: 
	[ARRAY] spawn KIRA_fnc_HPhonePlayerShow
*/
private["_MenuDisplay","_listMenu","_msg","_rowData","_stringtext","_listMessage"];
_listMessage = param[0,[],[[]]];
disableSerialization;
waitUntil {!isNull findDisplay 8100};
_MenuDisplay = findDisplay 8100;
_listMenu = _MenuDisplay displayCtrl 8101;
lnbClear 8101;
{
		_msg = [_listMessage select 5,25] call KRON_StrLeft;
		_rowData = [_listMessage select 2, _listMessage select 4,
				    _listMessage select 5, _listMessage select 1,
				    _listMessage select 0,_listMessage select 6];
		_stringtext = format["%1",(_listMessage select 1)];
		_listMenu lnbAddRow[_stringtext,(_listMessage select 6),format["%1 ...",_msg]];
		_listMenu lnbSetData[[((lnbSize _listMenu) select 0)-1,0],str(_rowData)];
}foreach _listMessage;
_listMenu lnbSetCurSelRow 0;