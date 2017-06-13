/*
	File: fn_previewBG.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_previewBG
*/
thisBackground = call compile format["%1",lbData[4652,(lbCurSel 4652)]];
ctrlSetText[4106,thisBackground];