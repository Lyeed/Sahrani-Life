/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_display"];

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8113;
lbClear _list;

{
	if (!(missionNamespace getVariable[format["license_%1", _x], false])) then 
	{
		if ((getNumber(missionConfigFile >> "ALYSIA_LICENSES" >> _x >> "pad_store")) isEqualTo 1) then
		{
			_index = _list lbAdd ([_x] call public_fnc_licenseGetName);
			_list lbSetData [_index, _x];
		};
	};
} forEach (g_licenses);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};

_list lbSetCurSel 0;