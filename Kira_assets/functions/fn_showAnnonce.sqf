/*
	File: fn_showAnnonce.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.ARRAY(TOUTES LES ANNONCES)

	RETURNS:
	NONE

	CALL:
	ARRAY call KIRA_fnc_showAnnonce
	ARRAY:
		1. Titre
		2. Nom entreprise
		3. Message
		4. CouleurFond
		5. CouleurPolice
*/
params[
	["_title","",[""]],
	["_NameEntreprise","",[""]],
	["_message","",[""]],
	["_colorBG",[1,1,1,1],[[]]],
	["_colorFont",[0,0,0,1],[[]]]
];
disableSerialization;
_display = findDisplay 6100;
_controlGrp = _display displayCtrl 6101;
_ctrl = _display ctrlCreate ["RscStructuredText", -1,_controlGrp]; 
_ctrl ctrlSetPosition [0,0+0.02,0.348,_size]; 
_ctrl ctrlCommit 0;
_ctrl ctrlSetStructuredText parseText format["<t size='0.9'>De : %1</t><br/><t size='1.1' align='center'>%2</t><br/><t size='1' align='left'>%3</t>",_NameEntreprise,_title,_msg];
_ctrl ctrlSetBackgroundColor _colorBG;
_ctrl ctrlSetForegroundColor _colorFont;
xNextAds =xNextAds + _size + 0.01;