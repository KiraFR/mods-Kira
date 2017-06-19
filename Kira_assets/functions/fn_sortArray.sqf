#define SELPrix(var1,var2) (var1 select var2) select 5
#define SEL(var1,var2) var1 select var2
#define REP(var1,var2,var3) var1 set [var2,(var1 select var3)]
/*
	File: fn_sortArrayOfNumber.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1. ARRAY OF NUMBER

	RETURNS:
	1. ARRAY OF NUMBER

	CALL:
	[NUMBER] call KIRA_fnc_sortArrayOfNumber
*/
private["_sorted"];
_array = param[0,[],[[]]];
if(count _array isEqualTo 0)exitWith{_array;};

_sorted = false;
while {!_sorted} do {
	_sorted = true;
	for "_i" from 1 to (count _array)-1 step 2 do{
		if(SELPrix(_array,_i) < SELPrix(_array,_i+1))then{
			_k = SEL(_array,_i);
			REP(_array,_i,_i+1);
			_array set [_i+1,_k];
			_sorted = false;
		};
	};
	for "_i" from 0 to (count _array)-1 step 2 do{
		if(SELPrix(_array,_i) < SELPrix(_array,_i+1))then{
			_k = SEL(_array,_i);
			REP(_array,_i,_i+1);
			_array set [_i+1,_k];
			_sorted = false;
		};
	};
};
_array;