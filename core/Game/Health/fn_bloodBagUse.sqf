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
	if ("SkylineItems_PocheSang" in (magazines player)) then
	{
		if (_unit getVariable["is_hurt", false]) then
		{
			if (!(surfaceIsWater (getPos player)) && (((getPosASLW player) select 2) >= 0)) then 
			{
				if (!(_unit getVariable["blood_receive", false])) then 
				{
					if (!(["Transfert de sang", 12, true, "", false, _unit] call public_fnc_showProgress)) exitWith {};

					if (_unit getVariable["blood_receive", false]) exitWith {
						[
							format
							[
								"%1 déjà recu du sang récemment et doit attendre avant d'en recevoir à nouveau", 
								if (_unit == player) then {"Vous avez"} else {"La cible"}
							]
						] call public_fnc_error; 
					};

					if (!("SkylineItems_PocheSang" in (magazines player))) exitWith {
						["Vous n'avez pas de poche de sang"] call public_fnc_error;
					};

					["Transfert de sang effectué"] call public_fnc_info;
					player removeMagazine "SkylineItems_PocheSang";
					[[],"public_fnc_bloodBagApply", _unit] spawn life_fnc_MP;
				} else {
					[
						format
						[
							"%1 déjà recu du sang récemment et doit attendre avant d'en recevoir à nouveau", 
							if (_unit == player) then {"Vous avez"} else {"La cible"}
						]
					] call public_fnc_error;
				};
			} else {
				["Vous ne pouvez pas faire de transfert de sang sous l'eau"] call public_fnc_error;
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
		["Vous n'avez pas de poche de sang"] call public_fnc_error;
	};
} else {
	["Cible invalide"] call public_fnc_error;
};