/*
	File: fn_waitUntilBothSign.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1. BOOLEAN(signe ou pas)
	2. OBJET(le client)

	RETURNS:
	NONE

	CALL:
	spawn KIRA_fnc_waitUntilBothSign
*/
params[
	["_notaireSigne",true,[true]],
	["_client", objNull,[objNull]]
];

if(isNull _client) exitWith{diag_log "fuck you arma."};
waitUntil {_notaireSigne && (_client getVariable ["signedPaper",false])};
_client setVariable ["signedPaper",nil,true];

//Envoi au serveur
//..
//..