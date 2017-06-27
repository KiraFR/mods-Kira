/*
	File: fn_removeBankCont.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_removeBankCont
*/
private["_repertoireBanque","_bankContact","_myAcc"];
_data = param[0,"",[""]];
_indexL = param[1,0,[0]];
_bankContact = call compile format["%1",_data];
_repertoireBanque = varProfile("repertoireBanque");
_accountPerso = varMission("AccountBanque");
{_num = _x select 1;if((_bankContact select 1) == _num)exitWith{_myAcc = true;};}foreach _accountPerso; // un de mes comptes ?
if(!(isNil "_myAcc"))exitWith { hint "Vous ne pouvez pas supprimer votre compte de ce repertoire.";[9] call SOCK_fnc_updatePartial;};
_index = _repertoireBanque find _bankContact;
if(_index == -1)exitWith{hint "Un Probleme est survenue, veuillez fermer votre telephone et le rallumer."}; //ça devrait pas arriver -_- fuck you arma
_repertoireBanque deleteAt _index;
hint Format["Vous venez de supprimer le contact %1(%2) de votre repertoire bancaise.",_bankContact select 0,_bankContact select 1];
profileNamespace setVariable["repertoireBanque",_repertoireBanque];
[9] call SOCK_fnc_updatePartial;
((findDisplay 5000) displayCtrl 5001) lbDelete _indexL;