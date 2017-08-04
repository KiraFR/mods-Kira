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
disableSerialization;
_amount = param[0,0,[0]];
_numAcc = param[1,"",[""]];
_taxe = param[2,0,[0]];
_delAdd = param[3,false,[false]]; // true : addition; false : soustraction
_receiver = param[4,false,[false]]; // true : receiver; false : sender

diag_log format["KIRA_fnc_saveMoney 1 : %1 %2",_amount,_delAdd];
_accountPerso = varMission("AccountBanque");
{
	_account = _x;
	_accID = _x select 1;
	if(_numAcc == _accID) exitWith{
		if(_delAdd)then{
			_bank = _account select 2;
			_account set[2,(_bank + _amount)];
		}else{
			_bank = _account select 2;
			_account set[2,(_bank - _amount)];
		};			
		_accountPerso set[_forEachIndex,_account];
	};
}foreach _accountPerso;
if(_receiver && !(isNil {number}))then{
	_numeroSender = param[5,"",[""]];
	_messages = format["Bonjour,</br>Vous venez de recevoir un virement, le numero %1 a envoyé %2 Dostar sur le compte ayant %3.",_numeroSender,_amount,_numAcc];
	[_messages,"Dostara Banque"] call KIRA_fnc_receivedMsg;
};
[CASH,BANK,_amount,_taxe,"Virement",getPlayerUID player] remoteExecCall ["KIRA_fnc_taxes",2];
setVarMission("AccountBanque",_accountPerso);
call SOCK_fnc_updateBanque;
[9] call SOCK_fnc_updatePartial;
player setVariable ["transaction",false,true];
_display = findDisplay 5000;
if !(isNull _display) then{call KIRA_fnc_initBank;};