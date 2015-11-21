/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_forfait", "_display"];
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_forfait = _list lbData _index;

(_display displayCtrl 8137) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_list lbText _index)];
(_display displayCtrl 8139) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>", [getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "bill")] call public_fnc_numberText];
(_display displayCtrl 8141) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>", [getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "sms_price")] call public_fnc_numberText];
(_display displayCtrl 8144) ctrlSetStructuredText parseText format["%1", getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "sms_max")];
(_display displayCtrl 8146) ctrlSetStructuredText parseText format["%1", getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "contacts_max")];
(_display displayCtrl 8148) ctrlSetStructuredText parseText format["%1", getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "backlist_max")];

if ((g_atm < (getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "bill"))) || (_forfait isEqualTo g_phone_forfait)) then
{
	[8149, false] call public_fnc_tabletShow;
	[8150, false] call public_fnc_tabletShow;
} else {
	[8149, true] call public_fnc_tabletShow;
	[8150, true] call public_fnc_tabletShow;
};