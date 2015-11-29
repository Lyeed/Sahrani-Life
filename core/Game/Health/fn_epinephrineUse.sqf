/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (!(isNull _unit)) then
{
	if (_unit getVariable["is_coma", false]) then
	{
		if ((player distance _unit) < 3) then
		{
			if ("SkylineItems_Adrenaline" in (magazines player)) then 
			{
				life_action_inUse = true;

				[player, "adrenaline", 20] call CBA_fnc_globalSay3d;
				player playAction "medic";
				sleep 3;
				life_action_inUse = false;

				if (!("SkylineItems_Adrenaline" in (magazines player))) exitWith {
					["Vous n'avez pas d'adrénaline"] call public_fnc_error; 
				};
				
				if (player getVariable ["is_coma", false]) exitWith {
					["Vous êtes dans le coma"] call public_fnc_error; 
				};
				
				if (player getVariable ["restrained", false]) exitWith {
					["Vous êtes menotté"] call public_fnc_error; 
				};
				
				player removeMagazine "SkylineItems_Adrenaline";
				_unit setVariable["is_coma", false, true];
			} else {
				["Vous n'avez pas d'adrénaline"] call public_fnc_error;
			};
		} else {
			["Vous êtes trop loin"] call public_fnc_error;
		};
	} else {
		["La cible n'est pas dans le coma"] call public_fnc_error;
	};
} else {
	["Cible invalide"] call public_fnc_error;
};