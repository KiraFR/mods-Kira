/*
	File: fn_refreshList.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:
	1. DISPLAY(display)
	2. CONTROL(liste)

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_refreshList
*/
private["_list","_listR"];
params[["_display",displayNull,[displayNull]],["_control",0,[0]]];
if((isNull _display) OR (_control isEqualTo 0))exitWith{};
lbclear _control;
_list = _display displayCtrl _control;// compte qui reçois
switch (_control) do { 
	case 5001 : {
		_listR = _list lbAdd "";
		_listR lbSetData [0,""];
		{
		  _listR = _list lbAdd format["%1(%2)",_x select 0, _x select 1];
		  _listR lbSetData [_forEachIndex+1,str(_x select 1)];
		}foreach ((profileNamespace getVariable "repertoireBanque") + (missionNamespace getVariable "AccountBanque"));
	};
	case 5002 : {
		{
		    _listS = _listAccSender lbAdd format["%1 - Montant: %2",_x select 0,_x select 2];
		    _listS lbSetData [_forEachIndex, str([_x select 1,_x select 2])];
		} forEach _accountPerso;
	}; 
};