/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vendor", "_type", "_item_require", "_item_receive", "_maxAmount", "_enoughText", "_receiveText", "_processLicense", "_type_process_1", "_type_process_2", "_newItemWeight", "_oldItemWeight", "_requireTarget", "_process_item_time", "_process_default_time", "_process_name", "_sound"];
_vendor = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_type_process_1 = [_this, 1, "", [""]] call BIS_fnc_param;
_type_process_2 = [_this, 3, "", [""]] call BIS_fnc_param;
_type = switch (true) do
{
	case (_type_process_1 != ""): {_type_process_1};
	case (_type_process_2 != ""): {_type_process_2};
	default {""};
};

if (life_action_inUse || life_is_processing) exitWith { 
	["<t align='center'>Vous avez l'air occupé<br>Revenez plus tard</t>"] call ALYSIA_fnc_error; 
};

if ((player getVariable["restrained", false]) || (player getVariable["surrender", false])) exitWith {};
if (!(alive player) || life_coma) exitWith { ["Vous devez être vivant pour traiter"] call ALYSIA_fnc_error; };
if ((vehicle player) != player) exitWith { ["Vous devez être à pied pour traiter"] call ALYSIA_fnc_error; };

if (!isClass(missionConfigFile >> "ALYSIA_PROCESS" >> _type)) exitWith { 
	diag_log format["[ALYSIA:ERROR] Can't fetch info about process type [%1]", _type]; 
};

_process_name = getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "name");
_processLicense = getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "license");
_sound = getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "sound");
_item_require = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "require");
_item_receive = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "receive");
_requireTarget = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "requiere_target");
_process_item_time = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "process_item_time");
_process_default_time = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "process_default_time");

_passed = false;
if (_requireTarget == 1) then {
	if (isNull _vendor) exitWith {};
	if ((player distance _vendor) > 5) exitWith { ["Vous êtes trop loin pour débuter le traitement"] call ALYSIA_fnc_error; };
	if ((_vendor getVariable["sabotage", false]) && ((_vendor getVariable["sabotageTime", 0]) > (time - (60 * 20)))) exitWith {
		["Ce laboratoire a récemment été saboté et ne peut pas être utilisé de suite"] call ALYSIA_fnc_error; 
	};
	_passed = true;
};
if (!_passed) exitWith {};

if ((_processLicense != "") && !(missionNamespace getVariable[_processLicense, false])) exitWith { 
	[format["Vous n'avez pas la license requise<br/>Vous avez besoin de<br/><t align='center'>%1</t>", [_processLicense] call life_fnc_varToStr]] call ALYSIA_fnc_error; 
};
if (dialog) then { closeDialog 0; };

_enoughText = "";
_oldItemWeight = 0;
{
	private["_varMaxAmount", "_varAmount"];
	_varAmount = missionNamespace getVariable ([(_x select 0), 0] call life_fnc_varHandle);
	_varMaxAmount = floor(_varAmount / (_x select 1));
	if (isNil "_maxAmount") then { _maxAmount = _varMaxAmount; };
	if (_varMaxAmount < _maxAmount) then { _maxAmount = _varMaxAmount; };
	if (_varAmount < (_x select 1)) then 
	{
		_enoughText = _enoughText + format["%1x %2<br/>", ((_x select 1) - _varAmount), [[(_x select 0), 0] call life_fnc_varHandle] call life_fnc_varToStr];
	};
	_oldItemWeight = _oldItemWeight + (([(_x select 0)] call life_fnc_itemWeight) * (_x select 1));
} forEach (_item_require);
if (_enoughText != "") exitWith { [format["Vous n'avez pas tous les élements requis<br/><br/>Vous avez besoin de<br/><t align='center'>%1<br/>pour commencer à traiter</t>", _enoughText]] call ALYSIA_fnc_error; };

_newItemWeight = 0;
{
	_newItemWeight = _newItemWeight + (([(_x select 0)] call life_fnc_itemWeight) * (_x select 1));
} forEach (_item_receive);

if ((life_carryWeight - (_oldItemWeight * _maxAmount) + (_newItemWeight * _maxAmount)) > life_maxWeight) exitWith {
	[(format["Vous n'aurez pas assez de place pour transporter les matériaux issues du traitement (%1/%2).", [_tmpWeight] call life_fnc_numberText, [life_maxWeight] call life_fnc_numberText])] call ALYSIA_fnc_info;
};

life_is_processing = true;
if (_type == "meth") then { "SmokeShellGreen" createVehicle (getPos _vendor); };
if (!([_process_name, ((_process_item_time * _maxAmount) + _process_default_time), false, _sound, true, _vendor] call ALYSIA_fnc_showProgress)) exitWith { 
	life_is_processing = false;
};
life_is_processing = false;

{
	if (!([false, (_x select 0), ((_x select 1) * _maxAmount)] call life_fnc_handleInv)) exitWith { _itemsCheck = false; };
} forEach (_item_require);
if (!(isNil "_itemsCheck")) exitWith { ["Vous devez garder les matériaux sur vous pendant toute la durée du traitement"] call ALYSIA_fnc_error; };

_receiveText = "<t align='center'>Vous avez reçu<br/><br/>";
{
	_receiveText = _receiveText + format["%1x %2<br/>", ((_x select 1) * _maxAmount), [[(_x select 0), 0] call life_fnc_varHandle] call life_fnc_varToStr];
	[true, (_x select 0), ((_x select 1) * _maxAmount)] call life_fnc_handleInv;
} forEach (_item_receive);
[_receiveText] call ALYSIA_fnc_info;

if (_type in ["heroin", "cocaine", "meth"]) then 
{
	if (count(_vendor getVariable["info", []]) > 0) then
	{
		private["_users"];
		_users = _vendor getVariable["users", []];
		if (!((name player) in _users)) then
		{
			_users pushBack (name player);
			_vendor setVariable["users", _users, true];
		};
	};
};
