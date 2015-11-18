/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_item"];

_sel = lbCurSel 85001;
if (_sel isEqualTo -1) exitWith {};
if ((lbText[85001, _sel]) isEqualTo "Vide") exitWith {};

_item = lbData[85001, _sel];
if (_item isEqualTo "") exitWith {};

[_item] call public_fnc_removeItem;
