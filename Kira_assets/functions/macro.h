#define life_chanceHACKER 0.25

#define CASH life_cash
#define BANK life_atmcash

//Variable Macros
#define number (player getVariable "phoneNumber")
#define numberPlayer(var1) (var1 getVariable "phoneNumber")

//getVariable
#define varMission(var1) (missionNamespace getVariable var1)
#define varMissionDft(var1,var2) (missionNamespace getVariable [var1,var2])
#define varProfile(var1) (profileNamespace getVariable var1)
#define varProfileDft(var1,var2) (profileNamespace getVariable [var1,var2])
#define varUI(var1) (uiNamespace getVariable var1)
#define varUIDft(var1,var2) (uiNamespace getVariable [var1,var2])

//setVariable
#define setVarProfile(var1,var2) (profileNamespace setVariable [var1,var2])
#define setVarMission(var1,var2) (missionNamespace setVariable [var1,var2])
#define setVarUI(var1,var2) (uiNamespace setVariable [var1,var2])

//Control Macros
#define getControl(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
