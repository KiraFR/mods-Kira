/*
	File: fn_flicReceived.sqf
	Auteur: J. `Kira` D.

	Description:
	Les flics reçoivent l'appel

	PARAMETRES:
	1. ARRAY OF NUMBER(Position GPS du KIRAer)
  2. BOOLEAN(TRUE: Anti_KIRAer connecté, FALSE: Anti_KIRAer déconnecté)

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_flicReceived
*/

params[
  ["_posH",[],[[]]],
  ["_ahConnecté",false,[false]]
];
if(isNil {missionNamespace getVariable "KIRAerSpotted"}) then {
  missionNamespace setVariable ["KIRAerSpotted",0,true];
}else{
  missionNamespace setVariable ["KIRAerSpotted",(missionNamespace getVariable "KIRAerSpotted")+1,true];
};
_nbr = (missionNamespace getVariable "KIRAerSpotted");
hint parseText format["<t color='#FF0000' size='1.5'>Un KIRAer a été aperçu.<br/>
					   Voici les coordonnées [%1,%2]",_posH select 0, _posH select 1];
_markerKIRAer = createMarkerLocal [format["KIRAer%1Spotted",_nbr],_posH];
_markerKIRAer setMarkerColorLocal "BLACK";
_markerKIRAer setMarkerTextLocal format["KIRAer numero: %1",_nbr];

sleep 60;
deleteMarkerLocal format["KIRAer%1Spotted",_nbr];