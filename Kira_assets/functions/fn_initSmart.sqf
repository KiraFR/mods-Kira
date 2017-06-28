#include <macro.h>
closeGPS = false;
_check = [] spawn KIRA_fnc_checkGpsClosed;
waitUntil {scriptDone _check};
if(!closeGPS)exitWith{closeGPS = nil;};
closeGPS = nil;
createDialog "DOSTARA_GENERAL";

if(isNil {number})then{ctrlShow[4107,false];ctrlShow[4197,false];};
if(isNil {varProfile("imageBackground")})then{
	setVarProfile("imageBackground","\kira_assets\texture\background\defaultBG.paa");
};
if(isNil {varProfile("anonyme")})then{setVarProfile("anonyme",false);};
if(isNil {varProfile("repertoire")})then{setVarProfile("repertoire",[]);};
if(isNil {varProfile("conversations")})then{setVarProfile("conversations",[]);};
ctrlSetText[4106,varProfile("imageBackground")];
if(isNil {varMission("listBackground")}) then{
	_listBG=[
			["Par default","\kira_assets\texture\background\defaultBG.paa"],
		   	["Miku Miku","\kira_assets\texture\background\mikumiku.paa"],
		   	["boule Pixel","\kira_assets\texture\background\boulePixel.paa"],
		  	["Chat","\kira_assets\texture\background\cat.paa"],
		   	["Hebus","\kira_assets\texture\background\hebus.paa"],
		   	["Kenshin","\kira_assets\texture\background\kenshin.paa"],
		   	["Kaneki","\kira_assets\texture\background\kaneki.paa"],
		   	["Etoile 1","\kira_assets\texture\background\etoile.paa"],
		   	["Etoile 2","\kira_assets\texture\background\etoile2.paa"],
		   	["Effet Vert 1","\kira_assets\texture\background\effet.paa"],
		   	["Effet Vert 2","\kira_assets\texture\background\green.paa"],
		   	["Effet blue","\kira_assets\texture\background\blue.paa"],
		   	["Nature blue","\kira_assets\texture\background\wouaw.paa"],
		   	["Effet multi-Couleur 2","\kira_assets\texture\background\mColor2.paa"],
		   	["Effet multi-Couleur 1","\kira_assets\texture\background\mColor1.paa"],
		   	["Lancement","\kira_assets\texture\background\explo.paa"],
		   	["Montagne","\kira_assets\texture\background\montagne.paa"],
		   	["Chateau","\kira_assets\texture\background\chateau.paa"],
		   	["Tigre","\kira_assets\texture\background\tiger.paa"],
		   	["Ocean","\kira_assets\texture\background\water.paa"],
		   	["Ciel étoilé","\kira_assets\texture\background\far.paa"],
		   	["smiley","\kira_assets\texture\background\smiley.paa"],
		   	["Spiral","\kira_assets\texture\background\Spiral.paa"],
		   	["Vieux charlie","\kira_assets\texture\background\vieuxCharlie.paa"],
		   	["windog","\kira_assets\texture\background\windog.paa"],
		   	["Antenne","\kira_assets\texture\background\Antenne.paa"],
		   	["Bleu déchiré","\kira_assets\texture\background\bleuDechire.paa"],
		   	["Coding Grey","\kira_assets\texture\background\coding.paa"],
		   	["Grumpy cat","\kira_assets\texture\background\grumpyCat.paa"]
	];
	setVarMission("listBackground",_listBG);
};
if(isNil {varMission("AccountBanque")})then{ctrlShow[4113,false];};