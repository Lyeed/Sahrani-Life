/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_amount", "_ret"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;
_amount = abs(round([_this, 1, 0, [0]])) call BIS_fnc_param;

if (_amount isEqualTo 0) exitWith {};

_ret = false;
switch (playerSide) do
{
	case east:
	{
		if (_type || (!_type && (([playerSide] call AlysiaClient_fnc_atmFactionGet) >= _amount))) then
		{
			[east, _type, _amount, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			_ret = true;
		};
	};
	case west:
	{
		if (_type || (!_type && (([playerSide] call AlysiaClient_fnc_atmFactionGet) >= _amount))) then
		{
			[west, _type, _amount, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			_ret = true;
		};
	};
	case independent:
	{
		if (_type || (!_type && (([playerSide] call AlysiaClient_fnc_atmFactionGet) >= _amount))) then
		{
			[independent, _type, _amount, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			_ret = true;
		};
	};
	case civilian:
	{
		if (_type || (!_type && (([playerSide] call AlysiaClient_fnc_atmFactionGet) >= _amount))) then
		{
			if (g_choice isEqualTo "NORTH") then {
				[civilian, _type, _amount, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			} else {
				[east, _type, _amount, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			};

			_ret = true;
		};
	};
};

_ret;
