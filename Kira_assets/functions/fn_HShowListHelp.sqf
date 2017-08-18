#include <macro.h>
/*
	File:  fn_HShowListHelp.sqf
	Auteur: J. `Kira` D.
	
	Description:
	Afficher la liste des commandes
	
	PARAMETRES:
	NONE 
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HShowListHelp
*/
private _list = "
	- checknear NUMBER</br>
	- listnear</br>
	- listhelp</br>
	- help COMMAND</br>
	- lockphonenum NUMBER:</br>
		- sendmsg NUMDESTINATION MESSAGE</br>
		- fetchrepertoire</br>
	- attackphonenum NUMBER</br>
	- lockaccnumber NUMBER</br>
	- unlockaccnumber</br>
	- ping NUMBER</br>
	- attackzone NUMBER</br>	
";

Terminal_fulltext = Terminal_fulltext + _list;