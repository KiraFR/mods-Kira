/*
	File: fn_HShowListNear.sqf
	Auteur: J. `Kira` D.
	
	Description:
	Afficher la liste scan
	
	PARAMETRES:
	NONE
	
	RETURNS: 
	NONE

	CALL: 
	[] spawn KIRA_fnc_HShowListNear
*/
disableSerialization;
_display = findDisplay 9600;
_structuredText = _display displayCtrl 9601;
_list = varMission("listNear");
if(isNil "_list")then{
	Terminal_fulltext = Terminal_fulltext + "Aucune personne dans la liste..<br/>";
}else{
	Terminal_fulltext = Terminal_fulltext + "ID - NUMERO - NOM - NUMERO COMPTE BANQUE - MONTANT COMPTE BANQUE<br/>";
	{
		_text = format["%1 - %2 - %3 - %4 - %5<br/>",(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)];
		Terminal_fulltext = Terminal_fulltext + _text;
	}foreach (varMission("listNear"));
};