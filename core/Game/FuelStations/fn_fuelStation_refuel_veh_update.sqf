/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_list", "_sel", "_display"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

_display = findDisplay 16000;
if (isNull _display) exitWith {};
if ((_sel isEqualTo -1) || (isNull _list)) exitWith {};

(_display displayCtrl 16008) ctrlSetStructuredText parseText format ["<t align='center' size='2'>%1</t>", ([cursorTarget, (lbData [16004, lbCurSel 16004])] call public_fnc_fuelStation_price_buy)];
(_display displayCtrl 16011) ctrlSetStructuredText parseText format ["<t align='right'> %1L</t>", (cursorTarget getVariable [(lbData [16004, lbCurSel 16004]), ""], 250])];
(_display displayCtrl 16015) ctrlSetText (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> (lbData [16004, lbCurSel 16004]) >> "picture"));