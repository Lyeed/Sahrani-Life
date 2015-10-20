/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_unit"];
_type = [_this, 3, "", [""]] call BIS_fnc_param;

if (_type == "other") then {
	_unit = cursorTarget; 
} else {
	_unit = player;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (!(isNull _unit) || !(_type isEqualTo "") && (isPlayer _unit)) then
{
	if ("SkylineItems_Morphine" in (magazines player)) then
	{
		g_action_inUse = true;
		player playAction "medic";
		sleep 2;

		if (!("SkylineItems_Morphine" in (magazines player))) exitWith {
			["Vous n'avez pas de morphine"] call public_fnc_error; 
		};
		
		[[], "public_fnc_morphineApply", _unit] spawn life_fnc_MP;
		player removeMagazine "SkylineItems_Morphine";
		g_action_inUse = false;
	} else {
		["Vous n'avez pas de morphine"] call public_fnc_error;
	};
} else {
	["Cible invalide"] call public_fnc_error;
};