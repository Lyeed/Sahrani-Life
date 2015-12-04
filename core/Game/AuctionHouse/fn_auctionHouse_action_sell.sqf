/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_sel", "_item", "_cost", "_vehicle"];

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call public_fnc_error;
};

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

_sel = lbCurSel 45621;
if (_sel isEqualTo -1) exitWith {};

_price = ctrlText 45620;
if (!([_price] call public_fnc_isNumber)) exitWith {
	["Prix de vente invalide"] call public_fnc_error;
};

_price = parseNumber(_price);
if (_price < 0) exitWith {
	["Le <t color='#FF8000'>prix de vente</t> doit être positif"] call public_fnc_error;
};
if (_price < 500) exitWith {
	["Le <t color='#FF8000'>prix de vente</t> doit être supérieur ou égal à <t color='#8cff9b'>500</t>kn"] call public_fnc_error;
};
if (_price >= 999999) exitWith {
	[format["Le <t color='#FF8000'>prix de vente</t> doit être inférieur à <t color='#8cff9b'>%1</t>kn", ([999999] call public_fnc_numberText)]] call public_fnc_error;
};

_vehicle = objNull;
_item = lbData[45621, _sel];
_cost = round(_price * 0.05);
if (g_cash < _cost) exitWith
{
	[
		format
		[
				"Vous n'avez pas assez d'argent pour mettre cet objet en vente pour <t color='#8cff9b'>%1kn</t><br/><br/>"
			+	"Commission : <t color='#8cff9b'>%2</t>kn<br/>"
			+	"Manquant : </t><t color='#ff8c8c'>%3</t>kn",
			([_price] call public_fnc_numberText),
			([_cost] call public_fnc_numberText),
			[(_cost - g_cash)] call public_fnc_numberText
		]
	] call public_fnc_error;
};

_action = 
[
	format
	[
			"Vous êtes sur le point de démarrer une vente de <t color='#FF8000'>%1</t> pour <t color='#8cff9b'>%2</t>kn.<br/>"
		+	"Le prix de la commission est de <t color='#8cff9b'>%3</t>kn immédiatement et <t color='#8cff9b'>%3</t>kn lorsque l'objet sera vendu.",
		(lbText[45621, _sel]),
		([_price] call public_fnc_numberText),
		([_cost] call public_fnc_numberText)
	],
	"Démarrer une vente", 
	"Valider", 
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	g_action_delay = time;
	_condition = switch (g_AH_type) do
	{
		case 0: {([false, _item, 1] call public_fnc_handleInv)};
		case 1:
		{
			[_item, false] call public_fnc_handleItem;
			true;
		};
		case 2:
		{
			_vehicle = g_vehicles select (lbValue[45621, _sel]);
			if (isNil "_vehicle") exitWith {false};
			if (isNull _vehicle) exitWith {false};
			if ((player distance _vehicle) > 15) exitWith {false};
			true;
		};
	};
	if (_condition) then
	{
		[g_AH_type, g_AH_location, _item, _price, (getPlayerUID player), _vehicle] remoteExec ["TON_fnc_auctionHouse_tryBuy", 2];
		[false, _cost] call public_fnc_handleCash;
		[format
			[
				"Vous avez mis <t color='#FF8000'>%1</t> en vente pour <t color='#8cff9b'>%2</t>kn<br/><br/>Vous avez payé <t color='#8cff9b'>%3kn</t> de commission",
				(lbText[45621, _sel]),
				([_price] call public_fnc_numberText),
				([_cost] call public_fnc_numberText)
			], "buy"
		] call public_fnc_info;
		ctrlShow[45627, false];
		ctrlShow[45628, false];
		ctrlShow[45629, false];
		ctrlShow[45630, false];
		ctrlShow[45631, false];
	} else {
		["Impossible de récupérer l'objet à mettre en vente"] call public_fnc_error;
	};
	[1] call public_fnc_auctionHouse_menu_filter;
};
