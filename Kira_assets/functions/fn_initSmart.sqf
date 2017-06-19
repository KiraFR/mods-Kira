#include <macro.h>
closeGPS = false;
_check = [] spawn KIRA_fnc_checkGpsClosed;
waitUntil {scriptDone _check};
if(!closeGPS)exitWith{closeGPS = nil;};
closeGPS = nil;
createDialog "DOSTARA_GENERAL";

if(isNil {number})then{ctrlShow[4107,false];ctrlShow[4197,false];};
if(isNil {profileNamespace getVariable "imageBackground"})then{profileNamespace setVariable ["imageBackground","\kira_assets\texture\background\defaultBG.paa"];};
if(isNil {profileNamespace getVariable "anonyme"})then{profileNamespace setVariable ["anonyme",false];};
if(isNil {profileNamespace getVariable "repertoire"})then{profileNamespace setVariable ["repertoire",[]];};
if(isNil {profileNamespace getVariable "conversations";})then{profileNamespace setVariable ["conversations",[]];};
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];
if(isNil {missionNamespace getVariable "listBackground"}) then{missionNamespace setVariable ["listBackground",[	["Par default","\kira_assets\texture\background\defaultBG.paa"],
																											   	["Miku Miku","\kira_assets\texture\background\mikumiku.paa"],
																											   	["boule Pixel","\kira_assets\texture\background\boulePixel.paa"],
																											  	["Chat","\kira_assets\texture\background\cat.paa"],
																											   	["Hebus","\kira_assets\texture\background\hebus.paa"],
																											   	["Kenshin","\kira_assets\texture\background\kenshin.paa"],
																											   	["Kaneki","\kira_assets\texture\background\kaneki.paa"]]
																											  ];};
if(isNil {missionNamespace getVariable "AccountBanque"})then{ctrlShow[4113,false];};