/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_action"];

if ((vehicle player) != player) exitWith {
	["Vous devez être à pied"] call public_fnc_info;
};

{
	if (!(isNil "_house")) exitWith {};

	_houseInfo = _x getVariable "house_owner";
	if (!(isNil "_houseInfo")) then
	{
		if ((_houseInfo select 0) isEqualTo (getPlayerUID player)) then
		{
			if ((player distance _x) < 10) then
			{
				_house = _x;
			};
		};
	};
} forEach (g_houses);
if (isNil "_house") exitWith {
	["Vous n'êtes près d'aucun bâtiment vous appartenant"] call public_fnc_error;
};

if (!(isNil {_house getVariable "house_storage_out"})) exitWith {
	["Ce bâtiment possède déjà un coffre"] call public_fnc_error;
};

if (getText(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _house) >> "storage") isEqualTo "") exitWith {
	["Ce bâtiment ne peut pas contenir de coffre"] call public_fnc_error;
};

_action = 
[
	"Le coffre sera posé <t color='#DF0101'>définitivement</t> et ne pourra plus être récupéré.<br/>Vous pourrez le sortir ou le rentrer via le menu d'actions de votre maison.",
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
