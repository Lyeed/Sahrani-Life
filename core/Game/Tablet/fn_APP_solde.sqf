/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_dialog", "_list"];
disableSerialization;

_dialog = uiNamespace getVariable["tablet", displayNull];
if (isNull _dialog) exitWith {};

(_dialog displayCtrl 7603) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b' size='1.2'>%1</t><t align='right'>kn</t>", ([g_atm] call public_fnc_numberText)];
(_dialog displayCtrl 7606) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>", ([(call g_paycheck)] call public_fnc_numberText)];
(_dialog displayCtrl 7609) ctrlSetStructuredText parseText format["<t align='center'>%1 minutes</t>", (call g_paycheck_period)];
(_dialog displayCtrl 7612) ctrlSetStructuredText parseText format["<t align='center'>%1 minutes</t>", round((g_nextPay - time) / 60)];

_list = _dialog displayCtrl 7615;
lbClear _list;

{
	_list lbAdd _x;
} forEach g_atm_from;
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vide";
};
