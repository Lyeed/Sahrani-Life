/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_handled"];

if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

closeDialog 0;
_vehicle = cursorTarget;
if (!(isNull _vehicle)) then
{ 
	if (count (_vehicle getVariable["dbInfo", []]) > 0) then
	{
		_handled = _vehicle;
		life_vehicles pushBack _vehicle;
	};
};

if (isNil "_handled") then
{
	private["_house"];
	_house = [(getPos player), sideUnknown] call ALYSIA_fnc_nearestHouse;
	if ((count _house) > 0) then
	{
		_house = _house select 0;
		_handled = _house;
		life_houses pushBack _house;
	};
};

if (!(isNil "_handled")) then {
	[format["<align='center'>Vous avez récupéré les clés de<br/><br/>%1</t>", (getText(configFile >> "CfgVehicles" >> (typeOf _handled) >> "displayName"))]] call ALYSIA_fnc_info;
}
else
{
	["Aucune cible valide"] call ALYSIA_fnc_error;
};
