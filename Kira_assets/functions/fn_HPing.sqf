#include <macro.h>
/*
	File:  fn_HPing.sqf
	Auteur: J. `Kira` D.
	
	Description:

	
	PARAMETRES:
	1. OBJECT (hacker)
	2. SCALAR (Nombre ping) 
	3. STRING (numero pingé)
	
	RETURNS: 
	1. STRING (reponse) 

	CALL: 
	call KIRA_fnc_HPing
*/
_hacker = param[0,objNull,[objNull]];
_i = param[1,0,[0]];
_num = param[2,"",[""]];
if(isNull _hacker) exitWith{}; //fk arma

_return = format["ping %1 reçu de %3  avec %2 ms...</br>",_i,round (random 50),_num];
[_return] remoteExecCall ["KIRA_fnc_HPinged",_hacker];