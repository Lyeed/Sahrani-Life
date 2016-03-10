/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

switch ([_this, 0, sideUnknown, [sideUnknown]] call BIS_fnc_param) do
{
	case west: {gServer_faction_WEST_bank};
	case east: {gServer_faction_EAST_bank};
	case independent: {gServer_faction_GUER_bank};
	case civilian:
	{
		private "_ret";
		if (g_choice isEqualTo "NORTH") then {
			_ret = gServer_faction_CIV_bank;
		} else {
			_ret = gServer_faction_EAST_bank;
		};
		_ret;
	};
	default {0};
};
