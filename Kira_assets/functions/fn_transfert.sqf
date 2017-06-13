/*
	File: fn_transfert.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] call KIRA_fnc_transfert
*/
private["_check","_numAcc","_amount","_amountSender","_taxes"];
if(Player getVariable "transaction")exitWith{hint "Vous devez attendre que la précédente transaction soit terminé."};
player setVariable ["transaction",true,true];
_numAccText = ctrlText 5003;
_numAcc = call compile format["%1",lbData[5001,(lbCurSel 5001)]];
_Sender = call compile format["%1",lbData[5002,(lbCurSel 5002)]];
_amount = ctrlText 5005;
if((_Sender select 0) == _numAcc) exitWith{Hint "Vous ne pouvez pas envoyer de l'argent au compte qui envoie."};
if(_numAccText != "")then {_numAcc = _numAccText;};
_amountSender = _Sender select 1;
if(_numAcc == "") exitWith{hint "Veuillez selectionner le numero du destinataire..";};
if(typeName _amountSender == "STRING")then{_amountSender = parseNumber(_amountSender);};
_amount = parseNumber(_amount);
_taxes = _amount * (1-taxeTransfert);
_amount = _amount * taxeTransfert;
if(_amount > _amountSender) exitWith{hint "Vous ne pouvez pas envoyer autant d'argent..";};
hint parseText format["Vous envoyez %1 euros au compte ayant le numero %2 </br> %3 euros sont retirés sur le montant envoyé à cause des taxes.",_amount,_numAcc,_taxes];
[(_amountSender-_amount),(_Sender select 0),true] call KIRA_fnc_saveMoney;

[_amount,_numAcc,_amountSender,(_sender select 0),_taxes,player] remoteExec ["KIRA_fnc_transfertS",2];