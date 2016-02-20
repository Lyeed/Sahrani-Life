/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_inv_virtual", "_inv_arma", "_money", "_array"];
_inv_virtual = [_this, 0, [], [[]]] call BIS_fnc_param;
_inv_arma = [_this, 1, [], [[]]] call BIS_fnc_param;
_money = [_this, 2, 0, [0]] call BIS_fnc_param;

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayPlayerSearch")) exitWith {};

disableSerialization;
_display = findDisplay 16000;
if (isNull _display) exitWith {};

_array = [];

if (_money > 0) then {
	_array pushBack [format["%1kn", [_money] call AlysiaClient_fnc_numberText], "alysia_items_virtual\data\money.paa"];
};

{
	_array pushBack [format["%1x %2", ([(_x select 1)] call AlysiaClient_fnc_numberText), ([(_x select 0)] call AlysiaClient_fnc_itemGetName)], ([(_x select 0)] call AlysiaClient_fnc_itemGetImage)];
} forEach (_inv_virtual);

{
	_info = [_x] call AlysiaClient_fnc_fetchCfgDetails;
	_array pushBack [(_info select 1), (_info select 2)];
} forEach (_inv_arma);

_list = _display displayCtrl 16001;
lbClear _list;

if (_array isEqualTo []) then {
	_list lbAdd "Vide";
} else {
	{
		_index = _list lbAdd (_x select 0);
		_list lbSetPicture [_index, (_x select 1)];	
		sleep (count(_array) / 10);
	} forEach (_array);	
};
