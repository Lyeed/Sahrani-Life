/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_houseInfo", "_house", "_action", "_storage"];

_house = [(getPos player), playerSide, 15] call public_fnc_nearestHouse;
if (count _house == 0) exitWith { 
	["Vous n'êtes près d'aucune bâtisse vous appartenant"] call public_fnc_error; 
};
_house = _house select 0;

_houseInfo = _house getVariable "house_owner";
if (isNil "_houseInfo") exitWith {
	["Vous n'êtes près d'aucune bâtisse vous appartenant"] call public_fnc_error;
};
if ((_houseInfo select 0) != (getPlayerUID player)) exitWith {
	["Cette bâtisse ne vous appartient pas"] call public_fnc_error; 
};

if (_house getVariable["containers", false]) exitWith {
	["Cette bâtisse possède déjà un coffre"] call public_fnc_error; 
};

if ((player distance _house) > 7) exitWith {
	["Vous êtes trop loin de chez vous pour poser un coffre"] call public_fnc_error; 
};

_storage = getText(missionConfigFile >> "ALYSIA_HOUSE" >> (typeOf _house) >> "storage");
if (_storage == "") exitWith {
	["Cette bâtisse ne peut pas contenir de coffre"] call public_fnc_error;
};

_action = 
[
	"Le coffre sera posé <t color='#DF0101'>définitivement</t> sur votre position actuelle. Vous pourrez le sortir ou le rentrer via le menu de votre maison",
	"Coffre de maison",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	if ([false, "storage", 1] call public_fnc_handleInv) then
	{
		[format["Vous avez posé<br/><t align='center' color='#FF8000'>1x %1</t>", ["life_inv_storage"] call public_fnc_varToStr]] call public_fnc_info;
		[[_house, (getPosATL player)], "TON_fnc_crateInstall", false] spawn life_fnc_MP;
	};
};
