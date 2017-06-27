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
	Client: 
		1. UID PLAYER
		2. Nom
		3. Prix
		4. Prix Notaire
		5. Nom Notaire
		6. Description
		7. Nom du destinataire
*/
params[
	["_notaireSigne",true,[true]],
	["_client", objNull,[objNull]]
];

if(isNull _client) exitWith{};
while{_notaireSigne && (_client getVariable ["signedPaper",false])} do {
	_l = _client getVariable ["signedPaper",false];
	if(_l)exitWith{};
};
_client setVariable ["signedPaper",nil,true];
_dest = _client getVariable ["destinationNotaire",""];
if(_dest == "")exitWith{hint "Veuillez recommencer la procédure."};
_contratAct = varMissionDft("contratActuel",[]);
_contratAct pushBack player;
_contratAct pushBack _dest;
_contratAct remoteExecCall ["KIRA_fnc_SaveTestament",2];
_client setVariable ["destinationNotaire",nil,true];