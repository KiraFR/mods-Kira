/*
	File: fn_HBuyVPN.sqf
	Auteur: J. `Kira` D.

	Description:
	plus de radio

	PARAMETRES:
	1. NUMBER(nombre VPN)

	RETURNS:
	NONE

  Prix VPN pour Hacker: 70 000€
	CALL:
	[NUMBER] spawn KIRA_fnc_HBuyVPN
*/
_nbr = param[0,0,[0]];
if(_nbr == 0)exitWith{Terminal_fulltext = Terminal_fulltext + "Probleme d'achat de VPN... <br/>";};
if(life_atmCash < ((life_prixVPN)*_nbr)) exitWith{Terminal_fulltext = Terminal_fulltext + "Probleme d'achat de VPN... <br/>";};
life_atmCash = life_atmCash - ((life_prixVPN)*_nbr);
Terminal_fulltext = Terminal_fulltext + format["Vous venez d'acheter %1 vpn.<br/>",_nbr];
setVarMission("VPNHACK",(varMission("VPNHACK"))+_nbr);
// sauvegarde
// blabla