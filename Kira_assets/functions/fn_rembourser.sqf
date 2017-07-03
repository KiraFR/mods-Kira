#include <macro.h>
/*
	File:  fn_rembourser.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_rembourser
*/
params[
	["_amount",0,[0]],
	["_taxe",0,[0]],
	["_numAcc","",[""]]
];
hint parseText "Le compte bancaire ciblé n'existe pas. </br> Remboursement en cours..";

_accountPerso = varMission("AccountBanque");
{
	_account = _x;
	_accID = _x select 1;
	if(_numAcc == _accID) exitWith{
		if(typeName _account == "STRING")then{
			_bank = parseNumber(_account);
		}else{
			_bank = _account select 2;
		};
		_account set[2,(_bank + _amount + _taxe)];
		_accountPerso set[_forEachIndex,_account];
	};
}foreach _accountPerso;
[CASH,BANK,_amount,_taxe,"Remboursement"] remoteExecCall ["KIRA_fnc_taxes",2];
setVarMission("AccountBanque",_accountPerso);
call SOCK_fnc_updateBanque;
player setVariable ["transaction",false,true];
hint "Remboursement terminé.."; 