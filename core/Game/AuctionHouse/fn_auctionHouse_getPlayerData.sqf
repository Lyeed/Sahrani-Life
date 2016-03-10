/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_ret";

_ret = [];
switch ([_this, 0, 0, [0]] call BIS_fnc_param) do
{
	case 0:
	{
		{
			if (!(_x in ["illegal_money", "money_transfer"])) then
			{
				for "_i" from 0 to (([_x] call AlysiaClient_fnc_itemCount) - 1) do
				{
					_ret pushBack _x;
				};
			};
		} forEach (missionNamespace getVariable ["g_inv_items", []]);
	};

	case 1:
	{
		{
			if (_x != "") then {
				_ret pushBack _x;
			};
		} forEach ([
			primaryWeapon player,
			secondaryWeapon player,
			handgunWeapon player,
			uniform player,
			vest player,
			backpack player,
			goggles player,
			headgear player,
			binocular player
		] + (primaryWeaponItems player) + (assignedItems player) + (uniformItems player) + (vestItems player));
	};
	
	case 2:
	{
		{
			_ret pushBack (typeOf _x);
		} forEach g_vehicles;
	};

	default {[]};
};

_ret;
