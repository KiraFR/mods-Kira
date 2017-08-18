#include <macro.h>
/*
	File:  fn_HShowHelp.sqf
	Auteur: J. `Kira` D.
	
	Description:
	Afficher plus de detail sur la commande donnée
	
	PARAMETRES:
	1. STRING (COMMANDE) 
	
	RETURNS: 
	NONE 

	CALL: 
	[STRING] call KIRA_fnc_HShowHelp
*/
private _help = switch(_this select 0) do {
	case "checknear": {"checknear NUMBER: scan dans un rayon NUMBER</br>"};
	case "listnear": {"listnear: Lister les personnes scanné sous forme: NUMERO - NOM - NUMEROCOMPTEBANCAIRE - MONTANTCOMPTEBANCAIRE</br>"};
	case "listhelp": {"listhelp: Lister les commandes</br>"};
	case "help": {"help COMMAND: Description de la commande</br>"};
	case "lockphonenum" : {"lockphonenum NUMBER:</br> - sendmsg NUMDESTINATION MESSAGE: envoyer un MESSAGE à NUMDESTINATION</br> - fetchrepertoire: Recuperer le repertoire de la personne</br>"};
	case "attackphonenum": {"attackphonenum: Desactiver le telephone de la personne</br>"};
	case "lockaccnumber": {"lockaccnumber NUMBER:se bloquer sur lr compte BANCAIRE pour voler dans atm</br>"};
	case "unlockaccnumber": {"unlockaccnumber: se debloquer du compte BANCAIRE</br>"};
	case "ping": {"ping NUMBER: voir si un telephone est allumé</br>"};
	case "attackzone": {"attackzone NUMBER: attaque tous les téléphones dans une zone de rayon X (NUMBER), desactive les téléphones.</br>"};
	default{"Commande inconnue."};
};

Terminal_fulltext = Terminal_fulltext + _help;