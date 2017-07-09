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
private["_account"];


setVarProfile("imageBackground",thisBackground);
setVarProfile("anonyme",thisAnonyme);
_account = call compile format["%1",lbData[4656,lbCurSel (4656)]];
diag_log format["%1",_account];
_dflt = _account select 2;

if(_dflt == 1) then {
	hint "Ce compte est deja votre compte par defaut.";
}else{
	[getPlayerUID player,_account select 0] remoteExecCall ["BQKS_fnc_SetDefaultAccount",2];
	life_atmcash = parseNumber(_account select 1);
};
hint parseText "Parametres enregistrés.<br/>Veuillez Redemarrer votre telephone pour que les changements s'appliquent.";
