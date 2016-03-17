/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_price", "_action", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_index = g_houses find _target;
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas les clés de cette maison"] call AlysiaClient_fnc_error;
};

if (((_target getVariable ["house_owner", ["", ""]]) select 0) != (getPlayerUID player)) exitWith {
	["Cette maison ne vous appartient pas"] call AlysiaClient_fnc_error;
};

_price = round(getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _target) >> "price") / 2);
_action = 
[
	format["Vous allez <t color='#DF0101'>vendre</t> votre maison pour <t color='#8cff9b'>%1kn</t>", ([_price] call AlysiaClient_fnc_numberText)],
	"Vente de propriété",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	_storage = _target getVariable ["house_storage_out", objNull];
	if (!(isNull _storage)) then {deleteVehicle _storage};
	g_houses deleteAt _index;
	_target setVariable ["house_sold", true, true];
	_target setVariable ["house_owner", nil, true];
	[_target] remoteExecCall ["AlysiaClient_fnc_house_menu_action_keys_change_update", -2];
	deleteMarkerLocal (format["house_%1", (_index + 1)]);
	["<t align='center'>Vente<br/><t color='#3ADF00'>effectuée</t></t>", "buy"] call AlysiaClient_fnc_info;
	[true, _price, "Vente maison"] call AlysiaClient_fnc_handleATM;
	[_target, (getPlayerUID player), playerSide] remoteExec ["AlysiaServer_fnc_house_sell", 2];
};
