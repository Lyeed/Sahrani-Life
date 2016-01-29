/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_plate", "_dog"];

_plate = round(random(999999));

(["Alsatian_Sand_F", "Alsatian_Black_F", "Alsatian_Sandblack_F"] call BIS_fnc_selectRandom) createUnit [(position player), (group player), format["this setVariable ['plate', %1];", _plate], 0.5, "PRIVATE"];

{
	if ((_x getVariable ["plate", 0]) isEqualTo _plate) exitWith {
		_dog = _x;
	};
} forEach (units (group player));

if (isNil "_dog") exitWith {};

g_dog = _dog;
g_dog setSpeedMode "FULL";
g_dog setVariable ["follow", true];

[] spawn
{
	while {(!(isNull g_dog) && (alive g_dog))} do
	{
		if (g_dog getVariable ["follow", false]) then
		{
			if ((g_dog distance player) > 3) then
			{
				g_dog domove (getPos player);
			};
		};
		if (!(isNull (g_dog getVariable ["search", objNull]))) then
		{
			g_dog doMove (getPos (g_dog getVariable ["search", objNull]));
		};

		sleep 1;
	};

	sleep 2;
	deleteVehicle g_dog;
	g_dog = objNull;
};
