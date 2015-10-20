/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_side", "_display", "_list", "_PNJ"];
_PNJ = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 3, "", [""]] call BIS_fnc_param;

if ((_type isEqualTo "") || (isNull _PNJ)) exitWith {};

if (!isClass(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type)) exitWith 
{
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _type]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Weapon shop %1 not defined in ALYSIA_SHOPS_WEAPONS (class not found)", _type];
};

_side = call compile format["%1", (getText(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type >> "side"))];
if ((_side != sideUnknown) && {(playerSide != _side)}) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404' align='center'>%1</t><br/>n'est pas autorisé à acheter ici<br/><br/>Ce magasin<br/><t align='center' color='#2EFE9A'>%2</t><br/>est <t color='#FF0000'>réservé</t> à <br/><t align='center' color='#0080FF'>%3</t>",
		([playerSide] call public_fnc_sideToStr),
		(getText(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type >> "name")),
		([_side] call public_fnc_sideToStr)
	]] call public_fnc_error;
};

if (!(createDialog "life_weapon_shop")) exitWith {};
disableSerialization;

_display = findDisplay 38400;
(_display displayCtrl 38404) ctrlSetTooltip "Acheter";
(_display displayCtrl 38401) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getText(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type >> "name"))];
(_display displayCtrl 38411) ctrlSetText (getText(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type >> "background"));

_list = _display displayCtrl 38405;
lbClear _list;

{
	private["_className", "_price", "_displayName", "_condition", "_itemInfo", "_index"];
	_className = [_x, 0, "", [""]] call BIS_fnc_param;
	_price = [[_x, 1, 0, [0]] call BIS_fnc_param] call public_fnc_getDonatorReductionPrice;
	_displayName = [_x, 2, "", [""]] call BIS_fnc_param;
	_condition = [_x, 3, "", [""]] call BIS_fnc_param;
	_itemInfo = [_className] call public_fnc_fetchCfgDetails;

	if (!(_itemInfo isEqualTo [])) then
	{
		_passed = switch (playerSide) do
		{
			case civilian:
			{
				if ((_condition isEqualTo "") || ({missionNamespace getVariable[_condition, false]})) then {
					true;
				} else {
					false;
				};
			};

			case east:
			{
				if ((_condition isEqualTo "") || ({((call g_EASTLevel) >= parseNumber(_condition))})) then {
					true;
				} else {
					false;
				};
			};

			case west:
			{
				if ((_condition isEqualTo "") || ({((call g_WESTLevel) >= parseNumber(_condition))})) then {
					true;
				} else {
					false;
				};
			};

			case independent:
			{
				if ((_condition isEqualTo "") || ({((call g_GUERLevel) >= parseNumber(_condition))})) then {
					true;
				} else {
					false;
				};
			};
		};

		if (_passed) then
		{
			if (_displayName isEqualTo "") then {
				_index = _list lbAdd (_itemInfo select 1);
			} else {
				_index = _list lbAdd _displayName;
			};
			_list lbSetData [_index, _className];
			_list lbSetValue [_index, _price];
			_list lbSetPicture [_index, (_itemInfo select 2)];
		};
	};
} forEach (getArray(missionConfigFile >> "ALYSIA_SHOPS_WEAPONS" >> _type >> "stocks"));

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vous n'avez rien à acheter ici";
};

[-1] call public_fnc_weaponShopSelection;