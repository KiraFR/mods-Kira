/*
	File: fn_rembourser.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_rembourser
*/
params[
	["_amount",0,[0]],
	["_numAcc","",[""]]
];
hint parseText "Le compte bancaire ciblé n'existe pas. </br> Remboursement en cours..";
[_amount,_numAcc,false,player] call KIRA_fnc_saveMoney;
hint "Remboursement terminé.."; 