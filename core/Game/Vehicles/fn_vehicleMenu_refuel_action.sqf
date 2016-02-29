/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_config"];

if (isNull g_interaction_target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if ((speed g_interaction_target) > 0) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule qui se déplace."] call AlysiaClient_fnc_error;
};
if (isEngineOn g_interaction_target) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule ayant le moteur allumé."] call AlysiaClient_fnc_error;
};

_item = lbData[69002, lbCurSel 69002];
if (_item isEqualTo "") exitWith {
	["Vous n'avez pas choisi de jerrican."] call AlysiaClient_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Jerrican", 5, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!(_item in (magazines player))) exitWith {
	["Vous devez garder le jerrican sur vous durant toute l'action."] call AlysiaClient_fnc_error;
};

_config = (format["getText(_x >> 'jerrycan') isEqualTo %1", _item] configClasses (missionConfigFile >> "ALYSIA_FUEL")) select 0;
if (isNil "_config") exitWith {
	[format["Impossible de trouver le fuel correspondant à l'item [%1]", _item]] call AlysiaClient_fnc_error;
};

player removeMagazine _item;
player addMagazine "Alysia_jerrycan_empty";
[true, g_interaction_target, 20, (configName _config)] call ALysiaClient_fnc_handleFuel;
