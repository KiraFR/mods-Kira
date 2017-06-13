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
missionNamespace setVariable ["AttenteYorN",true];
if(isNil {missionNamespace getVariable "AttenteReponseYorN"}) then {
	if(missionNamespace getVariable "AttenteReponseYorN") then {
		missionNamespace setVariable ["closeWell",true];
		closeDialog 0;
	};
};