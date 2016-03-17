/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_side", "_display"];
_type = [_this, 3, "", [""]] call BIS_fnc_param;

if (_type isEqualTo "") exitWith {};
if (!isClass(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type)) exitWith 
{
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _type]] call AlysiaClient_fnc_error;
	diag_log format["[ALYSIA:ERROR] Virtual shop %1 not defined in ALYSIA_SHOPS_VIRTUAL (class not found)", _type];
};

_side = getText(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "side");
if ((_side != "") && (str(playerSide) != _side)) exitWith {
	[format[
		"Votre faction <t color='#04B404'>%1</t> n'est pas autorisé à acheter ici.<br/>Ce magasin <t color='#2EFE9A'>%2</t> est <t color='#FF0000'>réservé</t>.",
		([playerSide] call AlysiaClient_fnc_sideToStr),
		getText(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "name")
	]] call AlysiaClient_fnc_error;
};

if (!(createDialog "RscDisplayShopVirtual")) exitWith {};

disableSerialization;
_display = findDisplay 2400;
if (isNull _display) exitWith {};

(_display displayCtrl 2401) ctrlSetStructuredText parseText format["<t align='center' size='1.3'>%1</t>", (getText(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "name"))];

g_shop_list = getArray(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "items");
g_shop_tmp_buy = [];
g_shop_tmp_sell = [];
g_shop_active = false;
g_shop_weight_actual = g_carryWeight;

[] call AlysiaClient_fnc_shop_virtual_update;

waitUntil {isNull _display};

{
	[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
} forEach g_shop_tmp_sell;
