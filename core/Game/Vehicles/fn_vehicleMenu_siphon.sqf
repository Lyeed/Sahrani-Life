/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_veh","_fuel","_currentfuel"];
_veh = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_fuel = (getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf (_veh) >> "fuel"));
_currentfuel = _veh getVariable ["typeRefuel", ""];

if (_fuel != _currentfuel) then {
	_fuel = _currentfuel;
};

if (["Siphonnage du véhicule", 30 , objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
{
	player removeItem "jerrican_empty";
	player addMagazine format ["jerrican_%1", _fuel];
	_veh setFuel 0;
};