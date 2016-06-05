/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_type", "_requireTarget", "_item_require", "_enoughText", "_maxAmount", "_itemsCheck", "_receive"];
_type = [_this, 0, "", [""]] call BIS_fnc_param;
_maxAmount = [_this, 1, 0, [0]] call BIS_fnc_param;
_target = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br>Revenez plus tard"] call AlysiaClient_fnc_error;
};
if ((player getVariable ["restrained", false]) || (player getVariable ["surrender", false])) exitWith {
	["Vous ne pouvez pas traiter lorsque vous êtes menotté ou avez les mains sur la tête"] call AlysiaClient_fnc_error;
};
if (!(alive player) || (player getVariable ["is_coma", false])) exitWith {
	["Vous devez être vivant pour traiter"] call AlysiaClient_fnc_error;
};
if ((vehicle player) != player) exitWith {
	["Vous devez être à pied pour traiter"] call AlysiaClient_fnc_error;
};

_requireTarget = isClass(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "target");
if (_requireTarget && (isNull _target)) exitWith {
	["Le traitement à besoin d'émaner d'une entité"] call AlysiaClient_fnc_error;
};
if (_requireTarget && ((player distance _target) > 5)) exitWith {
	["Vous êtes trop loin pour débuter le traitement"] call AlysiaClient_fnc_error;
};

_item_require = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "require");
_enoughText = "";
{
	private "_varAmount";
	_varAmount = [(_x select 0)] call AlysiaClient_fnc_itemCount;
	if (floor(_varAmount / (_x select 1)) < _maxAmount) then {
		_enoughText = _enoughText + format["%1x %2<br/>", (((_x select 1) * _maxAmount) - (_varAmount * _maxAmount)), ([(_x select 0)] call AlysiaClient_fnc_itemGetName)];
	};
} forEach _item_require;
if (_enoughText != "") exitWith {
	[format["Vous n'avez pas tous les élements requis<br/><br/>Vous avez besoin de<br/>%1<br/>en plus pour commencer à traiter</t>", _enoughText]] call AlysiaClient_fnc_error;
};

if (_requireTarget) then
{
	_smoke = getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "target" >> "smoke_type");
	if (_smoke != "") then {createVehicle [_smoke, (getPos _target), [], 0, "CAN_COLLIDE"]};
};

if (!([
	getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "name"),
	(getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "time_per_item") * _maxAmount) + getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "time_default"),
	_target,
	getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "sound")
] call AlysiaClient_fnc_showProgress)) exitWith {};

_itemsCheck = true;
{
	if (!([false, (_x select 0), ((_x select 1) * _maxAmount)] call AlysiaClient_fnc_handleInv)) exitWith {
		_itemsCheck = false;
	};
} forEach _item_require;
if (!_itemsCheck) exitWith {
	["Vous devez garder les matériaux sur vous pendant toute la durée du traitement"] call AlysiaClient_fnc_error;
};

_receive = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "receive");

{
	[true, (_x select 0), ((_x select 1) * _maxAmount)] call AlysiaClient_fnc_handleInv;
} forEach (_receive select 0);

{
	for "_i" from 1 to _maxAmount do
	{
		[_x, true, true] call AlysiaClient_fnc_handleItem;
	};
} forEach (_receive select 1);

if ((_receive select 2) > 0) then {
	[true, ((_receive select 2) * _maxAmount)] call AlysiaClient_fnc_handleCash;
};

["Traitement <t color='#3ADF00'>terminé</t>"] call AlysiaClient_fnc_info;
