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
setVarProfile("imageBackground",thisBackground);
setVarProfile("anonyme",thisAnonyme);
_account = call compile format["%1",lbData[4656,(lbCurSel 4656)]];
_dft = _account select 2;
if(_dft) then {
	hint "Ce compte est deja votre compte par defaut.";
}else{
	life_atmcash = parseNumber(_account select 1);
	[getPlayerUID player,_account select 0] remoteExecCall ["BQKS_fnc_SetDefaultAccount",2];
};
hint parseText "Parametres enregistrés.<br/>Veuillez Redemarrer votre telephone pour que les changements s'appliquent.";