/*
	File: fn_editBankContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_editBankContact
*/
private ["_repertoireBanque"];
_nom = ctrlText 5201;
_repertoireBanque = profileNamespace getVariable "repertoireBanque";
{
	if((contactbank select 1) == (_x select 1)) exitWith {
		_repertoireBanque = _repertoireBanque - [_x];
		_repertoireBanque pushBack [_nom,(_x select 1)];
	};
}foreach _repertoireBanque;
profileNamespace setVariable ["repertoireBanque",_repertoireBanque];
closeDialog 0;