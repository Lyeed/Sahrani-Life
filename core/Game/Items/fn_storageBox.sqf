/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_action", "_item", "_storage", "_require"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};

if ((vehicle player) != player) exitWith {
	["Vous devez être à pied"] call public_fnc_info;
};

{
	if (((player distance _x) < 10) && (((_x getVariable "house_owner") select 0) isEqualTo (getPlayerUID player))) exitWith {
		_house = _x;
	};
} forEach g_houses;
if (isNil "_house") exitWith {
	["Vous n'êtes près d'aucun bâtiment vous appartenant"] call public_fnc_error;
};

if (!(isNil {_house getVariable "house_storage_out"})) exitWith {
	["Ce bâtiment possède déjà un coffre"] call public_fnc_error;
};

_storage = getText(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _house) >> "storage");
if (_storage isEqualTo "") exitWith {
	["Ce bâtiment ne peut pas contenir de coffre"] call public_fnc_error;
};

_require = getText(missionConfigFile >> "ALYSIA_STORAGES" >> _storage >> "item");
if (_item != _require) exitWith {
	[format["Vous n'utilisez pas le bon coffre.<br/>Ce bâtiment a besoin de <t color='#FF8000'>%1</t>.", [_require] call public_fnc_itemGetName]] call public_fnc_error
};

_action = 
[
	"Le coffre sera posé <t color='#DF0101'>définitivement</t> et ne pourra plus être récupéré.<br/>Vous pourrez le sortir ou le rentrer via le menu d'actions de votre bâtiment.",
	"Coffre de maison",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	if ([false, "storage", 1] call public_fnc_handleInv) then
	{
		["Vous avez posé un <t color='#FF8000'>Coffre</t> dans votre maison"] call public_fnc_info;
		[_house] remoteExec ["TON_fnc_house_storage_install", 2];
		_house setVariable ["house_storage_out", objNull, true];
	};
};
