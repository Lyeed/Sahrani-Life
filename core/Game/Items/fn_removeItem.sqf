/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_pos"];

if (!params [
	["_item", "", [""]]
]) exitWith {false};

if (_item isEqualTo "") exitWith {false};

if (player getVariable ["is_coma", false]) exitWith
{
	["Vous ne pouvez pas utiliser d'objet dans le coma"] call public_fnc_error; 
	false;
};

if (g_action_inUse) exitWith
{
	["Vous ne pouvez pas utiliser d'objet pour le moment"] call public_fnc_error;
	false;
};

if ((vehicle player) != player) exitWith
{
	["Action impossible en véhicule"] call public_fnc_error;
	false;
};

if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable")) isEqualTo 0) exitWith
{
	["Vous ne pouvez pas supprimer cet objet"] call public_fnc_error;
	false;
};

if (!([false, _item, 1] call public_fnc_handleInv)) exitWith
{
	["Vous n'en avez pas autant"] call public_fnc_error;
	false;
};

_object = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _data >> "drop");
if ((count(nearestObjects [player, [_object], 30])) < 10) then
{
	_pos = player modelToWorld[0, 3, 0];
	_obj = _object createVehicle _pos;
	_obj setPosATL[_pos select 0, _pos select 1, 0];
	_obj setVariable["item", [_data, _value], true];
};

true;
