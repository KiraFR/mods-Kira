#include <macro.h>
/*
	File:  fn_removeBankCont.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_removeBankCont
*/
private["_repertoireBanque","_bankContact","_myAcc","_indexL","_data","_accountPerso","_index","_num"];

_myAcc = false;
_data = (lbData[5001,(lbCurSel 5001)]);
_indexL = (lbCurSel 5001);
diag_log format["%1",_data];
diag_log format["%1",_indexL];
_bankContact = call compile format["%1",_data];
_repertoireBanque = varProfile("repertoireBanque");
_accountPerso = varMission("AccountBanque");
diag_log format["%1",_bankContact];
diag_log format["%1",_repertoireBanque];
diag_log format["%1",_accountPerso];
{_num = _x select 1;if((_bankContact) == _num)exitWith{_myAcc = true;};}forEach _accountPerso; // un de mes comptes ?
if(_myAcc)exitWith { hint "Vous ne pouvez pas supprimer votre compte de ce repertoire.";};

_index = _repertoireBanque find _bankContact;
diag_log format["%1",_index];
if(_index == -1)exitWith{hint "Un Probleme est survenue, veuillez fermer votre telephone et le rallumer."}; //ça devrait pas arriver -_- fuck you arma
diag_log format["%1",_repertoireBanque];
_repertoireBanque deleteAt _index;
diag_log format["%1",_repertoireBanque];

hint format["Vous venez de supprimer le contact %1(%2) de votre repertoire bancaise.",_bankContact select 0,_bankContact select 1];
profileNamespace setVariable["repertoireBanque",_repertoireBanque];

((findDisplay 5000) displayCtrl 5001) lbDelete _indexL;
