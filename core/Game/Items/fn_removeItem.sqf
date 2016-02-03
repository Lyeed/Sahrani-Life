/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {false};

if (player getVariable ["is_coma", false]) exitWith {
	["Vous ne pouvez pas utiliser d'objet dans le coma"] call AlysiaClient_fnc_error; 
};

if (g_action_inUse) exitWith {
	["Vous ne pouvez pas utiliser d'objet pour le moment"] call AlysiaClient_fnc_error;
};

if ((vehicle player) != player) exitWith {
	["Action impossible en véhicule"] call AlysiaClient_fnc_error;
};

if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable")) isEqualTo 0) exitWith {
	["Vous ne pouvez pas supprimer cet objet"] call AlysiaClient_fnc_error;
};

if (!([false, _item, 1] call AlysiaClient_fnc_handleInv)) exitWith {
	["Vous n'en avez pas autant"] call AlysiaClient_fnc_error;
};

// _object = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _data >> "drop");
// if ((count(nearestObjects [player, [_object], 30])) < 10) then
// {
// 	_pos = player modelToWorld[0, 3, 0];
// 	_obj = _object createVehicle _pos;
// 	_obj setPosATL[_pos select 0, _pos select 1, 0];
// 	_obj setVariable["item", [_data, _value], true];
// };
