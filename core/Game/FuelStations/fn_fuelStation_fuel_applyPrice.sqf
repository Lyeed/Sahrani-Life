/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_station", "_textures", "_idc"];
_station = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _station) exitWith {};
if (typeOf(_station) != "GasStation_F") exitWith {};

_textures = getObjectTextures _station;
_idc = 0;

{
	_price = [_station, _x] call AlysiaClient_fnc_fuelStation_fuel_getPrice;
	if (_price > 9) then
	{
		_numberStr_1 = str(floor(_price / 10));
		if ((_textures select _idc) != _numberStr_1) then {_station setObjectTextureGlobal [_idc, _numberStr_1]};
		
		_numberStr_2 = str(_price % 10);
		if ((_textures select (_idc + 1)) != _numberStr_2) then {_station setObjectTextureGlobal [(_idc + 1), _numberStr_2]};

	} else {
		if ((_textures select _idc) != "stephdub_alysiarp_gasstation\textures\0.paa") then {_station setObjectTextureGlobal [_idc, "stephdub_alysiarp_gasstation\textures\0.paa"]};

		_numberStr = format["stephdub_alysiarp_gasstation\textures\%1.paa", _price];
		if ((_textures select (_idc + 1)) != _numberStr) then {_station setObjectTextureGlobal [(_idc + 1), _numberStr]};
	};

	if ((_textures select (_idc + 2)) != "stephdub_alysiarp_gasstation\textures\0.paa") then {_station setObjectTextureGlobal [(_idc + 2), "stephdub_alysiarp_gasstation\textures\0.paa"]};
	if ((_textures select (_idc + 3)) != "stephdub_alysiarp_gasstation\textures\0.paa") then {_station setObjectTextureGlobal [(_idc + 3), "stephdub_alysiarp_gasstation\textures\0.paa"]};
		
	_idc = _idc + 4;
} forEach (["Diesel", "SP95", "SP98", "GPL"]);
