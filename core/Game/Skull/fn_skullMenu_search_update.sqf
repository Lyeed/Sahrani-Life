/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

disableSerialization;
_display = findDisplay 69000;
if (isNull _display) exitWith {};

_list = _display displayCtrl 69002;
lbClear _list;

{
	_data = switch (_x select 0) do
	{
		case "money": {[format["%1kn", (_x select 1)], "\Alysia_Textures\data\life_inv_illegal_money.paa"]};
		case "virtual": {[format["%1x %2", (_x select 1) select 1, ([(_x select 1) select 0] call public_fnc_itemGetName)], ([(_x select 1) select 0] call public_fnc_itemGetImage)]};
		case "arma":
		{
			_info = [(_x select 1)] call public_fnc_fetchCfgDetails;
			[(_info select 1), (_info select 2)]
		};
	};
	_index = _list lbAdd (_data select 0);
	_list lbSetPicture [_index, (_data select 1)];
} forEach (g_interaction_target_inv);

if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Vide";
	ctrlShow[69003, false];
	ctrlShow[69004, false];
};

_list lbSetCurSel 0;