#include <macro.h>
/*
	File:  fn_saveMoney.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_saveMoney
*/
private["_i","_account","_accID","_total","_accountPerso","_delAdd"];
params[
	["_amount",0,[0]],
	["_numAcc","",[""]],
	["_taxe",0,[0]],
	["_delAdd",false,[false]] // true : addition; false : soustraction
];

_accountPerso = varMission("AccountBanque");
{
	_account = _x;
	_accID = _x select 1;
	if(_numAcc == _accID) exitWith{
		if(_delAdd)then{
			if(typeName _account == "STRING")then{
				_bank = parseNumber(_account);
			}else{
				_bank = _account select 2;
			};
			_account set[2,(_bank + _amount)];

		}else{
			if(typeName _account == "STRING")then{
				_bank = parseNumber(_account);
			}else{
				_bank = _account select 2;
			};
			_account set[2,(_bank - _amount)];
		};
		_accountPerso set[_forEachIndex,_account];
	};
}foreach _accountPerso;
[CASH,BANK,_amount,_taxe,"Virement",getPlayerUID player] remoteExecCall ["KIRA_fnc_taxes",2];
setVarMission("AccountBanque",_accountPerso);
call SOCK_fnc_updateBanque;
[9] call SOCK_fnc_updatePartial;
player setVariable ["transaction",false,true];