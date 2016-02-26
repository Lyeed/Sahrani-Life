/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_index_stock", "_data"];

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call AlysiaClient_fnc_error;
};

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call AlysiaClient_fnc_error;
};

_index_stock = lbCurSel 45602;
if (_index_stock isEqualTo -1) exitWith {};

_price = lbValue[45602, _index_stock];
if (_price isEqualTo 0) exitWith {};
if (g_cash < _price) exitWith {};
if ((lbData[45602, _index_stock]) isEqualTo (getPlayerUID player)) exitWith {};

_data = ([g_AH_type, g_AH_location] call AlysiaClient_fnc_auctionHouse_getStock) select _index_stock;
if (isNil "_data") then {
	["Impossible de trouver les informations de vente<br/>La vente est peut être finie ou a été annulée"] call AlysiaClient_fnc_error;
} else {
	g_action_delay = time;
	_handle = [g_AH_type, (_data select 0)] call AlysiaClient_fnc_auctionHouse_canAdd;
	if (_handle isEqualTo "") then {
		ctrlShow[45609, false];
		ctrlShow[45610, false];
		ctrlShow[45611, false];
		ctrlShow[45612, false];
		ctrlShow[45613, false];
		[g_AH_type, g_AH_location, _data, _index_stock, player] remoteExec ["AlysiaServer_fnc_auctionHouse_tryBuy", 2];	
		sleep 1.5;
	} else {
		[_handle] call AlysiaClient_fnc_error;
	};
};

[0] call AlysiaClient_fnc_auctionHouse_menu_filter;
