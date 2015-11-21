/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_illegalMoney"];

if (!dialog) exitWith {};
if (!(isNil "gServer_soonReboot")) exitWith {
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour blanchir votre argent"] call public_fnc_error;
};

_illegalMoney = missionNamespace getVariable["life_inv_illegal_money", 0];
if (_illegalMoney == 0) exitWith {
	["Vous n'avez pas d'argent à blanchir"] call public_fnc_error;
};

if (_illegalMoney < 10000) exitWith {
	[format["Vous ne pouvez pas blanchir moins de <t color='#8cff9b'>%1kn</t> d'argent sale", ([10000] call public_fnc_numberText)]] call public_fnc_error; 
};

if (g_launder != 0) exitWith {
	["Vous êtes déjà en train de blanchir de l'argent<br/>Attendez d'avoir reçu la somme avant de blanchir de nouveau"] call public_fnc_error; 
};

closeDialog 0;
switch ([_this, 0, -1, [-1]] call BIS_fnc_param) do
{
	case 0:
	{
		_value = _illegalMoney * (call public_fnc_launderCalc);
		_action =
		[
			format
			[
				"Vous êtes sur le point de blanchir <t color='#8cff9b'>%1kn</t> d'argent sale vers votre <t color='#FF4000'>compte bancaire</t>. Une fois blanchie la somme sera de <t color='#8cff9b'>%2kn</t>", 
				([_illegalMoney] call public_fnc_numberText),
				_value
			],
			"Blanchiment",
			"Valider",
			"Annuler"
		] call BIS_fnc_guiMessage;
		if (_action) then
		{
			[format["Vous recevrez <t color='#8cff9b'>%1kn</t> sur votre compte bancaire dans quelques minutes", ([_value] call public_fnc_numberText)]] call public_fnc_info;
			g_launder = _value;
			[13] call MySQL_fnc_updatePartial;
			(60 * (random(7) + 3)) spawn 
			{
				sleep _this;
				[] call public_fnc_launderReceive;
			};
			missionNamespace setVariable["life_inv_illegal_money", 0];
			[] call MySQL_fnc_updateRequest;
		};
	};

	case 1:
	{
		if (((group player) getVariable["gang_name", ""]) == "") exitWith {
			["Vous n'avez pas de groupe"] call public_fnc_error;
		};
		_value = _illegalMoney * 0.97;
		_action =
		[
			format
			[
				"Vous êtes sur le point de blanchir <t color='#8cff9b'>%1kn</t> d'argent sale vers votre <t color='#FF4000'>compte de gang</t>. Une fois blanchie la somme sera de <t color='#8cff9b'>%2kn</t>",
				([_illegalMoney] call public_fnc_numberText),
				_value
			],
			"Blanchiment",
			"Valider",
			"Annuler"
		] call BIS_fnc_guiMessage;
		if (_action) then
		{
			_curAmount = (group player) getVariable ["gang_bank", 0];
			(group player) setVariable ["gang_bank", (_curAmount + _value), true];
			[format["Vous avez blanchi <t color='#8cff9b'>%1kn</t> pour le compte de votre groupe", [_value] call public_fnc_numberText], "buy"] call public_fnc_info;
			missionNamespace setVariable["life_inv_illegal_money", 0];
			[] call MySQL_fnc_updateRequest;
			[[1, (group player)], "TON_fnc_updateGang", false] spawn life_fnc_MP;
		};
	};
};