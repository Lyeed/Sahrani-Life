/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_station", ObjNull, [ObjNull]],
	["_fuel", "", ""]
]) exitWith {};

// Pour 10km -> 10000m -> Augmentation de 5Kn -> / par 2000

if (_fuel isEqualTo "") exitWith {};

private ["_price"];

_price = (round(((getNumber(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuel >> "price")) + (_station distance (markerPos "oilu"))) / 2000));
_price;
