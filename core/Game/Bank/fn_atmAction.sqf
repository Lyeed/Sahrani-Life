/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_display", "_amount"];
_action = [_this, 0, "", [""]] call BIS_fnc_param;

disableSerialization;
_display = findDisplay 15000;
if (isNull _display) exitWith {};

_amount = ctrlText 15019;
if (!([_amount] call AlysiaClient_fnc_isNumber)) exitWith {
	["Erreur dans le montant"] call AlysiaClient_fnc_error;
};

_amount = parseNumber _amount;
if (_amount <= 0) exitWith {
	["Erreur dans le montant"] call AlysiaClient_fnc_error;
};

if (g_interaction_target getVariable ["inUse", false]) exitWith {
	["Le DAB est en cours de réapprovisionnement, veuillez patienter"] call AlysiaClient_fnc_error;
};

switch (_action) do
{
	case "withdraw":
	{
		if (_amount > getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_max")) exitWith {
			[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min")) exitWith {
			[format["Vous ne pouvez pas retirer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_atm < _amount) exitWith {
			["Solde insuffisant"] call AlysiaClient_fnc_error;
		};
		
		_tax = _amount * (getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min") / 100);
		if (g_atm < _tax) exitWith {
			[format["Vous n'avez pas assez d'argent dans votre compte pour payer la taxe de prélèvement de ce DAB s'élevant à <t color='#8cff9b'>%1</t>kn", [_tax] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_atm_money = g_interaction_target getVariable ["money", getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "money_stock")];
		if (_amount > _atm_money) exitWith {
			[format["Il n'y à pas assez d'argent dans le DAB pour retirer <t color='8cff9b'>%1</t>kn.<br/>Max : <t color='8cff9b'>%2</t>kn", [_amount] call AlysiaClient_fnc_numberText, [_atm_money] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		g_interaction_target setVariable ["money", (_atm_money - _amount), true];
		[false, _amount, "Retrait DAB"] call AlysiaClient_fnc_handleATM;
		[false, _tax, "Taxe prélèvenement DAB"] call AlysiaClient_fnc_handleATM;
		[true, _amount] call AlysiaClient_fnc_handleCash;
		["home"] call AlysiaClient_fnc_atmScreen;
	};

	case "deposit":
	{
		if (_amount > getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_max")) exitWith {
			[format["Vous ne pouvez pas déposer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min")) exitWith {
			[format["Vous ne pouvez pas déposer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_cash < _amount) exitWith {
			["Vous n'avez pas assez de fonds sur vous"] call AlysiaClient_fnc_error;
		};

		g_interaction_target setVariable ["money", ((g_interaction_target getVariable ["money", getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "money_stock")]) + _amount), true];
		[false, _amount] call AlysiaClient_fnc_handleCash;
		[true, _amount, "Dépot DAB"] call AlysiaClient_fnc_handleATM;
		["home"] call AlysiaClient_fnc_atmScreen;
	};

	case "deposit_faction":
	{
		if (_amount > getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_max")) exitWith {
			[format["Vous ne pouvez pas déposer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min")) exitWith {
			[format["Vous ne pouvez pas déposer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_cash < _amount) exitWith {
			["Vous n'avez pas assez de fonds sur vous"] call AlysiaClient_fnc_error;
		};

		g_interaction_target setVariable ["money", ((g_interaction_target getVariable ["money", getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "money_stock")]) + _amount), true];
		[false, _amount] call AlysiaClient_fnc_handleCash;
		[playerSide, true, _amount] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
		["home_faction"] call AlysiaClient_fnc_atmScreen;
	};

	case "withdraw_faction":
	{
		if (_amount > getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_max")) exitWith {
			[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min")) exitWith {
			[format["Vous ne pouvez pas retirer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_atm_money = g_interaction_target getVariable ["money", getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "money_stock")];
		if (_amount > _atm_money) exitWith {
			[format["Il n'y à pas assez d'argent dans le DAB pour retirer <t color='8cff9b'>%1</t>kn.<br/>Max : <t color='8cff9b'>%2</t>kn", [_amount] call AlysiaClient_fnc_numberText, [_atm_money] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_handle = switch (playerSide) do
		{
			case east: {if (gServer_faction_EAST_bank >= _amount) then {true} else {false}};
			case west: {if (gServer_faction_WEST_bank >= _amount) then {true} else {false}};
			case independent: {if (gServer_faction_GUER_bank >= _amount) then {true} else {false}};
			default {false};
		};
		
		if (_handle) then
		{
			[true, _amount] call AlysiaClient_fnc_handleCash;
			[playerSide, false, _amount] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];
			g_interaction_target setVariable ["money", (_atm_money - _amount), true];
		} else {
			["Solde insuffisant"] call AlysiaClient_fnc_error;
		};
		
		["home_faction"] call AlysiaClient_fnc_atmScreen;
	};
	
	default {["Action non reconnue"] call AlysiaClient_fnc_error};
};
