/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vList", "_tList", "_sel", "_type", "_display"];
disableSerialization;

_tList = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((isNull _tList) || (_sel isEqualTo -1)) exitWith {};

_type = _tList lbData _sel;
_display = findDisplay 2800;
_vList = _display displayCtrl 2802;
lbClear _vList;

{
	if ((_x select 10) isEqualTo _type) then
	{
	    _index = _vList lbAdd (_x select 6);
		_vList lbSetPicture [_index, getText(configFile >> "CfgVehicles" >> (_x select 1) >> "picture")];
		_vList lbSetValue [_index, _forEachIndex];
	};
} forEach (g_garage_vehicles);

if ((lbSize _vList) isEqualTo 0) then
{
	_vList lbAdd "Aucun véhicule";
	_vList lbSetValue [0, -1];
};

_vList lbSetCurSel 0;