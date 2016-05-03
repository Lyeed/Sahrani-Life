/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_number";

_number = uiNamespace getVariable ["phone_call_number", ""];
if (([_number] call CBA_fnc_strLen) > 1) then
{
	_number = [_number, 0, ([_number] call CBA_fnc_strLen) - 1] call CBA_fnc_substr;
	((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 8920) ctrlSetStructuredText parseText format["<t size='2.5' align='center'>%1</t>", _number];
	uiNamespace setVariable ["phone_call_number", _number];
} else {
	((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 8920) ctrlSetStructuredText parseText "";
	uiNamespace setVariable ["phone_call_number", ""];
};
