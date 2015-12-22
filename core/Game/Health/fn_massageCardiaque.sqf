/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_type"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};

if (!(isNull _unit)) then
{
	if (_unit getVariable ["is_coma", false]) then 
	{ 
		if (player distance _unit < 3) then
		{
			g_action_inUse = true;
			if (_type isEqualTo "main") then 
			{
				private["_amount"];
				titleText["Déplacez-vous pour annuler l'action", "PLAIN", 2];
				g_interrupted = false;
				_amount = 1;
				while {(!g_interrupted && (_unit getVariable ["is_coma", false]) && !(player getVariable ["is_coma", false]) && !(player getVariable ["restrained", false]) && (player distance _unit < 3))} do
				{
					player playAction "medicStart";
					sleep 6;
					player playAction "medicStop";
					if (random(100) <= 5) exitWith { _unit setVariable["is_coma", false, true]; };
					if (player getVariable ["restrained", false]) exitWith {};
					if (player getVariable ["is_coma", false]) exitWith {};
					titleText[format["Tentative n°%1", _amount], "PLAIN", 2];
					_amount = _amount + 1;
				};
				if (_unit getVariable["is_coma", false] || g_interrupted) then {
					titleText["Annulé", "PLAIN"] 
				};
			} else {
				if ((backpack player) == "B_Defibrilateur_khk") then 
				{
					player playAction "medicStart";
					[player, "defib", 20] call CBA_fnc_globalSay3d;
					sleep 7;
					if (random(100) < 61) then {
						_unit setVariable["is_coma", false, true]; 
					};
					player playAction "medicStop";
				} else {
					["Vous n'avez pas de défibrilateur"] call public_fnc_error;
				};
			};
			g_action_inUse = false;
		} else {
			["Vous êtes trop loin"] call public_fnc_error;
		};
	} else {
		["La cible n'est pas dans le coma"] call public_fnc_error; 
	};
} else {
	["Cible invalide"] call public_fnc_error;
};