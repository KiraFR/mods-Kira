/*
	File: fn_saveSettings.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_saveSettings
*/
profileNamespace setVariable ["imageBackground",thisBackground];
profileNamespace setVariable ["anonyme",thisAnonyme];
hint parseText "Parametres enregistrés.<br/>Veuillez Redemarrer votre telephone pour que les changements s'appliquent.";
