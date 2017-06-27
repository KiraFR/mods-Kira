/*
	File: fn_publiAnnonce.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_publiAnnonce
	ARRAY:
		1. Titre
		2. Nom entreprise
		3. Message
		4. CouleurFond
		5. CouleurPolice
		6. prix
*/

private["_deja","_newList","_list","_surplus","_title","_nomEntreprise","_message","_colorBG","_colorFont","_price","_l","_cpt"];
_title = ctrlText 6201;
_nomEntreprise = ctrlText 6202;
_message = ctrlText 6207;
_colorBG = call compile format["%1",lbData[6205,(lbCurSel 6205)]];
_colorFont = call compile format["%1",lbData[6206,(lbCurSel 6206)]];
_price = ctrlText 6204;
_BasePrice = OBJECTMAP getVariable ["prixAnnonce",0];
//paiement
if(_price == "" OR _title == "" OR _nomEntreprise == "" OR _message == "")exitWith{hint "Les champs ne sont pas tous rempli."};
if(!([_price] call life_fnc_isnumeric))exitWith{hint "Le prix que vous avez inscrit n'est pas un nombre ou si vous n'avez pas écrit de prix, mettez 0.";};
if(count (_message splitString "") > 90)exitWith{hint "Vous ne pouvez pas écrire plus de 90 caractères."};

_price = parseNumber _price;
if not(_price isEqualTo 0)then{
	_surplus = _price;
	_price = _surplus + _BasePrice;
}else{
	_surplus = 0;
	_price = _surplus + _BasePrice;
};


if(life_cash < _price) then{
	if(life_atmcash < _price) exitWith{
		hint "Vous n'avez pas assez d'argent.";
		closeDialog 0;
	};
	life_atmcash = life_atmcash - _price;
	[] call SOCK_fnc_updatePartial;
}else{
	life_cash = life_cash - _price;
	[0] call SOCK_fnc_updatePartial;
};

_p = [_title,_nomEntreprise,_message,_colorBG,_colorFont,_surplus,player];
[_p,_nomEntreprise,_price] spawn {
	_result = ["Êtes-vous sur de vouloir poster cette annonce ? elle sera definitive et non modifiable.", "Êtes vous sur ?",localize "STR_Global_Yes",localize "STR_Global_No"] call BIS_fnc_GUImessage;
	if(_result) then {
		private ["_cpt"];
		_deja = false;
		_list = OBJECTMAP getVariable ["Annonces",[]];
		_l = _this select 0;
		_nE = _this select 1;
		_price = _this select 2;
		if(count _list > 0) then {
			_check = _list;
			_cpt = 0;
			{
				if(((getPlayerUID (_x select 6)) == (getPlayerUID player)) OR (_x select 1 == _nE))then{
					_cpt = _cpt+1;
				};
			}foreach _list;
			if(_cpt > 1) exitWith{closeDialog 0; hint "Vous ou votre entreprise avez déjà posté une annonce.";};
			_list pushBack _l;
			_newList = [_list] call KIRA_fnc_sortArray;
			OBJECTMAP setVariable ["Annonces",_newList,true];
			hint parseText "Votre annonce a bien été pris en charge.\n Votre l'annonce sera placé en fonction du surplus donné.";
			[_price] remoteExecCall ["KIRA_fnc_bankGouv",2];
			closeDialog 0;
		}else{
			OBJECTMAP setVariable ["Annonces",[_l],true];
			hint parseText "Votre annonce a bien été pris en charge.\n Votre l'annonce sera placé en fonction du surplus donné.";
			[_price] remoteExecCall ["KIRA_fnc_bankGouv",2];
			closeDialog 0;
		};
	};
};
