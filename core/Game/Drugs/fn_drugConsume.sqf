/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type"];
_type = [_this, 0, "", [""]] call BIS_fnc_param;

if (_type isEqualTo "") exitWith {};
if ((time - g_action_delay) < 5) exitWith {
	["Veuillez ralentir dans vos actions"] call AlysiaClient_fnc_error;
};

if ([false, _type, 1] call AlysiaClient_fnc_handleInv) then
{
	private["_oldConsume", "_sound", "_duration"];

	g_action_delay = time;
	_sound = getText(missionConfigFile >> "ALYSIA_DRUG" >> _type >> "sound");
	_duration = getNumber(missionConfigFile >> "ALYSIA_DRUG" >> _type >> "duration");

	if (g_drugs_consuming == 0) then
	{
		g_drugs_consuming = (_duration * 60) * 3;
		[] spawn
		{
			while {g_drugs_consuming > 0} do
			{
				g_drugs_consuming = g_drugs_consuming - 1;
				sleep 1;
			};
			g_drugs_consuming = 0;
		};
	} else {
		g_drugs_consuming = g_drugs_consuming + ((_duration * 60) * 3);
	};

	missionNamespace setVariable[format["drug_stats_%1", _type], ((missionNamespace getVariable[format["drug_stats_%1", _type], 0]) + 1)];
	[format["<t align='center'>Vous avez consommé<br/>1x %1</t>", ([_type] call AlysiaClient_fnc_itemGetName)] call AlysiaClient_fnc_varToStr] call AlysiaClient_fnc_info;
	if (_sound != "") then {
		[player, _sound, 20] call CBA_fnc_globalSay3d;
	};
	
	_oldConsume = missionNamespace getVariable[format["drug_consume_%1", _type], 0];
	if (_oldConsume isEqualTo 0) then
	{
		missionNamespace setVariable[format["drug_consume_%1", _type], (_duration * 60)];
		call compile format
		[
			"
				private[""_value""];
				_value = missionNamespace getVariable[""drug_consume_%1"", 0];
				
				%2

				while {_value > 0} do
				{
					%3
					missionNamespace setVariable[""drug_consume_%1"", (_value - 1)];
					sleep 1;
					_value = missionNamespace getVariable[""drug_consume_%1"", 0];
				};

				%4
			",
			_type,
			getText(missionConfigFile >> "ALYSIA_DRUG" >> _type >> "effect_init"),
			getText(missionConfigFile >> "ALYSIA_DRUG" >> _type >> "effect_loop"),
			getText(missionConfigFile >> "ALYSIA_DRUG" >> _type >> "effect_end")
		];		
	} else {
		missionNamespace setVariable[format["drug_consume_%1", _type], (_oldConsume + (_duration * 60))];
	};
};