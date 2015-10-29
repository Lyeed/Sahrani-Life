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
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _shop]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Vehicle shop %1 not defined in ALYSIA_SHOPS_VEHICLES (class not found)", _shop];
};

_side = call compile format["%1", getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "side")];
if ((_side != sideUnknown) && {(_side != playerSide)}) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404' align='center'>%1</t><br/>n'est pas autorisé à acheter ici<br/><br/>Ce magasin<br/><t align='center' color='#2EFE9A'>%2</t><br/>est <t color='#FF0000'>réservé</t> à <br/><t align='center' color='#0080FF'>%3</t>",
		([playerSide] call public_fnc_sideToStr),
		(getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "name")),
		([_side] call public_fnc_sideToStr)
	]] call public_fnc_error;
};

if (!(createDialog "RscDisplayShopVehicles")) exitWith {};

disableSerialization;
_display = findDisplay 2300;
if (isNull _display) exitWith {};

g_veh_shop = _spawnPoints;
(_display displayCtrl 2301) ctrlSetStructuredText parseText format["<t align='center' size='1.3'>%1</t>", (getText(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "name"))];

_list = _display displayCtrl 2302;
lbClear _list;

{
	if (
		((playerSide isEqualTo civilian) && ((getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "license") isEqualTo "") || {(missionNamespace getVariable[format["license_%1", getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "license")], false])})) || 
		((playerSide != civilian) && ((player getVariable ["rank", 0]) >= getNumber(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "rank")))) then {
		_index = _list lbAdd getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "realname");
		
		_vList = getArray(missionConfigFile >> "ALYSIA_VEHICLES" >> _x >> "colors");
		if (_vList isEqualTo []) then {
			_list lbSetPicture [_index, (getText(configFile >> "CfgVehicles" >> _x >> "picture"))];
			_list lbSetData [_index, str([_x])];
		} else {
			_list lbSetPicture [_index, (getText(configFile >> "CfgVehicles" >> (_vList select 0) >> "picture"))];
			_list lbSetData [_index, str(_vList)];
		};
	};
} forEach (getArray(missionConfigFile >> "ALYSIA_SHOPS_VEHICLES" >> _shop >> "stock"));
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vous n'avez rien à acheter ici";
	ctrlShow[2304, false];
	ctrlShow[2305, false];
	ctrlShow[2306, false];
	ctrlShow[2307, false];
	ctrlShow[2308, false];
	ctrlShow[2309, false];
	ctrlShow[2310, false];
	ctrlShow[2311, false];
	ctrlShow[2312, false];
	ctrlShow[2313, false];
	ctrlShow[2314, false];
	ctrlShow[2315, false];
	ctrlShow[2321, false];
	ctrlShow[2303, false];
} else {
	_list lbSetCurSel 0;
};