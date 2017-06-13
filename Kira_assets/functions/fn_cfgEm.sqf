/*
	File: fn_cfgEm.sqf
	Auteur: J. `Kira` D.

	Description:
	flemme


	PARAMETRES:
	1.STRING

	RETURNS:
	1.STRING

	CALL:
	[STRING] call KIRA_fnc_cfgEm
*/
private["_path","_dir2","_dir3"];
_emoji = format["%1%2%3",_this select 0,_this select 1,_this select 2];
_path = "<img image='\kira_assets\texture\emoji\";
switch (_emoji) do {
	case ":O)": {_path = "</t>" + _path;_dir2 ="angel.paa'";_dir3="/><t size='1.0' color='#000000'>";};//angels
	case "::@": {_path = "</t>" + _path;_dir2 ="angry.paa'";_dir3="/><t size='1.0' color='#000000'>";};//angry
	case ":;)": { _path= "</t>" + _path;_dir2 ="clinoeil.paa'";_dir3=format["/><t size='1.0' color='#000000'>"];};//clinoeil
	case ":<3": { _path= "</t>" + _path;_dir2 ="coeur.paa'";_dir3="/><t size='1.0' color='#000000'>";};//coeur
	case ":/3": { _path= "</t>" + _path;_dir2 ="coeurbrise.paa'";_dir3="/><t size='1.0' color='#000000'>";};//coeurbrise
	case ":33": { _path= "</t>" + _path;_dir2 ="coeurcoeur.paa'";_dir3="/><t size='1.0' color='#000000'>";};//coeurcoeur
	case ":B)": { _path= "</t>" + _path;_dir2 ="cool.paa'";_dir3="/><t size='1.0' color='#000000'>";};//cool
	case "::/": { _path= "</t>" + _path;_dir2 ="decu.paa'";_dir3="/><t size='1.0' color='#000000'>";};//decu
	case ":>)": { _path= "</t>" + _path;_dir2 ="devils.paa'";_dir3="/><t size='1.0' color='#000000'>";};//devils
	case "::*": { _path= "</t>" + _path;_dir2 ="kiss.paa'";_dir3="/><t size='1.0' color='#000000'>";};//kiss
	case "::s": { _path= "</t>" + _path;_dir2 ="embarass.paa'";_dir3="/><t size='1.0' color='#000000'>";};//embarass
	case ":')": { _path= "</t>" + _path;_dir2 ="hehe.paa'";_dir3="/><t size='1.0' color='#000000'>";};//hehe
	case ":'(": { _path= "</t>" + _path;_dir2 ="larme.paa'";_dir3="/><t size='1.0' color='#000000'>";};//larme
	case ":xD": { _path= "</t>" + _path;_dir2 ="mdr.paa'";_dir3="/><t size='1.0' color='#000000'>";};//mdr
	case "::|": { _path= "</t>" + _path;_dir2 ="ok.paa'";_dir3="/><t size='1.0' color='#000000'>";};//ok
	case "::)": { _path= "</t>" + _path;_dir2 ="sourire.paa'";_dir3="/><t size='1.0' color='#000000'>";};//sourire
	case "::p": { _path= "</t>" + _path;_dir2 ="tirelangue.paa'";_dir3="/><t size='1.0' color='#000000'>";};//tirelangue
	case "::(": { _path= "</t>" + _path;_dir2 ="triste.paa'";_dir3="/><t size='1.0' color='#000000'>";};//triste
	case ":zZ": { _path= "</t>" + _path;_dir2 ="Zz.paa'";_dir3="/><t size='1.0' color='#000000'>";};//Zz
	default{_path = _this select 0;_dir2 = _this select 1; _dir3 = _this select 2;};
};
_array = [_path,_dir2,_dir3];
_array;