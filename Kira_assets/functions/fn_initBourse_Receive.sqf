#include <macro.h>
/*
	author: Alexandre Debris
	description: none
	returns: nothing
*/

private["_bourse","_bourseObject","_virtName","_prix","_list"];
params[["_bourseObject",[]]];
disableSerialization;

_bourse = getControl(5600,5602);// compte qui reçois
ctrlSetText[4106,varProfile("imageBackground")];
_list = ["Tabac","Biere","Whisky","Cafe","Cannabis","Coca","Opium","Cocaine","Heroine","Shit","Speed_Ball"];
{
	_virtName = [(_x select 0),0] call life_fnc_varHandle;
	if !(_virtName in _list) then {
		_prix = 0;
		if ((_x select 1) <= 0) then {
	        _prix = 1;
		}else{
		    _prix = (round (_x select 1));
		};
	  	_bourse lbAdd format["%1 - %2$",([_virtName] call life_fnc_varToStr),_prix];
	};
}forEach _bourseObject;