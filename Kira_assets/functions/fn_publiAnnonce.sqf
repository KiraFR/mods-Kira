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

private["_deja","_newList","_list","_surplus"];
_title = ctrlText 0;
_nomEntreprise = ctrlText 0;
_message = ctrlText 0;
_colorBG = call compile format["%1",lbData[0,(lbCurSel 0)]];
_colorFont = call compile format["%1",lbData[0,(lbCurSel 0)]];
_price = ctrlText 0;
_BasePrice = OBJECTMAP getVariable ["prixAnnonce",0];
_deja = false;
//paiement
if(!([_price] call life_fnc_isnumeric))exitWith{hint "Le prix que vous avez inscrit n'est pas un nombre ou si vous n'avez pas écrit de prix, mettez 0.";};
_price = parseNumber _price;
if(_price isEqualTo 0)then{
	_price = call compile format["%1",_price];
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

_list = OBJECTMAP getVariable ["Annonces",[]];
_l = [_title,_nomEntreprise,_message,_colorBG,_colorFont,_surplus,player];
if(count _list > 0) then {
	{
		if(((getPlayerUID (_x select 6)) == (getPlayerUID player)) OR (_x select 1 == _nomEntreprise))then{
			_deja = true;
		};
	}foreach _list;
	if(_deja) exitWith{closeDialog 0; hint "Vous ou votre entreprise avez déjà posté une annonce.";};
	_list pushBack _l;
	_newList = [_list] call KIRA_fnc_sortArrayOfNumber;
	OBJECTMAP setVariable ["Annonces",_newList,true];
	hint parseText "Votre annonce a bien été pris en charge.<br> Comme vous venez de donner un surplus, votre annonce sera dans le top !";
}else{
	OBJECTMAP setVariable ["Annonces",[_l],true];
};
