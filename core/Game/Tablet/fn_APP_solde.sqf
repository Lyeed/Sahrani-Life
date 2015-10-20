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

(_dialog displayCtrl 7602) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", ([g_atm] call public_fnc_numberText)];
(_dialog displayCtrl 7604) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", ([g_cash] call public_fnc_numberText)];
(_dialog displayCtrl 7607) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", ([(call g_paycheck)] call public_fnc_numberText)];
(_dialog displayCtrl 7609) ctrlSetStructuredText parseText format["<t align='center'>%1 minutes</t>", (call g_paycheck_period)];
(_dialog displayCtrl 7611) ctrlSetStructuredText parseText format["<t align='center'>%1 minutes</t>", round((g_nextPay - time) / 60)];

_list = _dialog displayCtrl 7614;
lbClear _list;

_list lbAdd format["Taxe salariale - %1$", [round((call g_paycheck) * 0.05)] call public_fnc_numberText];

if (!(g_phone_forfait isEqualTo "none")) then {
	_list lbAdd format
	[
		"Forfait téléphonique (%1) - %2$",
		getText(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "name"),
		[getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "bill")] call public_fnc_numberText
	];
};

_list lbSetCurSel -1;