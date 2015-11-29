/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = cursorTarget;

if ((isNull _target) || !(isPlayer _target)) exitWith { ["Cible invalide"] call ALYSIA_fnc_error; };
if (life_coma) exitWith { ["Vous êtes dans le coma"] call ALYSIA_fnc_error; };
if (player distance _target > 4) exitWith { ["Vous êtes trop loin"] call ALYSIA_fnc_error; };

if ([false, "baillon", 1] call life_fnc_handleInv) then {
	if (!(_target getVariable["baillon", false])) then
	{
		[player, "AinvPknlMstpSnonWnonDnon_Putdown_AmovPknlMstpSnonWnonDnon"] remoteExecCall ["switchMove", -2];
		titleText["* Vous avez bailloné la personne *", "PLAIN DOWN"];
		[[], "ALYSIA_fnc_applyBaillon", _target, false] spawn life_fnc_MP;
	}
	else { ["La cible porte déjà de baillon"] call ALYSIA_fnc_error; };
}
else { ["Vous n'avez pas de baillon"] call ALYSIA_fnc_error; };
