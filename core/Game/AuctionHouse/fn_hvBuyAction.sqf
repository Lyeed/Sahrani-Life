/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_itemInfo", "_itemIndex", "_itemName", "_error"];

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

_price = lbValue[45602, (lbCurSel 45602)];

if (_price == -1) exitWith {};
if (life_cash < _price) exitWith {};

_itemInfo = call compile format["%1", lbData[45602, (lbCurSel 45602)]];
_itemName = _itemInfo select 1;
_error = false;

life_action_delay = time;
switch (lbValue[45601, (lbCurSel 45601)]) do
{
	case 0:
	{
		if ((call life_donator) == 0) then {
			if ((getNumber(missionConfigFile >> "ALYSIA_VEHICLES" >> _itemName >> "donator")) == 1) then {
				_error = true;
				["Vous n'avez pas accès à ce contenu"] call ALYSIA_fnc_error;
			};
		};
	};

	case 1:
	{
		private["_itemCfg"];
		_itemCfg = [_itemName] call life_fnc_fetchCfgDetails;
		if ((_itemCfg select 6) == "CfgWeapons") then
		{
			if (((primaryWeapon player) != "") && ((_itemCfg select 4) == 1)) exitWith {
				[format["Veuillez ranger votre arme principale<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(primaryWeapon player)] call life_fnc_fetchCfgDetails) select 1]] call ALYSIA_fnc_error;
				_error = true;
			};
			if (((handgunWeapon player) != "") && ((_itemCfg select 4) == 2)) exitWith {
				[format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(handgunWeapon player)] call life_fnc_fetchCfgDetails) select 1]] call ALYSIA_fnc_error;
				_error = true;
			};
			if (((secondaryWeapon player) != "") && ((_itemCfg select 4) == 4)) exitWith {
				[format["Veuillez ranger votre lanceur<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(secondaryWeapon player)] call life_fnc_fetchCfgDetails) select 1]] call ALYSIA_fnc_error;
				_error = true;
			};
		};
	};
	case 2:
	{
		if (([_itemName, 1, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff) != 1) then 
		{
			["Vous n'avez pas assez de place dans votre inventaire pour acheter cet objet"] call ALYSIA_fnc_error;
			_error = true;
		};
	};
};

if (!_error) then
{
	ctrlEnable [45604, false];
	life_action_delay = time;
	[[(_itemInfo select 0), _itemName, _price, player], "ALYSIA_fnc_hvTryBuy", false] spawn life_fnc_MP;
};
