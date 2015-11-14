/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_newNumber", "_numbers"];

_numbers = missionNamespace getVariable ["gServer_phone_numbers", []];
_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
while {_newNumber in _numbers} do
{
	_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
};

if (g_phone_number != "") then {
	_numbers deleteAt (_numbers find g_phone_number);
};

_numbers pushBack _newNumber;
g_phone_number = _newNumber;
player setVariable ["number", _newNumber, true];
["gServer_phone_numbers", _numbers] call CBA_fnc_publicVariable;
true;