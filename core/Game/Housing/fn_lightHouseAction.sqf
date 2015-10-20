/*
	Author: Bryan "Tonic" Boardwine
*/
private["_house"];
_house = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _house) exitWith {};
if (isNull (_house getVariable ["lightSource", ObjNull])) then 
{
	["<t align='center'>Lumières<br/><t color='#FF8000'>ON</t></t>"] call public_fnc_info;
	[[_house, true], "life_fnc_lightHouse", true] spawn life_fnc_MP;
} else {
	["<t align='center'>Lumières<br/><t color='#FF8000'>OFF</t></t>"] call public_fnc_info;
	[[_house, false], "life_fnc_lightHouse", true] spawn life_fnc_MP;
};