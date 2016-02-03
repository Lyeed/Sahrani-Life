/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_type", "_display", "_price"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};

_type = _list lbData _sel;
if (_type isEqualTo "") exitWith {};

_display = findDisplay 99000;
if (isNull _display) exitWith {};

_price = [_type] call AlysiaClient_fnc_getVehBuyPrice;

(_display displayCtrl 99004) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	([_price] call AlysiaClient_fnc_numberText)
];

if (_price isEqualTo 0) then
{
	ctrlShow[99005, false];
	ctrlShow[99006, false];
	ctrlShow[99007, false];
	ctrlShow[99008, false];
	ctrlShow[99009, false];
} else {
	ctrlShow[99005, true];
	ctrlShow[99006, true];
	ctrlShow[99007, true];
	ctrlShow[99008, true];
	ctrlShow[99009, true];	
};
