/*
	File: fn_receiveTestament.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:


	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_receiveTestament
*/
_name = param[0,[],[[]]];
_client = param[1,false,[false]];
disableSerialization;
_display = findDisplay 6000;
if(isNull _display) then {createDialog "textNotaire";};
if(_client) then{
	notaire = param[2,objNull,[objNull]];
	ctrlSetText[6004,_name select 0];
	ctrlSetText[6007,_name select 0];
}else{
	ctrlSetText[6002,_name select 0];
	ctrlSetText[6003,_name select 1];
	ctrlSetText[6008,_name select 0];
};