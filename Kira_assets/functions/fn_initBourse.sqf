#include <macro.h>
/*
	File:  fn_initBourse.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	[] spawn KIRA_fnc_initBourse
*/
private["_bourse","_bourseObject","_virtName"];
disableSerialization;

_bourse = getControl(5600,5602);// compte qui reçois
ctrlSetText[4106,varProfile("imageBackground")];

_bourseObject = Bourse_Object getVariable ["Bourse",[]];
{
	_virtName = [(_x select 0),0] call life_fnc_varHandle;
  	_bourse lbAdd format["%1 - (%2%3)",([_virtName] call life_fnc_varToStr),(_x select 1),"€"];
  	//lbSetData [5602,lbSize(_bourse),str(_x select 1)]; // pas besoin
}forEach _bourseObject;