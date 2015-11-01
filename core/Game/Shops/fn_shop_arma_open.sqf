/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_side", "_display", "_list"];
_type = [_this, 3, "", [""]] call BIS_fnc_param;

if (_type isEqualTo "") exitWith {};
if (!isClass(missionConfigFile >> "ALYSIA_SHOPS_ARMA" >> _type)) exitWith 
{
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _type]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Weapon shop %1 not defined in ALYSIA_SHOPS_ARMA (class not found)", _type];
};

_side = call compile format["%1", (getText(missionConfigFile >> "ALYSIA_SHOPS_ARMA" >> _type >> "side"))];
if ((_side != sideUnknown) && {(playerSide != _side)}) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404' align='center'>%1</t><br/>n'est pas autorisé à acheter ici<br/><br/>Ce magasin<br/><t align='center' color='#2EFE9A'>%2</t><br/>est <t color='#FF0000'>réservé</t> à <br/><t align='center' color='#0080FF'>%3</t>",
		([playerSide] call public_fnc_sideToStr),
		(getText(missionConfigFile >> "ALYSIA_SHOPS_ARMA" >> _type >> "name")),
		([_side] call public_fnc_sideToStr)
	]] call public_fnc_error;
};

if (!(createDialog "RscDisplayShopArma")) exitWith {};

disableSerialization;
_display = findDisplay 38400;
if (isNull _display) exitWith {};

(_display displayCtrl 38401) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", (getText(missionConfigFile >> "ALYSIA_SHOPS_ARMA" >> _type >> "name"))];

_list = _display displayCtrl 38402;
lbClear _list;

{
	if (isClass(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _x)) then
	{
		_passed = false;
		if (playerSide isEqualTo civilian) then {
			_license = getText(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _x >> "buy_condition_CIV");
			if ((_license isEqualTo "") || (missionNamespace getVariable [format["license_%1", _license], false])) then {
				_passed = true;
			};
		} else {
			_rank = getNumber(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _x >> format["buy_condition_%1", str(playerSide)]);
			if (((player getVariable ["rank", 0]) >= _rank) && (_rank != -1)) then {
				_passed = true;
			};
		};

		if (_passed) then
		{
			_details = [_x] call public_fnc_fetchCfgDetails;
			_displayName = getText(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _x >> "name");
			_price = getNumber(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _x >> "buy_price");
			if (_displayName isEqualTo "") then {
				_displayName = _details select 1;
			};
			_index = _list lbAdd format["%1 (%2$)", _displayName, ([_price] call public_fnc_numberText)];
			_list lbSetData [_index, _x];
			_list lbSetValue [_index, _price];
			_list lbSetPicture [_index, (_details select 2)];
		};
	} else {
		diag_log format["ERROR: %1 not defined in ALYSIA_ITEMS_ARMA", _x];
	};
} forEach (getArray(missionConfigFile >> "ALYSIA_SHOPS_ARMA" >> _type >> "stocks"));
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Vous n'avez rien à acheter ici";
	ctrlShow[38403, false];
	ctrlShow[38404, false];
	ctrlShow[38405, false];
	ctrlShow[38406, false];
	ctrlShow[38407, false];
	ctrlShow[38421, false];
	ctrlShow[38408, false];
	ctrlShow[38409, false];
	ctrlShow[38422, false];
	ctrlShow[38410, false];
	ctrlShow[38411, false];
	ctrlShow[38412, false];
	ctrlShow[38413, false];
	ctrlShow[38414, false];
	ctrlShow[38415, false];
	ctrlShow[38416, false];
} else {
	_list lbSetCurSel 0;
};