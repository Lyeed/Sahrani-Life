/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_type", "_unit"];
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;
_unit = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _veh) || (isNull _unit) || (_type isEqualTo "")) exitWith {};
if (_type != "driver") exitWith {};
if (_veh isKindOf "Air") exitWith {};

while {(((vehicle _unit) isEqualTo _veh) && ((driver _veh) isEqualTo _unit))} do
{
	private["_speed", "_fuelConsumption"];
	_speed = speed _veh;
	switch (true) do
	{
		case (_speed >= 0 and _speed < 5): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0001; };
		case (_speed >= 5 and _speed < 15): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0002; };
		case (_speed >= 15 and _speed < 30): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0003; };
		case (_speed >= 30 and _speed < 55): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0004; };
		case (_speed >= 55 and _speed < 70): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0005; };
		case (_speed >= 70 and _speed < 85): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0006; };
		case (_speed >= 85 and _speed < 100): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0007; };
		case (_speed >= 100 and _speed < 115): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0008; };
		case (_speed >= 115 and _speed < 130): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0009; };
		case (_speed >= 130 and _speed < 145): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0010; };
		case (_speed >= 145 and _speed < 160): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0011; };
		case (_speed >= 160 and _speed < 350): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0012; };
		case (_speed >= 350 and _speed < 400): { _fuelConsumption = (sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6) / 100000 + 0.0013; };
		default { _fuelConsumption = sqrt(((velocity _veh select 0)^2) + ((velocity _veh select 1)^2))* 3.6/100000 + 0.0001; };
	};
	_veh setFuel ((fuel _veh) - (_fuelConsumption * 0.6));
	sleep 2;
};