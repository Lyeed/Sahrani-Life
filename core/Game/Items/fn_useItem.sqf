/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_use"];

if (!params [
	["_item", "", [""]]
]) exitWith {false};

if (_item isEqualTo "") exitWith {false};

if ((time - g_action_delay) < 2) exitWith
{
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
	false;
};

if (g_coma) exitWith
{
	["Vous ne pouvez pas utiliser d'objet dans le coma"] call public_fnc_error; 
	false;
};

if (g_action_inUse) exitWith
{
	["Vous ne pouvez pas utiliser d'objet pour le moment"] call public_fnc_error;
	false;
};

_use = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use");
if (_use isEqualTo "") exitWith
{
	["Cet objet n'est pas utilisable"] call public_fnc_error;
	false;
};

g_action_delay = time;
call compile format[_use, _item];
true;