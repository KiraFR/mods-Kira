#include <macro.h>
/*
	File:  fn_removeContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_removeContact
*/
private["_listRepertoire","_index"];
// nom,numero,color
_listRepertoire = varProfile("repertoire");
//_contact = [contact select 0,contact select 1,contact select 2];
_index = _listRepertoire find contact;
if(_index != -1) then {
	[_index,_listRepertoire] spawn {
		_listRepertoire = _this select 1;
		_result = ["Êtes-vous sur de vouloir supprimer ce contact ?", "Êtes vous sur ?", true, true] call BIS_fnc_GUImessage;
		if(_result) then {
			_listRepertoire deleteAt (_this select 0);
			setVarProfile("repertoire",_listRepertoire);
			call KIRA_fnc_showRepertoire;
		};
	};
};

