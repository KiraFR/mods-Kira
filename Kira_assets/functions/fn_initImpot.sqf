#include <macro.h>
/*
	File:  fn_initImpot.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
  Si les impots sont payé en RP


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_initImpot
*/
_private["_amount","_max"];
_listBankAccount = varMission("compteBanque"); // pas le bon nom
_amount = 0;
_max = [];
{
  _amountAcc =_x select 1;
  if(typeName _amountAcc != "SCALAR")then{
    _amountAcc = parseNumber (_amountAcc);
  };
  _amount = _amount + _amountAcc;
  _max pushBack _amountAcc;
}foreach _listBankAccount;

_maxAmount = selectMax _max;
_indexMax = _max find _maxAmount;
_maxAmount = _maxAmount - (_amount * 0.02);

(_listBankAccount select _indexMax) select 1 = _maxAmount;
setVarMission("compteBanque",_listBankAccount);

[9] call SOCK_fnc_updatePartial;
[getPlayerUID player] remoteExecCall ["KIRASERVER_fnc_impotPaye",2];
