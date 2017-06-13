/*
	File: fn_selectConv.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_selectConv
*/

conversationTarget = call compile format["%1",lbData[4901,(lbCurSel 4901)]];
ctrlEnable[4154,true];
ctrlEnable[4152,true];
ctrlEnable[4153,true];