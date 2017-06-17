/*
 * Author: commy2
 * Checks if the unit can pardon the target.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Target <OBJECT>
 *
 * Return Value:
 * Unit can pardon target <BOOL>
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_unit", "_target"];

alive _target
&& {rating _target < -2000}
&& {side group _unit == side group _target}
