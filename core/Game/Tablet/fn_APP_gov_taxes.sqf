/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_info", "_list"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_info = switch (true) do
{
	case (["gov_money"] call AlysiaClient_fnc_hasLicense):
	{
		[
			[gServer_tax_north_companies_employee_multiplier, gServer_tax_north_companies_building_multiplier, gServer_tax_north_salary_multiplier, gServer_tax_north_house_multiplier],
			["gServer_tax_north_companies_employee_multiplier", "gServer_tax_north_companies_building_multiplier", "gServer_tax_north_salary_multiplier", "gServer_tax_north_house_multiplier"],
			["Taxe salariale", "Taxe foncière", "Cotisation salariale", "Taxe d'habitation"]
		]
	};
	case (["central_com"] call AlysiaClient_fnc_hasLicense):
	{
		[
			[gServer_tax_south_companies_employee_multiplier, gServer_tax_south_companies_building_multiplier, gServer_tax_south_salary_multiplier, gServer_tax_south_house_multiplier],
			["gServer_tax_south_companies_employee_multiplier", "gServer_tax_south_companies_building_multiplier", "gServer_tax_south_salary_multiplier", "gServer_tax_south_house_multiplier"],
			["Taxe salariale", "Taxe foncière", "Cotisation salariale", "Taxe d'habitation"]
		]
	};
	case (["central_com_gen"] call AlysiaClient_fnc_hasLicense):
	{
		[
			[gServer_tax_south_companies_employee_multiplier, gServer_tax_south_companies_building_multiplier, gServer_tax_south_salary_multiplier, gServer_tax_south_house_multiplier],
			["gServer_tax_south_companies_employee_multiplier", "gServer_tax_south_companies_building_multiplier", "gServer_tax_south_salary_multiplier", "gServer_tax_south_house_multiplier"],
			["Taxe salariale", "Taxe foncière", "Cotisation salariale", "Taxe d'habitation"]
		]
	};
};

if (isNil "_info") exitWith {closeDialog 0};

_list = _display displayCtrl 9801;
lbClear _list;

{
	_index = _list lbAdd ((_info select 2) select _forEachIndex);
	_list lbSetValue [_index, (_x * 100)];
	_list lbSetData [_index, ((_info select 1) select _forEachIndex)];
} forEach (_info select 0);

if ((lbCurSel _list) isEqualTo -1) then {
	_list lbSetCurSel 0;
} else {
	_list lbSetCurSel (lbCurSel _list);
};
