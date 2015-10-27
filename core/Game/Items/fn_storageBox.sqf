/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_houseInfo", "_action"];

if ((vehicle player) != player) exitWith {
	["Vous devez être à pied"] call public_fnc_info;
};

{
	if ((player distance _x) < 10) exitWith {
		_house = _x;
	};
} forEach (g_houses);
if (isNil "_house") exitWith {
	["Vous n'êtes près d'aucun bâtiment vous appartenant"] call public_fnc_error;
};

_houseInfo = _house getVariable "house_owner";
if (isNil "_houseInfo") exitWith {
	["Vous n'êtes près d'aucun bâtiment vous appartenant"] call public_fnc_error;
};

if ((_houseInfo select 0) != (getPlayerUID player)) exitWith {
	["Vous n'êtes pas le propriétaire de ce bâtiment"] call public_fnc_error; 
};

if (_house getVariable ["containers", false]) exitWith {
	["Cet bâtiment possède déjà un coffre"] call public_fnc_error;
};

if (getText(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _house) >> "storage") isEqualTo "") exitWith {
	["Cette bâtisse ne peut pas contenir de coffre"] call public_fnc_error;
};

_action = 
[
	"Le coffre sera posé <t color='#DF0101'>définitivement</t> et ne pourra plus être récupéré.<br/>Vous pourrez le sortir ou le rentrer via le menu d'actions.",
	"Coffre de maison",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	if ([false, "storage", 1] call public_fnc_handleInv) then
	{
		["<t align='center'>Vous avez posé<br/><t color='#FF8000'>Coffre</t><br/>"] call public_fnc_info;
		[_house] remoteExec ["TON_fnc_house_storage_install", 2];
	};
};