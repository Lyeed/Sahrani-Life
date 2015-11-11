/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_vehicleList", "_className", "_price", "_trunkSpace", "_vehicleInfo", "_ctrl", "_data"];

disableSerialization;
if (!params [
	["_list", controlNull, [controlNull]],
	["_sel", -1, [-1]]
]) exitWith {};

if (_sel isEqualTo -1) exitWith {};

_data = _list lbData _sel;
if (_data isEqualTo "") exitWith {};

_display = findDisplay 2300;
if (isNull _display) exitWith {};

_vehicleList = call compile format["%1", _data];
_className = _vehicleList select 0;

_price = [_className] call public_fnc_getVehBuyPrice;
(_display displayCtrl 2310) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>$</t>",
	([_price] call public_fnc_numberText),
	if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if (g_cash < _price) then
{
	ctrlShow[2311, false];
	ctrlShow[2312, false];
	ctrlShow[2313, false];
	ctrlShow[2314, false];
	ctrlShow[2315, false];
} else {
	ctrlShow[2311, true];
	ctrlShow[2312, true];
	ctrlShow[2313, true];
	ctrlShow[2314, true];
	ctrlShow[2315, true];
};

_trunkSpace = [_className] call public_fnc_getVehVirtual;
_vehicleInfo = [_className] call public_fnc_fetchVehInfo;
(_display displayCtrl 2308) ctrlSetStructuredText parseText format
[
		"<t align='left'>Prix de garage</t><t align='right' color='#8cff9b'>%1$</t><br/>"
	+ 	"<t align='left'>Prix de l'assurance</t><t align='right' color='#8cff9b'>%2$</t><br/>"
	+ 	"<t align='left'>Prix de vente</t><t align='right' color='#8cff9b'>%9$</t><br/>"
	+ 	"<t align='left'>Vitesse max</t><t align='right'>%3 km/h</t><br/>"
	+ 	"<t align='left'>Puissance en chevaux</t><t align='right'>%4</t><br/>"
	+	"<t align='left'>Sièges passagers</t><t align='right'>%5</t><br/>"
	+	"<t align='left'>Capacité du coffre</t><t align='right'>%6</t><br/>"
	+	"<t align='left'>Autonomie</t><t align='right'>%7</t><br/>"
	+	"<t align='left'>Solidité</t><t align='right'>%8</t>",
	[[_className] call public_fnc_getVehGaragePrice] call public_fnc_numberText,
	[[_className] call public_fnc_getVehAssurancePrice] call public_fnc_numberText,
	(_vehicleInfo select 8),
	(_vehicleInfo select 11),
	(_vehicleInfo select 10),
	if (_trunkSpace isEqualTo 0) then {"Aucun"} else {_trunkSpace},
	(_vehicleInfo select 12),
	(_vehicleInfo select 9),
	[[_className] call public_fnc_getVehSellPrice] call public_fnc_numberText
];

_ctrl = _display displayCtrl 2303;
lbClear _ctrl;
{
	_index = _ctrl lbAdd getText(configFile >> "CfgVehicles" >> _x >> "displayName");
	_ctrl lbSetData [_index, _x];
	_ctrl lbSetPicture [_index, getText(configFile >> "CfgVehicles" >> _x >> "picture")];
} forEach (_vehicleList);
_ctrl lbSetCurSel 0;