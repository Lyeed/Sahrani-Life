/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_display"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8113;
lbClear _list;

{
	_license = configName _x;
	if (!([_license] call public_fnc_hasLicense)) then 
	{
		_index = _list lbAdd ([_license] call public_fnc_licenseGetName);
		_list lbSetData [_index, _license];
		_list lbSetValue [_index, getNumber(_x >> "price")];
	};
} foreach ("((str(playerSide) in getArray(_x >> 'sides')) && (getNumber(_x >> 'pad_store') isEqualTo 1))" configClasses (missionConfigFile >> "ALYSIA_LICENSES"));
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};

_list lbSetCurSel 0;
