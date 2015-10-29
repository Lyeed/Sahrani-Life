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
	[format["Impossible de trouver les informations concernant le magasin<br/><t align='center' color='#FF8000'>%1</t>", _type]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Virtual shop %1 not defined in ALYSIA_SHOPS_VIRTUAL (class not found)", _type];
};

_side = call compile format["%1", getText(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "side")];
if ((_side != sideUnknown) && {(_side != playerSide)}) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404' align='center'>%1</t><br/>n'est pas autorisé à acheter ici<br/><br/>Ce magasin<br/><t align='center' color='#2EFE9A'>%2</t><br/>est <t color='#FF0000'>réservé</t> à <br/><t align='center' color='#0080FF'>%3</t>",
		([playerSide] call public_fnc_sideToStr),
		(getText(missionConfigFile >> "ALYSIA_SHOPS_VIRTUAL" >> _type >> "name")),
		([_side] call public_fnc_sideToStr)
	]] call public_fnc_error;
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

[] call public_fnc_shop_virtual_update;

waitUntil {isNull _display};

{
	[true, (_x select 0), (_x select 1)] call public_fnc_handleInv;
} forEach (g_shop_tmp_sell);