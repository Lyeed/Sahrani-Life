/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_use", "_item"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {false};

if (player getVariable ["is_coma", false]) exitWith
{
	["Vous ne pouvez pas utiliser d'objet dans le coma"] call AlysiaClient_fnc_error;
	false;
};

if (g_action_inUse) exitWith
{
	["Vous ne pouvez pas utiliser d'objet pour le moment"] call AlysiaClient_fnc_error;
	false;
};

_use = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use" >> "action");
if (_use isEqualTo "") exitWith
{
	["Cet objet n'est pas utilisable"] call AlysiaClient_fnc_error;
	false;
};

call compile format[_use, _item];
true;
