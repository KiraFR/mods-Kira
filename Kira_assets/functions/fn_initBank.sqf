#include <macro.h>
/*
	File:  fn_initBank.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initBank
*/
private["_listR","_listRepertAcc","_listAccSender","_listS","_repertoireAcc","_display"];
disableSerialization;
//[nom,numeroCompte,Montant,defaut];
_accountPerso = varMission("AccountBanque");
if (isNil "_accountPerso" OR (count _accountPerso == 0))exitWith {
	if(dialog)then{closeDialog 0;};
	hint parseText "Vous n'avez pas de compte en banque...</br>
	Veuillez vous rendre dans une banque pour pouvoir en créer un.";
};

_listRepertAcc = getControl(5000,5001);// compte qui reçois
_listAccSender = getControl(5000,5002);// Compte qui envoi
ctrlSetText[4106,varProfile("imageBackground")];
//[nom,numeroCompte]
_repertoireAcc = profileNamespace getVariable ["repertoireBanque",[]];
_reperShow = (_repertoireAcc + _accountPerso);
{
  	_listRepertAcc lbAdd format["%1(%2)",_x select 0, _x select 1];
  	lbSetData [5001,_forEachIndex,str(_x select 1)];
}foreach _reperShow;

{
    _listAccSender lbAdd format["%1 - Montant: %2",_x select 0,_x select 2];
    lbSetData [5002,_forEachIndex, str([_x select 1,_x select 2])];
} forEach _accountPerso;