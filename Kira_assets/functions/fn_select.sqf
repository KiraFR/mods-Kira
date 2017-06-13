/*
	File: fn_select.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_select
*/

_contact = call compile format["%1",lbData[4151,(lbCurSel 4151)]];
if(_contact isEqualTo -1)exitWith{ctrlEnable[4153,false];};
contact = _contact;