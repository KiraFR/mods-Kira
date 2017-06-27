/*
	File: fn_saveMoney.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_saveMoney
*/
private["_i","_account","_accID","_total","_accountPerso"];
params[["_amount",0,[0]],["_numAcc","",[""]],["_total",false,[false]],["_sender",objNull,[objNull]]];
_accountPerso = varMission("AccountBanque");
{
	_accID = _x select 1;
	if(typeName _accID == "SCALAR")then{_accID = str(_accID);};
	if(_numAcc == _accID) exitWith{
		if(_total) then {
			_account set[2,_amount];
			_accountPerso set[_forEachIndex,_account];
		}else{
			_account set[2,((_account select 1) + _amount)];
			_accountPerso set[_forEachIndex,_account];
		}
	};
}foreach _accountPerso;

setVarMission("AccountBanque",_accountPerso);
[9] call SOCK_fnc_updatePartial;
_sender setVariable ["transaction",false,true];