/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_trunk", "_weight_actual", "_weight_max"];

if (isNull g_interaction_target) exitWith {};

if (g_interaction_target getVariable ["farm_gather", false]) exitWith
{
	g_interaction_target setVariable ["farm_gather", false];
	["Récolte annulée"] call public_fnc_error;
};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas commencer la récolte alors que le coffre est en cours d'utilisation"] call public_fnc_error;
};
if (!(isEngineOn g_interaction_target)) exitWith {
	["Vous devez avoir le moteur démarré pour débuter la procédure de récolte"] call public_fnc_error;
};
if ((driver g_interaction_target) != player) exitWith {
	["Seul le conducteur peut débuter la procédure de récolte"] call public_fnc_error;
};

closeDialog 0;
_trunk = g_interaction_target getVariable ["Trunk", []];
_weight_actual = [_trunk] call public_fnc_weightGenerate;
_weight_max = [typeOf(g_interaction_target)] call public_fnc_getVehVirtual;

g_interaction_target setVariable ["farm_gather", true];
g_interaction_target setVariable ["trunk_in_use_ID", "FARMING", true];

["Début de la procédure de récolte dans deux secondes..."] call public_fnc_info;
sleep 2;

while {(g_interaction_target getVariable ["farm_gather", false])} do
{
	scopeName "loop";

	if ((driver g_interaction_target) != player) exitWith {
		["Récolte annulée<br/>Vous devez rester à la place de conducteur"] call public_fnc_error;
	};
	if (!(isEngineOn g_interaction_target)) exitWith {
		["Récolte annulée<br/>Le moteur doit rester allumé"] call public_fnc_error;
	};

	_plant = (nearestObjects [player, (call g_plants), 2]) select 0;
	if (!(isNil "_plant")) then
	{
	 	if (_plant getVariable ["ready", false]) then
	 	{
			{
				_amount = 0;
				_item = _x select 0;

				if ((_x select 2) isEqualTo 1) then {
					_amount = [_item, round(random(_x select 1)), _weight_actual, _weight_max] call public_fnc_calWeightDiff;
				} else {
					_amount = [_item, (_x select 1), _weight_actual, _weight_max] call public_fnc_calWeightDiff;
				};

				if (_amount isEqualTo 0) then
				{
					["L'inventaire du véhicule est plein"] call public_fnc_error;
					breakOut "loop";
				} else {
					_trunk = [true, _trunk, _item, _amount] call public_fnc_handleTrunk;
					_weight_actual = _weight_actual + (([_item] call public_fnc_itemGetWeight) * _amount);
				};
			} forEach getArray(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> typeOf(_plant) >> "receive");
			deleteVehicle _plant;
	 	};
	};

	sleep 0.5;
};

if (!(_trunk isEqualTo (g_interaction_target getVariable ["Trunk", []]))) then {
	g_interaction_target setVariable ["Trunk", _trunk, true];	
};
g_interaction_target setVariable ["trunk_in_use_ID", "", true];
g_interaction_target setVariable ["farm_gather", false];
