/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[] spawn
{
	private["_active"];
	_active = false;
	while {true} do
	{
		if ((goggles player) in ["Mask_M40", "Mask_M40_OD", "Mask_M50"]) then {
			playsound "diver";
			player setFatigue ((getFatigue player) + 0.5);
		}
		else
		{
			private["_type", "_gazEffect", "_cannabis"];
			if ((nearestObject [getPos player, "SmokeShellYellow"]) distance player < 7) then {
				_type = "lacrymo";
				_gazEffect = 10; 
			};
			if ((nearestObject [getPos player, "SmokeShellGreen"]) distance player < 7) then {
				_type = "meth"; 
				_gazEffect = 40;
			};
			_cannabis = nearestObjects [player, ["Skyline_Cannabis"], 10];
			if ((count _cannabis) > 0) then
			{
				{
					if ((_x getVariable["_growprcnt", 0]) > 60) exitWith {
						_type = "cannabis";
					};
				} forEach (_cannabis);
			};
			if (!(isNil "_type")) then
			{
				if (_type in ["lacrymo", "meth"]) then
				{
					[[player, "coughing"], "public_fnc_playSound", nil] spawn life_fnc_MP;
					"dynamicBlur" ppEffectEnable true;
					"dynamicBlur" ppEffectAdjust [_gazEffect];
					"dynamicBlur" ppEffectCommit 5;
					enableCamShake true;
					addCamShake [10, 45, 10];
					player setFatigue 1;
					_active = true;
					if (_type == "meth") then { 
						[200] call public_fnc_bleedup;
					};
					5 fadeSound 0.1;
				};
				if (_type == "cannabis") then
				{
					g_drugs_consuming = g_drugs_consuming + 20;
					missionNamespace setVariable["CONSUME_marijuana", ((missionNamespace getVariable "CONSUME_marijuana") + 20)];
					[[player, "coughing"], "public_fnc_playSound", nil] spawn life_fnc_MP;
				};
			}
			else
			{
				if (_active) then
				{
					_active = false;
					"dynamicBlur" ppEffectEnable true;
					"dynamicBlur" ppEffectAdjust [0];
					"dynamicBlur" ppEffectCommit 15;
					resetCamShake;
					20 fadeSound 1;
				};
			};
		};

		/*
			{
				if (_x == "STATS_marijuana" && g_drugs_patched > 0) then { g_drugs_patched = g_drugs_patched - 1; }
				else
				{
					if (missionNamespace getVariable _x > 0) then
					{
						if (random(100) > 50) then {
							_tremblement1 = _tremblement1 + ((missionNamespace getVariable _x) / 30);
						}
						else {
							_tremblement2 = _tremblement2 + ((missionNamespace getVariable _x) / 30);
						};
					};
				};
			} forEach (g_drugs_stats);
		*/
		sleep 5;
	};
};
