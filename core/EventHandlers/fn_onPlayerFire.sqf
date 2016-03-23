/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_weapon", "_target"];
_weapon = [_this, 1, "", [""]] call BIS_fnc_param;

_target = cursorObject;
if (!(isNull _target) && ((vehicle player) isEqualTo player)) then
{
	_config = missionConfigFile >> "ALYSIA_FARMING_OBJECT" >> typeOf(_target);
	if (isClass _config) then
	{
		if ((player distance _target) < ((((boundingBox _target) select 1) select 0)) + 1.2) then
		{
			if (_weapon isEqualTo getText(_config >> "tool")) then
			{
				if (!g_action_inUse) then
				{
					g_action_inUse = true;
					player playActionNow "Skyline_SwingAnim_Outils";
					uiSleep 0.25;
					playSound (getArray(_config >> "sounds") call BIS_fnc_selectRandom);

					_times = (_target getVariable ["farming", 0]) + 1;
					if (_times >= getNumber(_config >> "times")) then
					{
						_space = true;
						{
							private "_amount";
							_amount = 0;

							if ((_x select 2) isEqualTo 1) then {
								_amount = [(_x select 0), round(random(_x select 1)) + 1, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
							} else {
								_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
							};

							if ((_amount isEqualTo 0) && (_forEachIndex isEqualTo 0)) exitWith {_space = false};
							[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
						} forEach getArray(_config >> "receive");
						if (!_space) exitWith {["Votre inventaire est plein"] call AlysiaClient_fnc_info};
						_target setVariable ["farming", 0];
					} else {
						_target setVariable ["farming", _times];
					};

					uiSleep 1.3;
					g_action_inUse = false;
				};
			} else {
				[
					format
					[
						"Vous n'avez pas le bon outil.<br/>Vous avez besoin de <t color='#FF8000'>%1</t> pour commencer la récolte.",
						getText(configFile >> "CfgWeapons" >> getText(_config >> "tool") >> "displayName")
					]
				] call AlysiaClient_fnc_error;
			};
		};
	};
};
