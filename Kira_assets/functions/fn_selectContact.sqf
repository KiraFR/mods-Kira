/*
	File: fn_selectContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_selectContact
*/

_contact = call compile format["%1",lbData[4451,(lbCurSel 4451)]];
if(_contact isEqualTo -1)exitWith{ctrlEnable[4453,false];};
contact = _contact;
ctrlEnable[4454,true];