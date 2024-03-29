#include <macro.h>
/*
	File:  fn_transfert.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_transfert
*/
private ["_check","_numAcc","_amount","_amountSender","_taxes","_numSender","_Sender","_numAccText","_numSender","_Sender","_numSender","_Sender","_numAccText"];
if(player getVariable ["transaction",false])exitWith{hint "Vous devez attendre que la précédente transaction soit terminé."};


_numAccText = ctrlText 5003;
_numAcc = call compile format["%1",lbData[5001,(lbCurSel 5001)]];
_Sender = call compile format["%1",lbData[5002,(lbCurSel 5002)]];
_amount = ctrlText 5004;
_numSender =(_Sender select 0);
if(_numSender == _numAcc) exitWith{hint "Vous ne pouvez pas envoyer de l'argent au compte qui envoie."};
if(_numAccText != "")then {_numAcc = _numAccText;};
if(_numAcc == "") exitWith{hint "Veuillez selectionner le numero du destinataire..";};
diag_log format["1 - %1 %2 %3",_numAcc,_numSender,_amount];
_amountSender = _Sender select 1;
if(typeName _amountSender == "STRING")then{_amountSender = parseNumber(_amountSender);};
if(typeName _amount == "STRING")then{_amount = parseNumber(_amount);};
_taxes = [2,_numAcc,_numSender] call life_fnc_taxes;
diag_log format["4 - %1 %2",_taxes,[2,_numAcc,_numAcc] call life_fnc_taxes];
if(_taxes == 0)exitWith{hint "Vous ne pouvez pas faire de virement sur ce compte"};

_taxes = _amount * _taxes;
_amount = _amount - _taxes;
if(_amount > _amountSender) exitWith{hint "Vous ne pouvez pas envoyer autant d'argent..";};
player setVariable ["transaction",true,true];
hint parseText format["Vous envoyez %1 euros au compte ayant le numéro %2 </br> %3 euros sont retirés sur le montant envoyé à cause des taxes.",_amount,_numAcc,_taxes];
diag_log format["4 - %1 %2 %3 %4",_numAcc,_numSender,_amount,_taxes];
[_amount,_numAcc,_numSender,_taxes,player] remoteExec ["KIRA_fnc_transfertS",2];