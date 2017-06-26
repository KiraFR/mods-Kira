#include "..\macro.h"

disableSerialization;
ctrlSetText[4106,(profileNamespace getVariable "imageBackground")];
private _map = getControl(4750,4753);
_map ctrlMapAnimAdd [0, 0.05, player];
ctrlMapAnimCommit _map;
