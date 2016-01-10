/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_display", "_forfait"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};
if ((_list lbText _index) isEqualTo "Aucune") exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_forfait = _list lbData _index;

(_display displayCtrl 8111) ctrlSetStructuredText parseText format
[
	"<br/><t font='PuristaBold'><t align='center' t size='2'>%1</t><br/><t size='1.3'>"
+	"<t align='left'>Par salaire</t><t align='right'><t color='#8cff9b'>%2</t>kn</t><br/>"
+	"<t align='left'>SMS</t><t align='right'><t color='#8cff9b'>%3</t>kn</t><br/>"
+	"<t align='left'>SMS sauvegardés</t><t align='right'>%4</t><br/>"
+	"<t align='left'>Contacts</t><t align='right'>%5</t><br/>"
+	"<t align='left'>Blacklists</t><t align='right'>%6</t><br/></t>",
	(_list lbText _index),
	[getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "bill")] call public_fnc_numberText,
	[getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "sms_price")] call public_fnc_numberText,
	getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "sms_max"),
	getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "contacts_max"),
	getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "backlist_max")
];

[8111, true] call public_fnc_tabletShow;

if ((g_atm < (getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "bill"))) || (_forfait isEqualTo g_phone_forfait)) then
{
	[8108, false] call public_fnc_tabletShow;
	[8109, false] call public_fnc_tabletShow;
} else {
	[8108, true] call public_fnc_tabletShow;
	[8109, true] call public_fnc_tabletShow;
};
