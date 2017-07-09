#include <macro.h>
/*
	File:  fn_saveSettings.sqf
	Auteur: - J. `Kira` D.
			- R. `KronosD` R.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_saveSettings
*/
private["_account","_dflt","_number","_listcompte","_accountPerso"];
setVarProfile("imageBackground",thisBackground);
setVarProfile("anonyme",thisAnonyme);
_account = call compile format["%1",lbData[4656,lbCurSel (4656)]];
_dflt = _account select 2;
_number = _account select 0;
diag_log format["%1 , %2",_dflt,_number];
if(_dflt) then {
	hint "Ce compte est deja votre compte par defaut.";
}else{
	[getPlayerUID player,_account select 0] remoteExecCall ["BQKS_fnc_SetDefaultAccount",2];
	_value = format["%1",(_account select 1)];
    _value = parseNumber(_value);
	BANK = _value;
	hint parseText "Parametres enregistrés.<br/>Veuillez Redemarrer votre telephone pour que les changements s'appliquent.";
};

lbClear _listcompte;
_accountPerso = varMissionDft("AccountBanque",[]);

{
_dflt = _x select 3;
	if(_number == (_x select 0) ) then {
    	_listcompte lbAdd format["%1 - Montant: %2 [DEFAUT]",_x select 0,_x select 2];
        _accountPerso set [_forEachIndex,[_x sleep 0,_x select 1,_x select 2,true]];
        lbSetData [4656,_forEachIndex, str([_x select 1,_x select 2,true])];
        diag_log format["%1 - Montant: %2 %3 : Index %4",_x select 1,_x select 2,true,_forEachIndex];
	}else{
    	_listcompte lbAdd format["%1 - Montant: %2",_x select 0,_x select 2];
    	_accountPerso set [_forEachIndex,[_x sleep 0,_x select 1,_x select 2,false]];
    	lbSetData [4656,_forEachIndex, str([_x select 1,_x select 2,false])];
    	diag_log format["%1 - Montant: %2 %3 : Index %4",_x select 1,_x select 2,false,_forEachIndex];
	};
} forEach _accountPerso;

setVarProfile("AccountBanque",_accountPerso);
