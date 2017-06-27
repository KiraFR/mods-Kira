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
_c = varMissionDft("contratActuel",nil);
if not (isNil "_c") then{setVarMission("contratActuel",nil);};
setVarMission("Clientnotaire",_this);
setVarMission("contratActuel",[getPlayerUID _this,"","","",name _this,"",""]);
disableSerialization;
createDialog "DOSTARA_NEWCONTRACTNOTAIRE";
_name = getControl(5500,5501);
_name ctrlSetText (name _this);
