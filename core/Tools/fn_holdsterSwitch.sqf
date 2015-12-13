/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((vehicle player) isEqualTo player) then
{
	if (((getPosASLW player) select 2) < 0) then {
		["Vous ne pouvez pas utiliser votre holdster sous l'eau"] call public_fnc_error;
	} else {
		if ((currentWeapon player) isEqualTo "") then
		{
			if (g_curWep_h in (weapons player)) then 
			{
				player selectWeapon g_curWep_h;
				g_curWep_h = "";
			};	
		} else {
			if (((handgunWeapon player) isEqualTo (currentWeapon player)) && !(player canAdd (currentWeapon player))) then {
				["Vous n'avez pas assez de place pour ranger votre arme"] spawn public_fnc_error;
			} else {
				g_curWep_h = currentWeapon player;
				player action ["SwitchWeapon", player, player, 100];
			};
		};

	};
} else {
	["Vous ne pouvez pas utiliser votre holdster en véhicule"] call public_fnc_error;
};
