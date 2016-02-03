/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_price", "_action"];

if (isNull g_interaction_target) exitWith {};

_index = g_houses find g_interaction_target;
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas les clés de cette maison"] call AlysiaClient_fnc_error;
};

if (((g_interaction_target getVariable ["house_owner", ["", ""]]) select 0) != (getPlayerUID player)) exitWith {
	["Cette maison ne vous appartient pas"] call AlysiaClient_fnc_error;
};

_price = round(getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf g_interaction_target) >> "price") / 2);
_action = 
[
	format["Vous allez <t color='#DF0101'>vendre</t> votre maison pour <t color='#8cff9b'>%1kn</t>", ([_price] call AlysiaClient_fnc_numberText)],
	"Vente de propriété",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	_storage = g_interaction_target getVariable ["house_storage_out", objNull];
	if (!(isNull _storage)) then {
		deleteVehicle _storage;
	};

	g_houses deleteAt _index;
	g_interaction_target setVariable ["house_sold", true, true];
	g_interaction_target setVariable ["house_owner", nil, true];
	deleteMarkerLocal (format["house_%1", (_index + 1)]);
	["<t align='center'>Vente<br/><t color='#3ADF00'>effectuée</t></t>", "buy"] call AlysiaClient_fnc_info;
	[true, _price, "Vente maison"] call AlysiaClient_fnc_handleATM;
	[g_interaction_target, (getPlayerUID player), playerSide] remoteExec ["AlysiaServer_fnc_house_sell", 2];
};
