/*
	File: fn_addInBankRep.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_addInBankRep
*/
_numero = ctrlText 5022;
_nom = ctrlText 5021;
if([_numero] call KIRA_fnc_inRepBank)exitWith{hint "Ce numéro existe déjà dans votre repertoire bancaire.";};
if(_nom == "" OR _numero == "")exitWith{hint "Veuillez completer le formulaire..";};

profileNamespace setVariable ["repertoireBanque",(profileNamespace getVariable "repertoireBanque") pushBack [_nom,_numero]];
closeDialog 0;
[(findDisplay 5000),5001] call KIRA_fnc_refreshList;
[(findDisplay 5000),5002] call KIRA_fnc_refreshList;