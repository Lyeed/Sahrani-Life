/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (!(isNull _unit)) then
{
	if (_unit getVariable["is_coma", false]) then
	{
		if ((player distance _unit) < 3) then
		{
			private["_text", "_identity"];

			if (!("SkylineItems_Couteau" in (magazines player))) exitWith {
				["Vous n'avez pas de couteau"] call public_fnc_error; 
			};

			_identity = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_item");
			if ((_identity != "") && !(_identity in (magazines player))) then {
				_text = format["Egorger (%1)", (_unit getVariable["realname", (name _unit)])];
			} else {
				_text = "Egorger";
			};
			
			if (!([_text, 12, true, "", false, _unit] call public_fnc_showProgress)) exitWith {};
			
			if (!("SkylineItems_Couteau" in (magazines player))) exitWith {
				["Vous n'avez pas de couteau"] call public_fnc_error; 
			};
			
			if (_unit getVariable["is_coma", false]) then
			{
				[player, _unit] remoteExecCall ["TON_fnc_logDeath", 2, false];
				[player] remoteExecCall ["public_fnc_killAction", _unit, false];
			} else {
				["La personne n'est pas dans le coma"] call public_fnc_error; 
			};
		} else {
			["Vous êtes trop loin"] call public_fnc_error;
		};
	} else {
		["La cible n'est pas dans le coma"] call public_fnc_error;
	};
} else {
	["Cible invalide"] call public_fnc_error;
};