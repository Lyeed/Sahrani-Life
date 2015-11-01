/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_display"];
disableSerialization;

if (!params [
	["_list", controlNull, [controlNull]],
	["_sel", -1, [-1]]
]) exitWith {};

if ((isNull _list) || (_sel isEqualTo -1)) exitWith {};

_display = findDisplay 3100;
if (isNull _display) exitWith {};

_type = _list lbData _sel;
if (_type isEqualTo "") exitWith {};

g_shop_clothing_active = true;
switch (g_shop_clothing_oldSelection) do
{
	case "headgear":
	{
		removeHeadgear player;
		if (g_shop_clothing_head != "") then {
			player addHeadgear g_shop_clothing_head;
		};
	};
	case "goggles":
	{
		removeGoggles player;
		if (g_shop_clothing_goggles != "") then {
			player addGoggles g_shop_clothing_goggles;
		};
	};
	case "backpacks":
	{
		removeBackpack player;
		if (g_shop_clothing_backpack != "") then {
			player addBackpack g_shop_clothing_backpack;
		};
	};
	case "uniforms":
	{
		removeUniform player;
		if (g_shop_clothing_uniform != "") then {
			player forceAddUniform g_shop_clothing_uniform;
		};
	};
	case "vests":
	{
		removeVest player;
		if (g_shop_clothing_vest != "") then {
			player addVest g_shop_clothing_vest;
		};
	};
};

switch (_type) do
{
	case "headgear":
	{
		g_shop_clothing_oldItem = headgear player;
		g_shop_camera camSetTarget (player modelToWorld [0, 0, 1.6]);
		g_shop_camera camSetPos (player modelToWorld [0.7, 1, 1.6]);
		g_shop_camera camCommit 1;
	};
	case "goggles":
	{
		g_shop_clothing_oldItem = headgear player;
		g_shop_camera camSetTarget (player modelToWorld [0, 0, 1.6]);
		g_shop_camera camSetPos (player modelToWorld [0.7, 1, 1.6]);
		g_shop_camera camCommit 1;
	};
	case "backpacks":
	{
		g_shop_clothing_oldItem = backpack player;
		g_shop_camera camSetTarget (player modelToWorld [0, -0.15, 1.3]);
		g_shop_camera camSetPos (player modelToWorld [1, -4, 2]);
		g_shop_camera camCommit 1;
	};
	case "uniforms":
	{
		g_shop_clothing_oldItem = uniform player;
		g_shop_camera camSetTarget (player modelToWorld [0, 0, 1]);
		g_shop_camera camSetPos (player modelToWorld [1, 4, 2]);
		g_shop_camera camCommit 1;
	};
	case "vests":
	{
		g_shop_clothing_oldItem = vest player;
		g_shop_camera camSetTarget (player modelToWorld [0, 0, 1]);
		g_shop_camera camSetPos (player modelToWorld [1, 4, 2]);
		g_shop_camera camCommit 1;
	};
};

g_shop_clothing_oldSelection = _type;
_list = _display displayCtrl 3103;
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

		diag_log format["CLOTHING : %1 - %3:%2", _x, _details select 4, typeName(_details select 4)];
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
} forEach (getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> g_shop_clothing_type >> _type));
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Vide";
	ctrlShow[3108, false];
	ctrlShow[3109, false];
	ctrlShow[3110, false];
	ctrlShow[3111, false];
	ctrlShow[3112, false];
} else {
	_list lbSetCurSel 0;	
	ctrlShow[3108, true];
	ctrlShow[3109, true];
	ctrlShow[3110, true];
	ctrlShow[3111, true];
	ctrlShow[3112, true];
};

g_shop_clothing_active = false;