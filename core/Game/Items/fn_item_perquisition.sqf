/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_region", "_item", "_owner", "_target"];
_region = [_this, 0, "", [""]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_side = [_this, 2, sideUnknown, [sideUnknown]] call BIS_fnc_param;

if ((_region isEqualTo "") || (_item isEqualTo "") || (_side isEqualTo sideUnknown)) exitWith {};

if ((vehicle player) != player) exitWith {["Vous devez être à pied."] call AlysiaClient_fnc_info};

_target = cursorObject;
if (!isClass(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_target))) exitWith {
	["Vous n'êtes près d'aucun bâtiment."] call AlysiaClient_fnc_error;
};

if ((player distance _target) > 30) exitWith {
	["Vous êtes trop loin du bâtiment."] call AlysiaClient_fnc_error;
};

if (playerSide != _side) exitWith {
	["Vous n'êtes pas autorisé à utilisé cet objet."] call AlysiaClient_fnc_error;
};

if (_region != ([] call AlysiaClient_fnc_getRegion)) exitWith {
	["Ce papier n'est pas valable dans la region où vous êtes."] call AlysiaClient_fnc_error;
};

_owner = _target getVariable ["house_owner", []];
if (_owner isEqualTo []) then {
	["Ce bâtiment n'a pas été acheté."] call AlysiaClient_fnc_error;
};

if (_target getVariable ["perquisition", false]) exitWith {
	["Ce bâtiment est déja en train d'être perquisitionné."] call AlysiaClient_fnc_error;
};

_action = 
[
	format
	[
		"Vous êtes sur le point d'utiliser <t color='#FF8000'>%1</t>.<br/>La perquisition sera valide 10 minutes.<br/>Vous pourrez intéragir avec le contenu du bâtiment pendant ce laps de temps.",
		[_item] call AlysiaClient_fnc_itemGetName
	],
	"Perquisition/Fouille",
	"Continuer",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then
	{
		["Perquisition débuté.<br/>Vous avez <t color='#58D3F7'>10 minutes</t>."] call AlysiaClient_fnc_info;
		[_target] remoteExec ["AlysiaServer_fnc_house_perquisition", 2];
	} else {
		["Impossible de trouver le papier dans votre inventaire."] call AlysiaClient_fnc_error;
	};
};
