#include <macro.h>
/*
	File:  fn_markerUrgence.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme

	PARAMETRES:
	1. STRING (classname Marqueur)
	2. STRING (affiché)
	3. ARRAY (position)

	RETURNS:
	NONE

	CALL:
	[STRING,STRING, ARRAY] call KIRA_fnc_markerUrgence
*/
params[
	["_marker","",[""]],
	["_aff","",[""]],
	["_pos",[],[[]]]
];
_markerUrgence = createMarkerLocal [_marker,_pos];
_markerUrgence setMarkerShapeLocal "ICON";
_markerUrgence setMarkerTypeLocal "mil_warning";
_markerUrgence setMarkerTextLocal _aff;
_markerUrgence setMarkerColorLocal [1,0,0,1];