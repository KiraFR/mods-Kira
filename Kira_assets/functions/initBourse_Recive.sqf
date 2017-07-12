/*
	author: Alexandre Debris
	description: none
	returns: nothing
*/

private["_bourse","_bourseObject","_virtName"];
params[["_bourseObject",[]]];
disableSerialization;

_bourse = getControl(5600,5602);// compte qui reçois
ctrlSetText[4106,varProfile("imageBackground")];

{
	_virtName = [(_x select 0),0] call life_fnc_varHandle;
  	_bourse lbAdd format["%1 - (%2%3)",([_virtName] call life_fnc_varToStr),(_x select 1),"€"];
  	//lbSetData [5602,lbSize(_bourse),str(_x select 1)]; // pas besoin
}forEach _bourseObject;