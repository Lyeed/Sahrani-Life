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
			switch (g_choice) do
			{
				case "NORTH":
				{
					_price = _salary * (_taxe * gServer_tax_north_salary_multiplier);
					_add_to_north = _add_to_north + _price;
				};
				case "SOUTH":
				{
					_price = _salary * (_taxe * gServer_tax_south_salary_multiplier);
					_add_to_south = _add_to_south + _price;
				};
			};

			_price_remove = _price_remove + _price;
			[false, _price, "Cotisation salariale"] call AlysiaClient_fnc_handleATM;
		};
	};
};

// Taxes entreprise
if (!(isNull g_company)) then
{
	private["_info", "_price", "_price_employees", "_price_building"];
	_info = g_company getVariable ["company_info", []];
	if (!(g_company getVariable ['construction', false])) then
	{
		if ((_info select 1) isEqualTo (getPlayerUID player)) then
		{
			_price_employees = getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "tax" >> "price_per_employee");
			if (_price_employees > 0) then
			{
				switch (_info select 5) do
				{
					case "NORTH":
					{
						_price = (count((g_company getVariable "company_members") select 0) - 1) * (_price_employees * gServer_tax_north_companies_employee_multiplier);
						_add_to_north = _add_to_north + _price;
					};
					case "SOUTH":
					{
						_price = (count((g_company getVariable "company_members") select 0) - 1) * (_price_employees * gServer_tax_south_companies_employee_multiplier);
						_add_to_south = _add_to_south + _price;
					};
				};

				_price_remove = _price_remove + _price;
				if (!([false, _price, "Taxe salariale"] call AlysiaClient_fnc_handleATM)) then
				{
					["Vous n'avez pas assez d'argent pour payer votre taxe salariale. Régularisez votre situation dans les plus brefs délais ou les autorités passeront !", "BANQUE"] call AlysiaClient_fnc_phone_message_receive;
					switch (g_choice) do
					{
						case "NORTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe salariale.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", west]};
						case "SOUTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe salariale.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", east]};
					};
				};
			};

			_price_building = getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "tax" >> "price_building");
			if (_price_building > 0) then
			{
				switch (_info select 5) do
				{
					case "NORTH":
					{
						_price_building = _price_building * gServer_tax_north_companies_building_multiplier;
						_add_to_north = _add_to_north + _price_building;
					};
					case "SOUTH":
					{
						_price_building = _price_building * gServer_tax_south_companies_building_multiplier;
						_add_to_south = _add_to_south + _price_building;
					};
				};

				_price_remove = _price_remove + _price_building;
				if (!([false, _price_building, "Taxe foncière"] call AlysiaClient_fnc_handleATM)) then
				{
					["Vous n'avez pas assez d'argent pour payer votre taxe foncière. Régularisez votre situation dans les plus brefs délais ou les autorités passeront !", "BANQUE"] call AlysiaClient_fnc_phone_message_receive;
					switch (g_choice) do
					{
						case "NORTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe foncière.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", west]};
						case "SOUTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe foncière.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", east]};
					};
				};
			};
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
		switch (g_choice) do
		{
			case "NORTH":
			{
				{
					if (((_x getVariable ["house_owner", ["", ""]]) select 0) isEqualTo (getPlayerUID player)) then
					{
						_price = _price + (getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_x) >> "price") * (_percentage * gServer_tax_north_house_multiplier));
					};
				} forEach g_houses;
				_add_to_north = _add_to_north + _price;
			};
			case "SOUTH":
			{
				{
					if (((_x getVariable ["house_owner", ["", ""]]) select 0) isEqualTo (getPlayerUID player)) then
					{
						_price = _price + (getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_x) >> "price") * (_percentage * gServer_tax_south_house_multiplier));
					};
				} forEach g_houses;
				_add_to_south = _add_to_south + _price;
			};
		};

		_price_remove = _price_remove + _price;
		if (!([false, _price, "Taxe d'habitation"] call AlysiaClient_fnc_handleATM)) then
		{
			["Vous n'avez pas assez d'argent pour payer votre taxe d'habitation. Régularisez votre situation dans les plus brefs délais ou les autorités passeront !", "BANQUE"] call AlysiaClient_fnc_phone_message_receive;
			switch (g_choice) do
			{
				case "NORTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe d'habitation.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", west]};
				case "SOUTH": {[format["%1 n'a pas suffisamment d'argent pour payer sa taxe d'habitation.", (player getVariable ["realname", profileName])], "BANQUE", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", east]};
			};
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
		_price_remove = _price_remove + _price;
	};
};

if (_add_to_north > 0) then
{
	[civilian, true, _add_to_north, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
};

if (_add_to_south > 0) then
{
	[east, true, _add_to_south, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
};

if (profileNamespace getVariable ["ALYSIA_phone_salary", true]) then
{
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
};
