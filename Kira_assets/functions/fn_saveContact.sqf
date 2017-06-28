#include <macro.h>
/*
	File:  fn_saveContact.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_saveContact
*/
_nom = ctrlText 4251;
_num = ctrlText 4252;
_color = call compile format["%1",lbData[4254,(lbCurSel 4254)]];

// nom,numero,color
_listRepertoire = varProfile("repertoire");
_list = [_nom,_num,_color];
_listRepertoire pushBack _list;
setVarProfile("repertoire",_listRepertoire);
closeDialog 0;
call KIRA_fnc_showRepertoire;