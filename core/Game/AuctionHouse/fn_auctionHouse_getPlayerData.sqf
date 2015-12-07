/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_ret"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

_ret = [];
switch (_type) do
{
	case 0:
	{
		{
			for "_i" from 0 to (([_x] call public_fnc_itemCount) - 1) do
			{
				_ret pushBack _x;
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
			if (alive _x) then
			{
				if ((player distance _x) < 20) then
				{
					if (((_x getVariable ["info", [""]]) select 0) isEqualTo (getPlayerUID player)) then
					{
						_ret pushBack (typeOf _x);
					};
				};
			};
		} forEach g_vehicles;
	};

	default {[]};
};

_ret;
