/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_type", "_chance", "_amount"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;

if (isNull _unit) exitWith {
	["Cible invalide"] call public_fnc_error;
};
if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};
if ((_type isEqualTo "debif") && ((backpack player) != "B_Defibrilateur_khk")) exitWith {
	["Vous n'avez pas de défibrilateur"] call public_fnc_error;
};

_chance = switch (_type) do
{
	case "main": {5};
	case "debif": {61};
	default {-1};
};
if (_chance isEqualTo -1) exitWith {
	["Impossible de déterminer vos chances de réaminer"] call public_fnc_error;
};

g_action_inUse = true;
g_interrupted = false;
_amount = 0;
while {(!g_interrupted && (_unit getVariable ["is_coma", false]) && !(player getVariable ["is_coma", false]) && !(player getVariable ["restrained", false]) && (player distance _unit < 3))} do
{
	player playAction "medicStart";
	sleep 6;
	if (!g_interrupted) then
	{
		player playAction "medicStop";
		if (random(100) <= _chance) exitWith
		{
			titleText["* Réussi *", "PLAIN DOWN"];
			_unit setVariable ["is_coma", false, true];
		};
		titleText[format["* Tentative n°%1 *", _amount], "PLAIN DOWN", 2];
		_amount = _amount + 1;
	};
};

if (g_interrupted) then 
{
	player playAction "medicStop";
	titleText["* Annulé *", "PLAIN DOWN"];
};
