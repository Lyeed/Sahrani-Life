/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_labo"];
_labo = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _labo) exitWith {};
if ((missionNamespace getVariable["adn", 0]) == 0) exitWith {
	["Vous n'avez pas de kit d'ADN"] call public_fnc_error;
};
if (!(["Inspection", 4, true, "", false, _labo] call public_fnc_showProgress)) exitWith {};

if ((count(_labo getVariable["info", []]) > 0) && (count(_labo getVariable["users", []]) > 0)) then
{
	private["_users", "_msgTxt"];
	_users = _labo getVariable["users", []];
	_msgTxt = "";
	{
		_msgTxt = _msgTxt + format["%1<br/>", _x];
	} forEach (_users);
	hintSilent parseText format
	[
		"
			<img size='10' color='#FFFFFF' image='Alysia_textures\data\DNA.paa'/><br/>
			<t size='1.8' align='center'>RESULTATS</t><br/>
			<t size='1'>%1</t>
		", _msgTxt
	];
} else {
	hintSilent parseText format
	[
		"
			<img size='10' color='#FFFFFF' image='Alysia_textures\data\DNA.paa'/><br/>
			<t size='1.8' align='center'>RESULTATS</t><br/>
			<t size='1'>Personne n'a récemment utilisé cette installation</t>
		"
	]; 
};