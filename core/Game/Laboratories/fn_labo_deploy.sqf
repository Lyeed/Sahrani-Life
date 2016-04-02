/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_object", "_action_2", "_action_1", "_marker"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};
if (!(isClass(missionConfigFile >> "ALYSIA_LABORATORIES" >> _item))) exitWith {};
if (playerSide != civilian) exitWith {
	["Vous ne pouvez pas utiliser cet objet"] call AlysiaClient_fnc_error;
};

if (!(isNull g_objPut)) exitWith {
	["Vous deployez déjà un élèment"] call AlysiaClient_fnc_error;
};

if (!(isNull g_laboratory)) exitWith {
	["Vous possédez déjà un laboratoire"] call AlysiaClient_fnc_error;
};

_object = getText(missionConfigFile >> "ALYSIA_LABORATORIES" >> _item >> "object") createVehicle [0, 0, 0];
_object attachTo [player, [0, 2, 1]];
g_objPut = _object;

_action_1 = player addAction [format["Placer <t color='#FFFF33'>%1</t>", [_item] call AlysiaClient_fnc_itemGetName],
{
	detach g_objPut;
}, "", 9999992, true, true, "",'!isNull g_objPut'];

_action_2 = player addAction ["<t color='#ff8c8c'>Annuler</t> la pose", 
{
	deleteVehicle g_objPut;
}, "", 9999991, true, true, "",'!isNull g_objPut'];

waitUntil {((isNull _object) || (isNull (attachedTo _object)))};

g_objPut = objNull;

player removeAction _action_1;
player removeAction _action_2;

if (isNull _object) exitWith {};

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then
{
	g_laboratory = _object;

	_object setPos [((getPos _object) select 0), ((getPos _object) select 1), 0];

	_marker = createMarkerLocal ["laboratory", (getPosATL _object)];
	_marker setMarkerTextLocal ([_item] call AlysiaClient_fnc_itemGetName);
	_marker setMarkerColorLocal "ColorRed";
	_marker setMarkerTypeLocal "loc_Bunker";

	[(getPlayerUID player), _object, _item] remoteExec ["AlysiaServer_fnc_laboratory_insert", 2];
} else {
	["Impossible de trouver l'objet dans votre inventaire"] call AlysiaClient_fnc_error;
	deleteVehicle _object;
};
