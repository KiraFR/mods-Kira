#include "..\macro.h"
/*
	File: fn_initNewPubli.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	NONE

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_initNewPubli
*/
private["_lbBGAdd","_lbFontAdd"];
disableSerialization;
createDialog "DOSTARA_NEWPUBLI";
if(isNull (findDisplay 6200))then{diag_log "nop"};
_lbColorBG = getControl(6200,6205);
_lbColorFont = getControl(6200,6206);
_colorName = ["rose","bleu","vert","orange","noir","gris","jaune","blanc","rouge","violet"];
_codeColor = [
	[0.87,0.19,0.38,1],
	[0.08,0.37,0.74,1],
	[0.12,0.62,0.33,1],
	[1,0.64,0,1],
	[0,0,0,1],
	[0.46,0.53,0.6,1],
	[0.99,0.89,0.27,1],
	[1,1,1,1],
	[1,0.01,0.01,1],
	[0.71,0.4,0.82,1]
];
_list = OBJECTMAP getVariable ["Annonces",[]];
if(count _list > 0) then{
	ctrlSetText[6203,str((_list select 0) select 5)];
};

{
	_color = (_codeColor select _forEachIndex);
	_lbColorBG lbAdd _x;
	lbSetColor[6205,_forEachIndex,_color];
	lbSetData[6205,_forEachIndex,str(_color)];

	_lbColorFont lbAdd _x;
	lbSetColor[6206,_forEachIndex,_color];
	lbSetData[6206,_forEachIndex,str(_color)];
} forEach _colorName;

_lbColorBG lbSetCurSel 0;
_lbColorFont lbSetCurSel 0;
