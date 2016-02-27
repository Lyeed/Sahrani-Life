/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_salary"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_salary = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary");
if (_salary > 0) then
{
	if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_apply_rank") isEqualTo 1) then {
		_salary = _salary * (player getVariable ["rank", 0]);
	};
};

if ((player getVariable ["number", ""]) != "") then
{
	[7616, true] call AlysiaClient_fnc_tabletShow;
	[7617, true] call AlysiaClient_fnc_tabletShow;
	[7618, true] call AlysiaClient_fnc_tabletShow;

	(_display displayCtrl 7617) cbSetChecked (profileNamespace getVariable ["ALYSIA_phone_salary", true]);
};

(_display displayCtrl 7603) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b' size='1.2'>%1</t><t align='right'>kn</t>",
	[g_atm] call AlysiaClient_fnc_numberText
];

(_display displayCtrl 7606) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[_salary] call AlysiaClient_fnc_numberText
];

(_display displayCtrl 7609) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1 minutes</t>",
	getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_timer")
];

(_display displayCtrl 7612) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1 minutes</t>",
	round((g_nextPay - time) / 60)
];

_list = _display displayCtrl 7615;
lbClear _list;

{
	_list lbAdd _x;
} forEach g_atm_from;
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vide";
};
