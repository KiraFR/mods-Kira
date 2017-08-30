#include <macro.h>
/*
	File:  fn_HSelectPlayer.sqf
	Auteur: J. `Kira` D.

	Description:
	plus de radio

	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_HSelectPlayer
*/
disableSerialization;
_display = findDisplay 9300;
_list = _display displayCtrl 9301;

/*{
	if((_x distance player) < 10) then {

		};
	};
}foreach allUnits;*/
