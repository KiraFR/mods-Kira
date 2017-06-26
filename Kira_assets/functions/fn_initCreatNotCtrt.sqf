#include "..\macro.h"
/*
	File: fn_initCreatNotCtrt.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1. OBJECT(Client)

	RETURNS:
	NONE

	CALL:
	OBJECT call KIRA_fnc_initCreatNotCtrt
*/
_c = missionNamespace getVariable ["contratActuel",nil];
if not (isNil "_c") then{missionNamespace setVariable ["contratActuel",nil];};
missionNamespace setVariable ["Clientnotaire",_this];
missionNamespace setVariable ["contratActuel",[getPlayerUID _this,"","","",name _this,"",""]];
disableSerialization;
createDialog "DOSTARA_NEWCONTRACTNOTAIRE";
_name = getControl(5500,5501);
_name ctrlSetText (name _this);
