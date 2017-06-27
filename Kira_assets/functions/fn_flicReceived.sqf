/*
	File: fn_flicReceived.sqf
	Auteur: J. `Kira` D.

	Description:
	Les flics reçoivent l'appel

	PARAMETRES:
	1. ARRAY OF NUMBER(Position GPS du Hacker)
  2. BOOLEAN(TRUE: Anti_Hacker connecté, FALSE: Anti_Hacker déconnecté)

	RETURNS:
	NONE

	CALL:
	call KIRA_fnc_flicReceived
*/

params[
  ["_posH",[],[[]]],
  ["_ahConnecté",false,[false]]
];
if(isNil {varMission("hackerSpotted")}) then {
  setVarMission("hackerSpotted",0,true);
}else{
  setVarMission("hackerSpotted",(varMission("hackerSpotted"))+1,true);
};
_nbr = (varMission("hackerSpotted"));
hint parseText format["<t color='#FF0000' size='1.5'>Un Hacker a été aperçu.<br/>
					   Voici les coordonnées [%1,%2]",_posH select 0, _posH select 1];
_markerHacker = createMarkerLocal [format["Hacker%1Spotted",_nbr],_posH];
_markerHacker setMarkerColorLocal "BLACK";
_markerHacker setMarkerTextLocal format["Hacker numero: %1",_nbr];

sleep 60;
deleteMarkerLocal format["Hacker%1Spotted",_nbr];