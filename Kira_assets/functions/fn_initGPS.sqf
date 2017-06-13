disableSerialization;
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];
_map = findDisplay 4750;
_map = _map displayCtrl 4753;
_map ctrlMapAnimAdd [0, 0.05, player];
ctrlMapAnimCommit _map;