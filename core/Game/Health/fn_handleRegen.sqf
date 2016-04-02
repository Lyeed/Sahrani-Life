/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_config";

if (g_regen_active) exitWith {};

g_regen_active = true;
_config = missionConfigFile >> "ALYSIA_MEDICAL" >> "regen";

while {(g_blood < 4000)} do
{
	if ((g_bleed isEqualTo 0) && !(player getVariable ["is_coma", false]) && (g_hunger > 0) && (g_thirst > 0)) then 
	{
		_regen = 0;
		if ((g_hunger >= 90) && (g_thirst >= 90)) then {
			_regen = getNumber(_config >> "regen_basic");
		} else {
			_regen = getNumber(_config >> "regen_healthy");
		};

		if (g_morphine > 0) then {
			_regen = _regen + (g_morphine * getNumber(_config >> "regen_morphine_multiplier"));
		};

		if ((player getVariable ["sit", false]) && (animationState player) isEqualTo "ainjppnemrunsnonwnondb_still") then {
			_regen = _regen * 15;
		};

		if (_regen > 0) then {
			[_regen] call AlysiaClient_fnc_handleBlood;
		};
	};

	uiSleep 2;
};

g_regen_active = false;
