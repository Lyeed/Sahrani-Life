/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_img", "_name", "_control"];

if (!dialog) exitWith {};

_type = lbValue[45601, (lbCurSel 45601)];
_control = ((findDisplay 45600) displayCtrl 45602);
lbClear _control;

{
	if ((_x select 0) == _type) then
	{
		_name = switch (_type) do
		{
			case 0: {getText(configFile >> "CfgVehicles" >> (_x select 1) >> "displayName")};
			case 1: {([(_x select 1)] call life_fnc_fetchCfgDetails) select 1};
			case 2: {[[(_x select 1), 0] call life_fnc_varHandle] call life_fnc_varToStr}
		};
		_control lbAdd format["%1 %2", _name, if ((getPlayerUID player) == (_x select 3)) then {"(Vous)"} else {""}];
		_control lbSetValue [(lbSize _control) - 1, (_x select 2)];
		_control lbSetData [(lbSize _control) - 1, str([_forEachIndex, (_x select 1), (_x select 4), (_x select 3)])];
		_img = switch (_type) do
		{
			case 0: {([(_x select 1)] call life_fnc_fetchVehInfo) select 2};
			case 1: {([(_x select 1)] call life_fnc_fetchCfgDetails) select 2};
			case 2: {[(_x select 1)] call ALYSIA_fnc_getItemIMG};
		};
		if (!(isNil "_img")) then {
			_control lbSetPicture [(lbSize _control) - 1, _img];
		};
	};
} forEach (ALYSIA_hv_list);

if (((lbSize _control) - 1) == -1) then
{
	_control lbAdd "Aucune vente";
	_control lbSetValue [(lbSize _control) - 1, -1];
};

_control lbSetCurSel 0;
