/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _target) || !(isPlayer _target)) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["restrained", false])) exitWith {
	["La cible n'est pas menottée."] call AlysiaClient_fnc_error;
};
if (!("Alysia_Lockpick" in (magazines player))) exitWith {
	["Vous n'avez pas de kit de crochetage."] call AlysiaClient_fnc_error;
};

if (!(["Crochetage de menottes", 7, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!(_target getVariable ["restrained", false])) exitWith {
	["La cible n'est pas menottée."] call AlysiaClient_fnc_error;
};
if (!("Alysia_Lockpick" in (magazines player))) exitWith {
	["Vous n'avez pas de kit de crochetage."] call AlysiaClient_fnc_error;
};

player removeMagazine "Alysia_Lockpick";
if ((random(100)) < 35) then
{
	_target setVariable ["restrained", false, true];
	[player, "cuffout", 10] call CBA_fnc_globalSay3d;
	["Crochetage <t color='#3ADF00'>réussi</t> !<br/>La cible n'est maintenant plus menottée."] call AlysiaClient_fnc_info;
} else {
	["Crochetage <t color='#FF0000'>raté</t> !"] call AlysiaClient_fnc_info;
};
