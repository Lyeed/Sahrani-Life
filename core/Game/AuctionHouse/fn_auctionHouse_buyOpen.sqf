/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

g_action_inUse = false;
g_AH_stock_virtual = _this select 0;
g_AH_stock_arma = _this select 1;
g_AH_stock_vehicles = _this select 2;

if (!(createDialog "RscDisplayAuctionHouseBuy")) exitWith {};

disableSerialization;
_display = findDisplay 45600;
if (isNull _display) exitWith {};

_list = _display displayCtrl 45601;
lbClear _list;

_types lbAdd "Objets Life";
_types lbAdd "Objets ArmA";
_types lbAdd "Véhicules";

_types lbSetCurSel 0;
