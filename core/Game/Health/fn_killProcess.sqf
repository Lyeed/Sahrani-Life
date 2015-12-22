/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_text", "_identity"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {
	["Cible invalide"] call public_fnc_error;
};

if ((player distance _unit) > 3) exitWith {
	["Vous êtes trop loin"] call public_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (!("SkylineItems_Couteau" in (magazines player))) exitWith {
	["Vous n'avez pas de couteau"] call public_fnc_error;
};

if (_unit getVariable["is_coma", false]) then
{
	_identity = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(side _unit) >> "identity_item");
	if ((_identity isEqualTo "") || ((_identity != "") && (_identity in (magazinesDetail _unit)))) then {
		_text = format["Egorger (%1)", (_unit getVariable["realname", (name _unit)])];
	} else {
		_text = "Egorger";
	};

	if ([_text, 12, _unit, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
	{
		if ("SkylineItems_Couteau" in (magazines player)) then
		{
			if (_unit getVariable["is_coma", false]) then
			{
				[player, _unit] remoteExecCall ["TON_fnc_logDeath", 2];
				[player] remoteExecCall ["public_fnc_killAction", _unit];
			} else {
				["La personne n'est pas dans le coma"] call public_fnc_error;
			};			
		} else {
			["Vous n'avez pas de couteau"] call public_fnc_error; 
		};	
	};
} else {
	["La cible n'est pas dans le coma"] call public_fnc_error;
};
