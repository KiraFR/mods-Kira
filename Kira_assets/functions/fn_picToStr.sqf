/*
	File: fn_picToStr.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.SCALAR

	RETURNS:
	NONE

	CALL:
	[SCALAR] call KIRA_fnc_picToStr
*/
private["_msg"];
_idc = param[0,0,[0]];

switch (_idc) do { 
	case 4925 : {  _msg = "::)"; };
	case 4926 : {  _msg = ":O)"; };
	case 4927 : {  _msg = "::@"; };
	case 4928 : {  _msg = ":;)"; };
	case 4929 : {  _msg = ":<3"; };
	case 4930 : {  _msg = ":/3"; };
	case 4931 : {  _msg = ":33"; };
	case 4932 : {  _msg = ":B)"; };
	case 4933 : {  _msg = "::/"; };
	case 4934 : {  _msg = ":>)"; };
	case 4935 : {  _msg = "::s"; };
	case 4936 : {  _msg = ":')"; };
	case 4937 : {  _msg = "::*"; };
	case 4938 : {  _msg = ":'("; };
	case 4940 : {  _msg = ":xD"; };
	case 4941 : {  _msg = "::|"; };
	case 4943 : {  _msg = "::p"; };
	case 4944 : {  _msg = "::("; };
	case 4945 : {  _msg = ":zZ"; };
};

ctrlSetText [4939, format["%2%1",_msg,ctrlText 4939]];