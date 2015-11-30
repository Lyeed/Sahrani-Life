/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_index_type", "_index_stock"];

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call public_fnc_error;
};

_index_stock = lbCurSel 45602;
if (_index_stock isEqualTo -1) exitWith {};

_index_type = lbCurSel 45601;
if (_index_type isEqualTo -1) exitWith {};

_price = lbValue[45602, _index_stock];
if (_price isEqualTo 0) exitWith {};
if (g_cash < _price) exitWith {};
if ((lbData[45602, _index_stock]) isEqualTo (getPlayerUID player)) exitWith {};

g_action_delay = time;
switch (_index_type) do
{
	case 0:
	{
		_data = g_AH_stock_virtual select _index_type;
		if (([(_data select 0), 1, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff) isEqualTo 1) then {
			[_index_stock, _index_type, (_data select 0), (_data select 1), player] remoteExec ["TON_fnc_auctionHouse_tryBuy", 2];	
		} else {
			["Vous n'avez pas assez de place dans votre inventaire"] call public_fnc_error;
		};
	};
	case 1:
	{
		_data = g_AH_stock_arma select _index_type;
		_itemCfg = [(_data select 0)] call public_fnc_fetchCfgDetails;
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((primaryWeapon player) != "") && ((_itemCfg select 4) isEqualTo 1)) exitWith {
			[format["Veuillez ranger votre arme principale<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(primaryWeapon player)] call public_fnc_fetchCfgDetails) select 1]] call public_fnc_error;
		};
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((handgunWeapon player) != "") && ((_itemCfg select 4) isEqualTo 2)) exitWith {
			[format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(handgunWeapon player)] call public_fnc_fetchCfgDetails) select 1]] call public_fnc_error;
		};
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((secondaryWeapon player) != "") && ((_itemCfg select 4) isEqualTo 4)) exitWith {
			[format["Veuillez ranger votre lanceur<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(secondaryWeapon player)] call public_fnc_fetchCfgDetails) select 1]] call public_fnc_error;
		};

		[_index_stock, _index_type, (_data select 0), (_data select 1), player] remoteExec ["TON_fnc_auctionHouse_tryBuy", 2];
	};
	case 2:
	{
		_data = g_AH_stock_vehicles select _index_type;
		[_index_stock, _index_type, (_data select 0), (_data select 1), player, (_data select 3)] remoteExec ["TON_fnc_auctionHouse_tryBuy", 2];
	};
};
