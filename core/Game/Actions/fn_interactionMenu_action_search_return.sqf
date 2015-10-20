/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_virtual", "_ctrl_arma"];

if (!params [
		["_inv_virtual", [], [[]]],
		["_inv_arma", [], [[]]],
		["_money", 0, [0]]
	]) exitWith {};

if (!(createDialog "RscDisplayPlayerSearch")) exitWith {};

disableSerialization;
_display = findDisplay 16000;
if (isNull _display) exitWith {};

(_display displayCtrl 16001) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", _money];

_ctrl_virtual = _display displayCtrl 16002;
lbClear _ctrl_virtual;

{
	_index = _ctrl_list_trade lbAdd format["%1x %2", ([(_x select 1)] call public_fnc_numberText), ([(_x select 0)] call public_fnc_itemGetName)];
	_ctrl_list_trade lbSetPicture [_index, ([(_x select 0)] call public_fnc_itemGetImage)];
} forEach (_inv_virtual);
if ((lbSize _ctrl_virtual) isEqualTo 0) then {
	_ctrl_virtual lbAdd "Vide";
};

_ctrl_arma = _display displayCtrl 16003;
lbClear _ctrl_arma;

{
	_info = [_x] call public_fnc_fetchCfgDetails;
	_index = _ctrl_arma lbAdd (_info select 1);
	_ctrl_arma lbSetPicture [_index, (_info select 2)];
} forEach (_inv_arma);

if ((lbSize _ctrl_arma) isEqualTo 0) then {
	_ctrl_arma lbAdd "Vide";
};