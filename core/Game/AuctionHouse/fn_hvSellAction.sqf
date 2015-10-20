/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_item", "_type", "_price", "_cost", "_action", "_description", "_allowed", "_badChar"];

if (!dialog) exitWith {};
if ((time - life_action_delay) < 2) exitWith { ["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; };
if ([west, (visiblePosition player), 20] call life_fnc_nearUnits) exitWith {
	closeDialog 0;	
	["Vous ne pouvez pas interagir avec l'hôtel des ventes lorsque des militaires se trouvent à proximité"] call ALYSIA_fnc_error;
};
if (ALYSIA_hv_lock) exitWith {
	closeDialog 0;
	["L'hôtel des ventes a temporairement été désactivé pour des raisons techniques"] call ALYSIA_fnc_error;
};
if (!(isNil "ALYSIA_life_soonReboot")) exitWith {
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call ALYSIA_fnc_error;
};

_sel = lbCurSel 45703;
if (_sel == -1) exitWith {};

_item = lbData[45703, _sel];
_type = lbValue[45703, _sel];
if (_type == -1) exitWith {};

_price = ctrlText 45704;
if (!([_price] call TON_fnc_isnumber)) exitWith { ["Prix de vente invalide"] call ALYSIA_fnc_error; };
_price = parseNumber(_price);
if (_price < 0) exitWith { ["Le <t color='#FF8000'>prix de vente</t> doit être positif"] call ALYSIA_fnc_error; };
if (_price < 1500) exitWith { ["Le <t color='#FF8000'>prix de vente</t> doit être supérieur ou égal à <t color='#8cff9b'>1.500$</t>"] call ALYSIA_fnc_error; };
if (_price >= 999999) exitWith { [format["Le <t color='#FF8000'>prix de vente</t> doit être inférieur à <t color='#8cff9b'>%1$</t>", [999999] call life_fnc_numberText]] call ALYSIA_fnc_error; };

_cost = _price * 0.05;
if (life_cash < _cost) exitWith {
	[format["Vous n'avez pas assez d'argent pour mettre cet objet en vente pour <t color='#8cff9b'>%1$</t><br/><br/><t align='left'>Commission</t><t align='right' color='#8cff9b'>%2$</t><br/><t align='left'>Manquant</t><t align='right' color='#ff8c8c'>%3$</t>", [_price] call life_fnc_numberText, [_cost] call life_fnc_numberText, [(_cost - life_cash)] call life_fnc_numberText]] call ALYSIA_fnc_error;
};

_description = ctrlText 45705;
if (count(_description) > 50) exitWith {
	[format["La <t color='#FF8000'>description</t> ne peut pas dépasser 50 caractères (%1/50)", count(_description)]] call ALYSIA_fnc_error;
};
if ((_description == "Description...") || (_description == "")) then {
	_description = "Aucune";
};

_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_ ");
{
	if (!(_x in _allowed)) exitWith {
		_badChar = _x;
	};
} foreach (toArray(_description));
if (!(isNil "_badChar")) exitWith {
	["Vous utilisez un caractère interdit dans votre description (ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_ )"] call ALYSIA_fnc_error;
};

_action = 
[
	format["Vous êtes sur le point de démarrer une vente de <t color='#FF8000'>%1</t> pour <t color='#8cff9b'>%2$</t>. Le prix de la commission est de <t color='#0080FF'>%3</t><t color='#8cff9b'>$</t> immédiatement et <t color='#0080FF'>%3</t><t color='#8cff9b'>$</t> lorsque l'objet sera vendu.", (lbText[45703, _sel]), [_price] call life_fnc_numberText, [_cost] call life_fnc_numberText],
	"Démarrer une vente", 
	"Valider", 
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then
{
	private["_handled"];
	life_action_delay = time;
	_handled = false;
	switch (_type) do
	{
		case 0:
		{
			_item = life_vehicles select (parseNumber(_item));
			if (!(isNil "_item")) then {
				if (!(isNull _item)) then {
					if ((player distance _item) < 20) then 
					{
						_handled = true;
					} else {
						["Le véhicule est trop loin pour être vendu<br/>Vente annulée"] call ALYSIA_fnc_error;
					};
				} else {
					["Impossible de récupéré le véhicule que vous souhaitez vendre<br/>Vente annulée"] call ALYSIA_fnc_error;
				};
			} else {
				["Impossible de récupéré le véhicule que vous souhaitez vendre<br/>Vente annulée"] call ALYSIA_fnc_error;
			};
		};
		case 1:
		{
			[_item, false] call life_fnc_handleItem;
			_handled = true;
		};
		case 2:
		{
			if ([false, _item, 1] call life_fnc_handleInv) then {
				_handled = true;
			} else {
				["Impossible de récupéré l'objet que vous souhaitez vendre<br/>Vente annulée"] call ALYSIA_fnc_error; 
			};
		};
	};

	if (_handled) then
	{
		ctrlEnable [45702, false];
		life_cash = life_cash - _cost;
		playSound "buy";	
		[
			format
			[
				"Vous avez mis<br/><t align='center' color='#FF8000'>%1</t><br/>en vente pour <t color='#8cff9b'>%2$</t><br/><br/>Vous avez payé <t color='#8cff9b'>%3$</t> de commission", 
				(lbText[45703, _sel]),
				[_price] call life_fnc_numberText,
				[_cost] call life_fnc_numberText
			]
		] call ALYSIA_fnc_info;
		[[_item, (getPlayerUID player), _price, _type, _description], "ALYSIA_fnc_hvAdd", false] spawn life_fnc_MP;
		[] call ALYSIA_fnc_hvSellUpdate;
		ctrlEnable [45702, true];
	};
};
