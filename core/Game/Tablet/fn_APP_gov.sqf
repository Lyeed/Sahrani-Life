/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_info"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_info = switch (true) do
{
	case (("gov_company"] call AlysiaClient_fnc_hasLicense):
	{
		[
			["gov_company"] call AlysiaClient_fnc_licenseGetName,
			"<t align='left' size='2' font='PuristaMedium'>Nouvelle République de Sibranak</t>",
			"lyeed_IMG\data\faction\CIV_logo.paa",
			[gServer_tax_north_companies_employee_multiplier, gServer_tax_north_companies_building_multiplier, gServer_tax_north_salary_multiplier, gServer_tax_north_house_multiplier]
		]

	};
	case (["gov_money"] call AlysiaClient_fnc_hasLicense):
	{
		[
			["gov_money"] call AlysiaClient_fnc_licenseGetName,
			"<t align='left' size='2' font='PuristaMedium'>Nouvelle République de Sibranak</t>",
			"lyeed_IMG\data\faction\CIV_logo.paa",
			[gServer_tax_north_companies_employee_multiplier, gServer_tax_north_companies_building_multiplier, gServer_tax_north_salary_multiplier, gServer_tax_north_house_multiplier]
		]
	};
	case (["gov_justice"] call AlysiaClient_fnc_hasLicense):
	{
		[
			["gov_justice"] call AlysiaClient_fnc_licenseGetName,
			"<t align='left' size='2' font='PuristaMedium'>Nouvelle République de Sibranak</t>",
			"lyeed_IMG\data\faction\CIV_logo.paa",
			[gServer_tax_north_companies_employee_multiplier, gServer_tax_north_companies_building_multiplier, gServer_tax_north_salary_multiplier, gServer_tax_north_house_multiplier]
		]
	};
	case (["central_com"] call AlysiaClient_fnc_hasLicense):
	{
		[
			["central_com"] call AlysiaClient_fnc_licenseGetName,
			"<t align='left' size='2' font='PuristaMedium'>République Populaire de Sibranak</t>",
			"lyeed_IMG\data\faction\EAST_logo.paa",
			[gServer_tax_south_companies_employee_multiplier, gServer_tax_south_companies_building_multiplier, gServer_tax_south_salary_multiplier, gServer_tax_south_house_multiplier]
		]
	};
};

if (isNil "_info") exitWith {closeDialog 0};

(_display displayCtrl 9700) ctrlSetText (_info select 2);

(_display displayCtrl 9701) ctrlSetStructuredText parseText (_info select 1);

(_display displayCtrl 9702) ctrlSetStructuredText parseText format
[
		"<t align='left' font='PuristaMedium'>Vous êtes <t color='#74DF00'>%1</t></t>.<br/>"
	+	"Votre gouvernement possède <t color='#8cff9b'>%2</t>kn dans son compte en banque.<br/><br/>"
	+	"Information sur les <t color='#190707'>taxes</t><br/>"
	+	"Cotisation salariale : <t color='#FF8000'>%4</t>%3<br/>"
	+	"Taxe salariale : <t color='#FF8000'>%5</t>%3<br/>"
	+	"Taxe foncière : <t color='#FF8000'>%6</t>%3<br/>"
	+	"Taxe d'habitation : <t color='#FF8000'>%7</t>%3<br/>",
	(_info select 0),
	[[playerSide] call AlysiaClient_fnc_atmFactionget] call AlysiaClient_fnc_numberText,
	"%",
	((_info select 3) select 2) * 100,
	((_info select 3) select 0) * 100,
	((_info select 3) select 1) * 100,
	((_info select 3) select 3) * 100
];
