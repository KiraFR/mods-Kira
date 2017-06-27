/*
	File: fn_fetchRepertoire.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme
	[[nom,numero,color],[conversation]]
	conversation: 
		[NOMBRE, MESSAGE]
		1.NOMBRE(0: lui, 1: Moi)
		2.MESSAGE(PARSETEXT)

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_fetchRepertoire
*/

private["_ret","_phoneNumber"];
_phoneNumber = param[0,"",[""]];
_listRepertoire = varProfile("repertoire");

{
	if((_x select 1) == _phoneNumber) exitWith{
		_ret = _x;
	};
}foreach _listRepertoire;
if(isNil "_ret")exitWith{["",_phoneNumber,[1,1,1,1]]};
_ret