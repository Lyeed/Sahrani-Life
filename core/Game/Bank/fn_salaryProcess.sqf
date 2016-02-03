/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price_add", "_price_remove", "_add_to_north", "_add_to_south"];

_price_add = 0;
_price_remove = 0;

_add_to_north = 0;
_add_to_south = 0;

// Salaire
if (!(player getVariable ["arrested", false])) then
{
	private["_salary", "_taxe", "_price"];
	_salary = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary");
	if (_salary > 0) then
	{
		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_apply_rank") isEqualTo 1) then {
			_salary = _salary * (player getVariable ["rank", 0]);
		};
		
		[true, _salary, "Salaire"] call AlysiaClient_fnc_handleATM;
		_price_add = _price_add + _salary;

		_taxe = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_tax");
		if (_taxe > 0) then
		{
			_price = _salary * _taxe;
			[false, _price, "Cotisation salariale"] call AlysiaClient_fnc_handleATM;
			_price_remove = _price_remove - _price;
			switch (g_choice) do
			{
				case "NORTH": {_add_to_north = _add_to_north + _price;};
				case "SOUTH": {_add_to_south = _add_to_south + _price;};
			};
		};
	};
};

// Taxes entreprise
if (!(isNull g_company)) then
{
	private["_info", "_price", "_price_employees", "_price_building"];
	_info = g_company getVariable ["company_info", []];
	if ((_info select 1) isEqualTo (getPlayerUID player)) then
	{
		_price_employees = getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "tax" >> "price_per_employee");
		if (_price_employees > 0) then
		{
			_price = (count(g_company getVariable ["company_members", []]) - 1) * _price_employees;
			if (!([false, _price, "Taxe salariale"] call AlysiaClient_fnc_handleATM)) then {
				["Vous n'avez pas assez d'argent pour payer votre taxe salariale. Régulez votre situation dans les plus brefs délais ou des huissiers passeront !", "BANQUE"] call AlysiaClient_fnc_phone_message_receive;
			};
			_price_remove = _price_remove - _price;
		};

		_price_building = getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "tax" >> "price_building");
		if (_price_building > 0) then
		{
			[false, _price, "Taxe foncière"] call AlysiaClient_fnc_handleATM;
			_price_remove = _price_remove - _price_building;
		};
	};
};

// Taxe habitation
if (count(g_houses) > 0) then
{
	private["_percentage", "_price"];
	_percentage = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "house_tax_percentage_buyPrice_per_house");
	if (_percentage > 0) then
	{
		_price = 0;

		{
			_price = _price + (getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_x) >> "price") * _percentage);
		} forEach g_houses;

		if (_price > 0) then
		{
			if (!([false, _price, "Taxe d'habitation"] call AlysiaClient_fnc_handleATM)) then {
				["Vous n'avez pas assez d'argent pour payer votre taxe d'habitation. Régulez votre situation dans les plus brefs délais ou des huissiers passeront !", "BANQUE"] call AlysiaClient_fnc_phone_message_receive;
			};
			_price_remove = _price_remove - _price;
		};
	};
};

// Forfait
if (g_phone_forfait != "none") then
{
	private["_price"];
	_price = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "bill");
	if (_price > 0) then
	{
		if (!([false, _price, "Forfait téléphonique"] call AlysiaClient_fnc_handleATM)) then
		{
			["Vous n'avez plus assez d'argent dans votre compte en banque pour payer votre forfait téléphonique.<br/>Vous avez été rétrogradé au forfait lite.", "FORFAIT"] call AlysiaClient_fnc_phone_message_receive;
			["lite"] call AlysiaClient_fnc_phone_forfait_change;
		};
		_price_remove = _price_remove - _price;
	};
};

if (_add_to_north > 0) then {
	[civilian, true, _add_to_north] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
};

if (_add_to_south > 0) then {
	[east, true, _add_to_south] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
};

[
	format
	[
			"Vous avez reçu votre salaire et vos factures<br/>"
		+	"+ <t color='#8cff9b'>%1</t>kn<br/>"
		+	"- <t color='#ff8c8c'>%2</t>kn<br/>"
		+	"Pour plus d'informations rendez-vous dans l'application <t color='#00FF80'>solde</t> de votre tablette",
		([_price_add] call AlysiaClient_fnc_numberText),
		([_price_remove] call AlysiaClient_fnc_numberText)
	],
	"BANQUE"
] call AlysiaClient_fnc_phone_message_receive;
