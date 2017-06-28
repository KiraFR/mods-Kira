#include <macro.h>
/*
	File:  fn_Hcommand.sqf
	Auteur: J. `Kira` D.
	
	Description:
	Ecrire des commandes
	
	PARAMETRES:
	1. STRING
	
	RETURNS: 
	NONE 

	CALL: 
	[STRING] spawn KIRA_fnc_command
	
	Recensement commande Hacker:
	- checknear NUMBER: scan dans un rayon NUMBER
	- listnear: Lister les personnes scanné sous forme de "NUMERO - NOM - NUMEROCOMPTEBANCAIRE - MONTANTCOMPTEBANCAIRE"
	- listhelp: Lister les commandes
	- help COMMAND: Description de la commande
	- lockphonenum NUMBER:
		- sendmsg NUMDESTINATION MESSAGE: envoyer un MESSAGE à NUMDESTINATION
		- fetchrepertoire: Recuperer le repertoire de la personne
	- attackphonenum NUMBER: Desactiver le telephone de la personne
	- lockaccnumber NUMBER: bloquer compte BANCAIRE pour voler dans atm
	- unlockaccnumber: debloquer compte BANCAIRE
	- ping NUMBER: voir si un telephone est allumé
	- attackzone NUMBER: 
*/
private["_sentence","_listSentence","_commande","_param1"];
disableSerialization;
_display = findDisplay 6900;
waitUntil {!isNull findDisplay 6900};
_structuredText = _display displayCtrl 6901;
_sentence = ctrlText 9602;
_listSentence = _sentence splitString " ";
_commande = _listSentence select 0;

switch(_commande) do {
	case "checknear": {
		_param1 = _listSentence select 1;
		if(isNil "_param1")then{
			Terminal_fulltext = Terminal_fulltext + "Aucun paramètre..<br/>";
		}else{
			if(!([_param1] call life_fnc_isnumeric)) then {
				Terminal_fulltext = Terminal_fulltext + format["La _param1 %1 n'est pas un nombre..<br/>",_param1];}
			else{
				_handle = [_param1] spawn KIRA_fnc_HScanAnim;
				waitUntil {scriptDone _handle};
				setVarMission("listNear",[]);
				[_param1] remoteExecCall ["KIRA_fnc_HCheckNear",2];
			};
		};
	};
	case "listnear": {
		_handle = [] spawn KIRA_fnc_HScanAnim;
		waitUntil {scriptDone _handle};
		[] spawn KIRA_fnc_HShowListNear;
	};
	case "listhelp": {
		_handle = [] spawn KIRA_fnc_HScanAnim;
		waitUntil {scriptDone _handle};
		[] spawn KIRA_fnc_HShowListHelp;
	};
	case "help": {
		_param1 = _listSentence select 1;
		if(isNil "_param1")then{
			Terminal_fulltext = Terminal_fulltext + "Aucun paramètre..<br/>";};
	};
	case "lockphonenum": {
		_param1 = _listSentence select 1;
		if(isNil "_param1")then{
			Terminal_fulltext = Terminal_fulltext + "Aucun paramètre..<br/>";
		}else{setVarMission("lockphonenum",_param1);};
	};
	case "attackphone": {
		_param1 = varMission("lockphonenum");
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";
		}else{
			_handle = [] spawn KIRA_fnc_HScanAnim;
			waitUntil {scriptDone _handle};
			[] spawn KIRA_fnc_HAttackPhone;
		};
	};
	case "sendmsg": {
		_param1 = varMission("lockphonenum");
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";
		}else{
			_handle = [] spawn KIRA_fnc_HScanAnim;
			waitUntil {scriptDone _handle};
			[] spawn KIRA_fnc_HSend;
		};
	};
	case "fetchrepertoire": {
		_param1 = varMission("lockphonenum");
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune numéro de telephone enregistré..<br/>";
		}else{
			_handle = [] spawn KIRA_fnc_HScanAnim;
			waitUntil {scriptDone _handle};
			[] spawn KIRA_fnc_HFRepert;
		};
	};
	case "attackphonenum": {
		_param1 = _listSentence select 1;
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";};
	};
	case "lockaccnumber": {
		_param1 = _listSentence select 1;
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";
		}else{
			setVarMission("accNumberLocked",_param1);
		};
	};
	case "unlockaccnumber": {
		_param1 = varMission("accNumberLocked");
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune numéro de compte en banque enregistré..<br/>";
		}else{
			setVarMission("accNumberLocked",nil);
		};
	};
	case "ping": {
		_param1 = _listSentence select 1;
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";};
	};
	case "attackzone": {
		_param1 = _listSentence select 1;
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";};
	};
	case "buyvpn": {
		_param1 = _listSentence select 1;
		if(isNil "_param1") then {
			Terminal_fulltext = Terminal_fulltext + "Aucune cible..<br/>";
		}else{
			_handle = [_param1,true] spawn KIRA_fnc_HScanAnim;
			waitUntil {scriptDone _handle};
			[_param1] spawn KIRA_fnc_HBuyVPN;
		};
	};
	default {
		hint format["La commande %1 n'existe pas.",_commande];
	};
};
_structuredText ctrlSetStructuredText parseText Terminal_fulltext;