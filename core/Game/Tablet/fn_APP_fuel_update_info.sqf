/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_fuel", "_station", "_data"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};
if ((_list lbText _sel) isEqualTo "Aucune") exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_fuel = _list lbData _sel;
if (_fuel isEqualTo "") exitWith {};

_data = call compile lbData[9400, lbCurSel 9400];
_station = (nearestObjects [_data select 1, [_data select 0], 15]) select 0;

(_display displayCtrl 9411) ctrlSetStructuredText parseText format
[
		"<t font='EtelkaMonospacePro' size='1'>"
	+	"<t align='center'>- Informations -</t><br/>"
	+	"<t align='left'>Prix/L</t><t align='right'><t color='#8cff9b'>%1</t>kn</t><br/>"
	+	"<t align='left'>Disponibilité</t><t align='right'>%2L</t>"
	+	"</t>",
	[([_station, _fuel] call public_fnc_fuelStation_price_buy)] call public_fnc_numberText,
	((_station getVariable [_fuel, 250]) / 250)
];
