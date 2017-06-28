#include <macro.h>
/*
	File:  fn_initSetting.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initSetting
*/
private["_listB","_listA","_listBackground","_listAnonyme"];
disableSerialization;
waitUntil {!isNull findDisplay 4650};
_listB = getControl(4650,4652);
_listA = getControl(4650,4655);
ctrlSetText[4106,varProfile("imageBackground")];

_listBackground = varMission("listBackground");
_listAnonyme = [["Activer",true],["Desactiver",false]];
lbClear _listB;
{
	_listB lbAdd (_x select 0);
	_listB lbSetData [lbSize(_listB)-1,str (_x select 1)];
}foreach _listBackground;
lbSort [_listB, "ASC"];
lbClear _listA;
{
	_listA lbAdd (_x select 0);
	_listA lbSetData [lbSize(_listA)-1,str(_x select 1)];
}foreach _listAnonyme;


lbClear _listAccSender;
_accountPerso = varMissionDft("AccountBanque",[]);
{
	_dflt = _x select 3;
	if(_dflt) then {
    	_listAccSender lbAdd format["%1 - Montant: %2 [DEFAUT]",_x select 0,_x select 2];
	}else{
    	_listAccSender lbAdd format["%1 - Montant: %2",_x select 0,_x select 2];
	};
    lbSetData [4656,_forEachIndex, str([_x select 1,_x select 2,_x select 3])];
} forEach _accountPerso;