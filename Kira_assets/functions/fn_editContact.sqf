/*
	File: fn_editContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_editContact
*/
private ["_listRepertoire"];
_nom = ctrlText 4551;
_color = call compile format["%1",lbData[4552,(lbCurSel 4552)]];

// nom,numero,color
_listRepertoire = varProfile("repertoire");

{
	if((contact select 1) == (_x select 1)) then {
		_listRepertoire = _listRepertoire - [_x];
		_listRepertoire pushBack [_nom,(_x select 1),_color];
	};
}foreach _listRepertoire;
setVarProfile("repertoire",_listRepertoire);
closeDialog 0;
call KIRA_fnc_showRepertoire;