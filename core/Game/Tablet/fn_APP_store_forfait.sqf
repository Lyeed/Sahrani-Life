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

_list = _display displayCtrl 8132;
lbClear _list;

{
	_forfait = configName _x;
	_index = _list lbAdd format
	[
		"%1 %2",
		getText(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "name"),
		if (_forfait isEqualTo g_phone_forfait) then {"(le votre)"} else {""}
	];
	_list lbSetData [_index, _forfait];
} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_FORFAITS"));
_list lbSetCurSel 0;
