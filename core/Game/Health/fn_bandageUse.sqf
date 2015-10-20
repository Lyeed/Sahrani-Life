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
	if ("SkylineItems_Bandage" in (magazines player)) then
	{
		if (_unit getVariable["is_bleeding", false]) then
		{
			if (!(surfaceIsWater (getPos player)) && (((getPosASLW player) select 2) >= 0)) then 
			{
				if (!(["Bandage", 6, true, "bandage", true, _unit] call public_fnc_showProgress)) exitWith {};
				
				if (!("SkylineItems_Bandage" in (magazines player))) exitWith {
					["Vous n'avez pas de bandage"] call public_fnc_error;
				};

				["<t align='center'>Bandage<br/><t color='#3ADF00'>appliqué</t></t>"] call public_fnc_info;
				player removeMagazine "SkylineItems_Bandage";
				if (_unit == player) then {
					g_bleed = 0;
				} else {
					[[], "public_fnc_bandageApply", _unit] spawn life_fnc_MP;
				};								
			} else {
				["Vous ne pouvez pas faire de bandage sous l'eau"] call public_fnc_error;
			};
		} else {
			[
				format
				[
					"%1 pas blessé",
					if (_unit == player) then {"Vous n'êtes"} else {"La cible n'est"}
				]
			] call public_fnc_error;	
		};
	} else {
		["Vous n'avez pas de bandage"] call public_fnc_error;
	};
} else {
	["Cible invalide"] call public_fnc_error;
};