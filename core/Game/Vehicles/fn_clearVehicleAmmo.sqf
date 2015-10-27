/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle","_veh"];
_vehicle = [_this, 0, Objnull, [Objnull]] call BIS_fnc_param;
_side = [_this, 1, sideUnknown, [west]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
_veh = typeOf _vehicle;

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;
_vehicle disableTIEquipment true;
_vehicle enableRopeAttach false;

switch (typeOf _vehicle) do
{
	case "B_Boat_Armed_01_minigun_F":
	{
		_vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt", [0]];
	};
	case "B_APC_Wheeled_01_cannon_F":
	{
		_vehicle removeMagazinesTurret ["60Rnd_40mm_GPR_Tracer_Red_shells", [0]];
		_vehicle removeMagazinesTurret ["40Rnd_40mm_APFSDS_Tracer_Red_shells", [0]];
	};
	case "O_Heli_Attack_02_black_F":
	{
		_vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells", [0]];
		_vehicle removeMagazinesTurret ["8Rnd_LG_scalpel", [0]];
		_vehicle removeMagazinesTurret ["38Rnd_80mm_rockets", [0]];
	};
	case "B_Heli_Transport_01_F":
	{
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red", [1]];
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red", [2]];
	};
	case "Skyline_CH147_01":
	{
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red", [1]];
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red", [2]];
	};
};

