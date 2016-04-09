/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_config", "_index", "_reduiceFatigue", "_maxFatigue", "_nextSound", "_medecine"];
_type = [_this, 0, "", [""]] call BIS_fnc_param;

if (_type isEqualTo "") exitWith {};

_config = missionConfigFile >> "ALYSIA_DESEASES" >> _type;
if (!isClass(_config)) exitWith {};

_index = [_type, g_deseases] call AlysiaClient_fnc_index;
if (_index isEqualTo -1) then
{
	_medecine = [];

	{
		_config_med = _x >> "heal" >> _type;
		if (isClass(_config_med)) then
		{
			_medecine pushBack 
			[
				configName _x,
				round(random(getNumber(_config_med >> "max") - getNumber(_config_med >> "min"))) + getNumber(_config_med >> "min")
			];
		};
	} forEach ("true" configFile (missionConfigFile >> "ALYSIA_MEDECINE"));
	g_deseases pushBack [_type, _medecine];
} else {
	_medecine = (g_deseases select _index) select 1;
};

_maxFatigue = (1 - getNumber(_config >> "reduce_fatigue"));
_nextSound = 0;

while {count(_medecine) > 0} do
{
	if (time > _nextSound) then
	{
		if (random(100) <= 20) then
		{
			[player, getArray(_config >> "sounds") call BIS_fnc_selectRandom, 25] call CBA_fnc_globalSay3d;
			_nextSound = time + round(random(100) + 10);
		};
	};

	if (_maxFatigue != 1) then
	{
		if ((getFatigue player) > _maxFatigue) then
		{
			player setFatigue _maxFatigue;
		};

		uiSleep 1;
	} else {
		uiSleep 20;
	};
};

g_deseases deleteAt ([_type, g_deseases] call AlysiaClient_fnc_index);
