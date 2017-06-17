/*
 * Author: esteldunedain
 * Return a suitable position for the action point for the given target vehicle
 *
 * Arguments:
 * None (uses local variable _target)
 *
 * Return value:
 * Children actions <ARRAY>
 *
 * Example:
 * call ace_interaction_fnc_getVehiclePos
 *
 * Public: No
 */
#include "script_component.hpp"
// IGNORE_PRIVATE_WARNING(_target);

private _bb = boundingBoxReal _target;
(_bb select 0) params ["_bbX", "_bbY", "_bbZ"];

private _relPos = _target worldToModelVisual ASLToAGL EGVAR(interact_menu,cameraPosASL);
#ifdef DEBUG_MODE_FULL
    _relPos = _target worldToModelVisual ASLToAGL eyePos ACE_player;
#endif
_relPos params ["_dx", "_dy", "_dz"];

private _ndx = (abs _dx) / ((abs (_bbx)) - 1);
private _ndy = (abs _dy) / ((abs (_bbY)) - 1);
private _ndz = (abs _dz) / ((abs (_bbZ)) - 1);

private "_pos";
if (_ndx > _ndy) then {
    if (_ndx > _ndz) then {
        // _ndx is greater, will colide with x plane first
        _pos = _relPos vectorMultiply ((1 / _ndx) min 0.8);
    } else {
        // _ndz is greater, will colide with z plane first
        _pos = _relPos vectorMultiply ((1 / _ndz) min 0.8);
    };
} else {
    if (_ndy > _ndz) then {
        // _ndy is greater, will colide with y plane first
        _pos = _relPos vectorMultiply ((1 / _ndy) min 0.8);
    } else {
        // _ndz is greater, will colide with z plane first
        _pos = _relPos vectorMultiply ((1 / _ndz) min 0.8);
    };
};
//Set max height at player's eye level (prevent very high interactin point on choppers)
_pos set [2, (_pos select 2) min _dz];
TRACE_4("",_bb,_bbX,_relPos, _pos);
_pos

///////////////////
// The code belows works very well for cursor mode, but not at all in normal mode
// maybe it could be enabled by default only for that mode
/*
if (cursorObject isEqualTo _target) exitWith {
    private _dest = EGVAR(interact_menu,cameraPosASL) vectorAdd (EGVAR(interact_menu,cameraDir) vectorMultiply 50);
    private _origin = EGVAR(interact_menu,cameraPosASL);
    //private _origin = EGVAR(interact_menu,cameraPosASL) vectorAdd [0, 0, -0.35] vectorDiff (EGVAR(interact_menu,cameraDir) vectorMultiply 1.5);
    //private _dest = AGLtoASL (_target modelToWorldVisual [0,0,0]);
    private _results = lineIntersectsSurfaces [_origin, _dest, ACE_player, objNull, true, 5];
    private _finalPos = [0,0,0];
    {
        _x params ["_pos", "", "_obj"];
        TRACE_3("",_forEachIndex,_obj,_target);
        if (_obj isEqualTo _target) exitWith {
            _finalPos = _target worldToModelVisual ASLtoAGL (_pos vectorAdd (EGVAR(interact_menu,cameraDir) vectorMultiply 1.0));
        };
    } forEach _results;
    _finalPos
};
[0,0,0]
*/
///////////////////

