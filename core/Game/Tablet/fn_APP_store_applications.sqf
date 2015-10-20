/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8162;
lbClear _list;

{
	if (!((_x select 1) in g_apps)) then
	{
		_side = _x select 4;
		if ((_side isEqualTo sideUnknown) || (_side isEqualTo playerSide)) then
		{
			_index = _list lbAdd (_x select 0);
			_list lbSetValue [_index, (_x select 3)];
			_list lbSetData [_index, str([(_x select 1), (_x select 2)])];
		};
	};
} forEach 
(
	[
		["Extention : Véhicules", "VEHICLES", "Vous permet de débloquer une carte indiquant l'emplacement de vos véhicules dans votre application <t color='#FF4000'Véhicules</t>", 35000, sideUnknown],
		["Application : Bourse", "MARKET", "Application mettant à votre disposition diverses informations économiques", 12500, civilian]
	]
);

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};

_list lbSetCurSel 0;