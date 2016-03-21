/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_display", "_amount", "_config"];
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

_config = missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target);
if (!isClass(_config)) exitWith {};

switch (_action) do
{
	case "withdraw":
	{
		if (_amount > getNumber(_config >> "withdraw_max")) exitWith {
			[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "withdraw_min")) exitWith {
			[format["Vous ne pouvez pas retirer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_atm < _amount) exitWith {
			["Solde insuffisant"] call AlysiaClient_fnc_error;
		};
		
		_tax = _amount * (getNumber(_config >> "withdraw_tax") / 100);
		if (g_atm < _tax) exitWith {
			[format["Vous n'avez pas assez d'argent dans votre compte pour payer la taxe de prélèvement de ce DAB s'élevant à <t color='#8cff9b'>%1</t>kn", [_tax] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_atm_money = g_interaction_target getVariable ["money", getNumber(_config >> "money_stock")];
		if (_amount > _atm_money) exitWith {
			[format["Il n'y à pas assez d'argent dans le DAB pour retirer <t color='#8cff9b'>%1</t>kn.<br/>Max : <t color='#8cff9b'>%2</t>kn", [_amount] call AlysiaClient_fnc_numberText, [_atm_money] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		closeDialog 0;
		[
			format
			[
				"Vous avez retiré <t color='#8cff9b'>%1</t>kn de votre compte.<br/>Vous avez payé <t color='#8cff9b'>%2</t>kn de taxe.",
				[_amount] call AlysiaClient_fnc_numberText,
				[_tax] call AlysiaClient_fnc_numberText
			]
		] call AlysiaClient_fnc_info;
		[g_interaction_target, false, _amount] call AlysiaClient_fnc_atmMoneyHandle;
		[false, _amount, "Retrait DAB"] call AlysiaClient_fnc_handleATM;
		[false, _tax, "Taxe prélèvenement DAB"] call AlysiaClient_fnc_handleATM;
		[true, _amount] call AlysiaClient_fnc_handleCash;
	};

	case "deposit":
	{
		if (_amount > getNumber(_config >> "deposit_max")) exitWith {
			[format["Vous ne pouvez pas déposer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "deposit_min")) exitWith {
			[format["Vous ne pouvez pas déposer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_cash < _amount) exitWith {
			["Vous n'avez pas assez de fonds sur vous"] call AlysiaClient_fnc_error;
		};

		closeDialog 0;
		[format["Vous avez déposé <t color='#8cff9b'>%1</t>kn sur votre compte.", [_amount] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;
		[g_interaction_target, true, _amount] call AlysiaClient_fnc_atmMoneyHandle;
		[false, _amount] call AlysiaClient_fnc_handleCash;
		[true, _amount, "Dépot DAB"] call AlysiaClient_fnc_handleATM;
	};

	case "deposit_faction":
	{
		if (_amount > getNumber(_config >> "deposit_max")) exitWith {
			[format["Vous ne pouvez pas déposer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "deposit_min")) exitWith {
			[format["Vous ne pouvez pas déposer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_cash < _amount) exitWith {
			["Vous n'avez pas assez d'argent sur vous."] call AlysiaClient_fnc_error;
		};

		if ([true, _amount] call AlysiaClient_fnc_atmFactionHandle) then
		{
			closeDialog 0;
			[format["Vous avez déposé <t color='#8cff9b'>%1</t>kn le compte de votre faction.", [_amount] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;
			[g_interaction_target, true, _amount] call AlysiaClient_fnc_atmMoneyHandle;
			[false, _amount] call AlysiaClient_fnc_handleCash;
		};
	};

	case "withdraw_faction":
	{
		if (_amount > getNumber(_config >> "withdraw_max")) exitWith {
			[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "withdraw_min")) exitWith {
			[format["Vous ne pouvez pas retirer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_atm_money = g_interaction_target getVariable ["money", getNumber(_config >> "money_stock")];
		if (_amount > _atm_money) exitWith {
			[format["Il n'y à pas assez d'argent dans le DAB pour retirer <t color='#8cff9b'>%1</t>kn.<br/>Max : <t color='#8cff9b'>%2</t>kn", [_amount] call AlysiaClient_fnc_numberText, [_atm_money] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		if ([false, _amount] call AlysiaClient_fnc_atmFactionHandle) then
		{
			closeDialog 0;
			[format["Vous avez retiré <t color='#8cff9b'>%1</t>kn du compte votre faction.", [_amount] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;
			[true, _amount] call AlysiaClient_fnc_handleCash;
			[g_interaction_target, false, _amount] call AlysiaClient_fnc_atmMoneyHandle;
		} else {
			["Solde insuffisant"] call AlysiaClient_fnc_error;
		};
	};

	case "deposit_company":
	{
		if (_amount > getNumber(_config >> "deposit_max")) exitWith {
			[format["Vous ne pouvez pas déposer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "deposit_min")) exitWith {
			[format["Vous ne pouvez pas déposer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "deposit_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (g_cash < _amount) exitWith {
			["Vous n'avez pas assez d'argent sur vous."] call AlysiaClient_fnc_error;
		};

		closeDialog 0;
		[format["Vous avez déposé <t color='#8cff9b'>%1</t>kn le compte de votre entreprise.", [_amount] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;
		
		[g_interaction_target, true, _amount] call AlysiaClient_fnc_atmMoneyHandle;
		[false, _amount] call AlysiaClient_fnc_handleCash;
		[g_company, true, _amount] call AlysiaClient_fnc_company_bank_handle;
	};

	case "withdraw_company":
	{
		if (_amount > getNumber(_config >> "withdraw_max")) exitWith {
			[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_max")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};
		if (_amount < getNumber(_config >> "withdraw_min")) exitWith {
			[format["Vous ne pouvez pas retirer moins de <t color='#8cff9b'>%1</t>kn.", [getNumber(_config >> "withdraw_min")] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		_atm_money = g_interaction_target getVariable ["money", getNumber(_config >> "money_stock")];
		if (_amount > _atm_money) exitWith {
			[format["Il n'y à pas assez d'argent dans le DAB pour retirer <t color='#8cff9b'>%1</t>kn.<br/>Max : <t color='#8cff9b'>%2</t>kn", [_amount] call AlysiaClient_fnc_numberText, [_atm_money] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
		};

		if ([g_company, false, _amount] call AlysiaClient_fnc_company_bank_handle) then
		{
			closeDialog 0;
			[format["Vous avez retiré <t color='#8cff9b'>%1</t>kn du compte votre faction.", [_amount] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;
			[true, _amount] call AlysiaClient_fnc_handleCash;
			[g_interaction_target, false, _amount] call AlysiaClient_fnc_atmMoneyHandle;
		} else {
			["Solde insuffisant"] call AlysiaClient_fnc_error;
		};
	};
	
	default {["Action non reconnue"] call AlysiaClient_fnc_error};
};
