/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index_stock", "_data", "_index_global"];

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call public_fnc_error;
};

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

_index_stock = lbCurSel 45621;
if (_index_stock isEqualTo -1) exitWith {};

_index_global = lbValue[45621, _index_stock];
_data = ([g_AH_type, g_AH_location] call public_fnc_auctionHouse_getStock) select _index_global;
if (isNil "_data") then {
	["Impossible de trouver les informations de vente<br/>L'objet vient peut être d'être acheté ou a déjà été retiré de la vente"] call public_fnc_error;
} else {
	if ((lbData[45621, _index_stock]) isEqualTo (_data select 0)) then
	{
		_handle = [g_AH_type, (_data select 0)] call public_fnc_auctionHouse_canAdd;
		if (_handle isEqualTo "") then
		{
			g_action_delay = time;
			ctrlShow[45622, false];
			ctrlShow[45623, false];
			ctrlShow[45624, false];
			ctrlShow[45625, false];
			ctrlShow[45626, false];
			[g_AH_type, g_AH_location, _data, _index_global, player] remoteExec ["TON_fnc_auctionHouse_remove", 2];
			sleep 1.5;
		} else {
			[_handle] call public_fnc_error;
		};
	} else {
		["Impossible de trouver les informations de vente<br/>L'objet vient peut être d'être acheté ou a déjà été retiré de la vente"] call public_fnc_error;
	};
};

[2] call public_fnc_auctionHouse_menu_filter;
