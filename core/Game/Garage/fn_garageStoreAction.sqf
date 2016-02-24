/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_vehicle"];

_sel = lbCurSel 35001;
if (_sel isEqualTo -1) exitWith {};
if ((lbText[35001, _sel]) isEqualTo "Aucun véhicule") exitWith {};

_vehicle = g_vehicles select (lbValue[35001, _sel]);
if (isNil "_vehicle") exitWith {};
if (isNull _vehicle) exitWith {};

[_vehicle, cbChecked ((findDisplay 35000) displayCtrl 35002), (getPos g_garage_PNJ), true, g_garage_distance] spawn AlysiaClient_fnc_garageVehicleStore;
closeDialog 0;
