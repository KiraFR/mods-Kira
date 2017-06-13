/*
	File: fn_sign.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:


	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_sign
*/
private ["_un","_deux"];
disableSerialization;
_un = (ctrlText 5002);
_deux = (ctrlText 5003);
if((_un == "") OR (_deux == ""))exitWith{
	hint "Vous devez remplir la feuille avant de signer.";
};
player Say3D "signature";
ctrlShow[5006,false];
ctrlSetText [5008,(name player)];
player setVariable ["signedPaper",true,true];
if(isNil "notaire")exitWith{};
[[name player,_deux],false] remoteExecCall ["KIRA_fnc_receiveTestament",notaire];
notaire = nil;