/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_AH_inUse) exitWith {
	["Veuillez attendre que votre dernière action avec l'hôtel des ventes soit fini pour en commencer en nouvelle"] call public_fnc_error;
};

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call public_fnc_error;
};

_index_stock = lbCurSel 45621;
if (_index_stock isEqualTo -1) exitWith {};

_index_global = lbValue[45621, _index_stock];

_data = ([g_AH_type, g_AH_location] call public_fnc_auctionHouse_getStock) select _index_stock;
switch (g_AH_type) do
{
	case 0:
	{
		if (([(_data select 0), 1, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff) isEqualTo 1) then {
			[g_AH_type, g_AH_location, _data, _index_stock, player] remoteExec ["TON_fnc_auctionHouse_remove", 2];	
		} else {
			["Vous n'avez pas assez de place dans votre inventaire"] call public_fnc_error;
		};
	};

	case 1:
	{
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
		
		[g_AH_type, g_AH_location, _data, _index_stock, player] remoteExec ["TON_fnc_auctionHouse_remove", 2];
	};

	case 2:
	{
		[g_AH_type, g_AH_location, _data, _index_stock, player] remoteExec ["TON_fnc_auctionHouse_remove", 2];
	};
};
