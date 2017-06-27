/*
	File: fn_HCloseTerminal.sqf
	Auteur: J. `Kira` D.
	
	Description:
	plus de radio
	
	PARAMETRES:
	NONE
	
	RETURNS: 
	NONE 

	CALL: 
	call KIRA_fnc_HCloseTerminal
*/
Terminal_fulltext = Terminal_fulltext + "Eteindre le terminal ? Oui[y], Non[n]<br/>";
setVarMission("AttenteYorN",true);
if(isNil {varMission("AttenteReponseYorN")}) then {
	if(varMission("AttenteReponseYorN")) then {
		setVarMission("closeWell",true);
		closeDialog 0;
	};
};