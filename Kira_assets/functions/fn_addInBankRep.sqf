#include <macro.h>
/*
	File:  fn_addInBankRep.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_addInBankRep
*/
private["_repert"];
_numero = ctrlText 5022;
_nom = ctrlText 5021;

if([_numero] call KIRA_fnc_inRepBank)exitWith{hint "Ce numéro existe déjà dans votre repertoire bancaire.";};
if(_nom == "" OR _numero == "")exitWith{hint "Veuillez completer le formulaire..";};
_repert = varProfile("repertoireBanque");
_repert pushBack [_nom,_numero];
setVarProfile("repertoireBanque",_repert);
closeDialog 0;
/* A REVOIR
[(findDisplay 5000),5001] call KIRA_fnc_refreshList;
[(findDisplay 5000),5002] call KIRA_fnc_refreshList;
*/
