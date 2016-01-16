/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_ret"];
_veh = vehicle player;
_ret = false;

if (_veh != player) then
{
	if (((driver _veh) isEqualTo player) && (isEngineOn _veh)) then
	{
		if (_veh getVariable ["sireneOn", false]) then {
			_veh setVariable ["sireneOn", false];
		} else {
			_sirene = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "sirene_sound");
			if (_sirene != "") then
			{
				if (time > (_veh getVariable ["sireneTime", 0])) then
				{
					_veh setVariable ["sireneOn", true];
					[_veh, _sirene, getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "sirene_sleep")] spawn
					{
						private["_veh", "_sirene", "_sleep"];
						_veh = _this select 0;
						_sirene = _this select 1;
						_sleep = _this select 2;
						while {((_veh getVariable ["sireneOn", false]) && ((vehicle player) isEqualTo _veh) && ((driver _veh) isEqualTo player) && (isEngineOn _veh))} do
						{
							_veh setVariable ["sireneTime", (time + _sleep)];
							[_veh, _sirene, 200] call CBA_fnc_globalSay3d;
							sleep _sleep;
						};
					};
					_ret = true;
				};
			};
		};
	};
};

_ret;
