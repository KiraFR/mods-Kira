/*
	File: fn_HopenTerminal.sqf
	Auteur: J. `Kira` D.
	
	Description:
	ouvre le Terminal
	
	PARAMETRES:
	NONE
	
	RETURNS: 
	NONE 

	CALL: 
	[] spawn KIRA_fnc_HopenTerminal
*/
private["_points","_text","_display","_percent","_timeDemarrage"];
disableSerialization;

_license = switch (playerSide) do { 
	case civilian : {license_civ_hacker}; 
	case west : {license_cop_hacker; 
};
if(!_license)exitWith{} // précaution


_display = findDisplay 6900;
_text = _display displayCtrl 6901;
_title = _display displayCtrl 6903;
_title ctrlSetStructuredText parseText "<t align='center'>Terminal Hacker</t>";

if(!(varMission("closeWell"))) then {// Bad Hacker
	Terminal_fulltext= "<t align='center'>Il semble que vous avez mal fermé le terminal...<br/>
			   .:. REDEMARRAGE EN COURS .:.</t><br/>";
	_text ctrlSetStructuredText parseText Terminal_fulltext;
	_timeDemarrage = 30;
}else{
	Terminal_fulltext = "";
	Terminal_fulltext = "<t align='center'>.:. DEMARRAGE EN COURS .:.</t><br/>";
	_text ctrlSetStructuredText parseText Terminal_fulltext;
	_timeDemarrage = 10;
};
setVarMission("closeWell",false);

_points = ".";
_y = 0;
for "_i" from 1 to _timeDemarrage do {
	if(_y > 3) then {_y = 1;};
	switch (_y) do {
		case 1 : {_points = "."}; 
		case 2 : {_points = ".."};
		case 3 : {_points = "..."};
	};
	_percent = floor(_i/_timeDemarrage * 100);
	_percent = format["<t align='center'>%3 %1%2 %3</t>",_percent,"%",_points];
	_text ctrlSetStructuredText parseText (Terminal_fulltext + _percent);
	if(isNull _display)exitWith{Terminal_fulltext = "";};
	sleep 1;
	_y = _y +1;
};
Terminal_fulltext = Terminal_fulltext + _percent + "<br/><t align='center'>.:. DEMARRAGE TERMINE .:.</t><br/>";
_text ctrlSetStructuredText parseText Terminal_fulltext;
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call KIRA_fnc_keyKIRA;"];