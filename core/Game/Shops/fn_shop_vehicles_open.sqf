/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_shop", "_spawnPoints", "_side", "_display", "_list"];
_shop = [(_this select 3), 0, "", [""]] call BIS_fnc_param;
_spawnPoints = [(_this select 3), 1, [], [[]]] call BIS_fnc_param;

if ((_shop isEqualTo "") || (_spawnPoints isEqualTo [])) exitWith {};
if (!isClass(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop)) exitWith
{
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _shop]] call AlysiaClient_fnc_error;
	diag_log format["[ALYSIA:ERROR] Vehicle shop %1 not defined in ALYSIA_SHOPS_VEHICLES (class not found)", _shop];
};

_side = getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "side");
if ((_side != "") && (str(playerSide) != _side)) exitWith {
	[format[
		"Votre faction <t color='#04B404'>%1</t> n'est pas autorisé à acheter ici.<br/>Ce magasin <t color='#2EFE9A'>%2</t> est <t color='#FF0000'>réservé</t>.",
		([playerSide] call AlysiaClient_fnc_sideToStr),
		getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "name")
	]] call AlysiaClient_fnc_error;
};

if (!(createDialog "RscDisplayShopVehicles")) exitWith {};

disableSerialization;
_display = findDisplay 2300;
if (isNull _display) exitWith {};

g_veh_shop = _spawnPoints;
(_display displayCtrl 2301) ctrlSetStructuredText parseText format["<t align='center' size='1.5'>%1</t>", getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "name")];

_list = _display displayCtrl 2302;
lbClear _list;

{
	if (isClass(missionConfigFile >> "ALYSIA_VEHICLES" >> _x)) then
	{
		if (getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "side") isEqualTo str(playerSide)) then
		{
			_index = _list lbAdd getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "realname");
			_vList = getArray(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "colors");
			if (_vList isEqualTo []) then {
				_list lbSetPicture [_index, (getText(configFile >> "CfgVehicles" >> _x >> "picture"))];
				_list lbSetData [_index, str([_x])];
				_list lbSetValue [_index, ([_x] call AlysiaClient_fnc_getVehBuyPrice)];
			} else {
				_list lbSetPicture [_index, (getText(configFile >> "CfgVehicles" >> (_vList select 0) >> "picture"))];
				_list lbSetData [_index, str(_vList)];
				_list lbSetValue [_index, ([(_vList select 0)] call AlysiaClient_fnc_getVehBuyPrice)];
			};
			_list lbSetTooltip [_index, (_list lbText _index)];
		} else {
			diag_log format["ERROR: %1 is not supposed to be in this shop. Vehicle side != Shop side", _x];
			systemChat format["ERROR: %1 is not supposed to be in this shop. Vehicle side != Shop side", _x];
		};
	} else {
		diag_log format["ERROR: %1 not defined in ALYSIA_VEHICLES", _x];
		systemChat format["ERROR: %1 not defined in ALYSIA_VEHICLES", _x];
	};
} forEach getArray(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "stock");

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vous n'avez rien à acheter ici";
} else {
	lbSortByValue _list;
};

_list lbSetCurSel 0;
