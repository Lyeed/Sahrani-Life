/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

player setVariable ["tf_globalVolume", 0];
if ((player getVariable ["tf_voiceVolume", 0]) > 0) then {
	player setVariable ["tf_voiceVolume", 0, true];
};

0 cutText["Vous êtes en soin intensif ...", "BLACK FADED"];
0 cutFadeOut 9999999;

/*
**          SKULL
*/
private["_skull", "_inv"];
_skull = createVehicle ["Land_HumanSkull_F", (getPos player), [], 0, "CAN_COLLIDE"];
_skull setDir random(360);

_data = [];

/* money */
if (g_cash > 0) then {
	_data pushBack ["money", g_cash];
};

/* virtual */
{
	_var = missionNamespace getVariable[format["inv_%1", _x], 0];
	if (_var > 0) then {
		_data pushBack ["virtual", [_x, _var]];
	};
} forEach (missionNamespace getVariable ["g_inv_items", []]);

/* arma */
if ((primaryWeapon player) != "") then {_data pushBack ["arma", (primaryWeapon player)]};
if ((secondaryWeapon player) != "") then {_data pushBack ["arma", (secondaryWeapon player)]};
if ((handgunWeapon player) != "") then {_data pushBack ["arma", (handgunWeapon player)]};
if ((uniform player) != "") then {_data pushBack ["arma", (uniform player)]};
if ((vest player) != "") then {_data pushBack ["arma", (vest player)]};
if ((backpack player) != "") then {_data pushBack ["arma", (backpack player)]};
if ((goggles player) != "") then {_data pushBack ["arma", (goggles player)]};
if ((headgear player) != "") then {_data pushBack ["arma", (headgear player)]};
if ((binocular player) != "") then {_data pushBack ["arma", (binocular player)]};
{
	if (_x != "") then {
		_data pushBack ["arma", _x];
	};
} forEach ((primaryWeaponItems player) + (assignedItems player) + (uniformItems player) + (vestItems player) + (backpackItems player));

_skull setVariable ["inv", _data, true];

if (!(isNull g_killer)) then {
	_skull setVariable ["killer", (g_killer getVariable["realname", (name g_killer)]), true];
};

_skull setVariable ["info", [([] call AlysiaClient_fnc_strDate), ([] call AlysiaClient_fnc_strTime), (player getVariable ["realname", profileName]), g_nationality, g_sexe], true];
/* ************* */

hideBody player;
{
	deleteVehicle _x;
} forEach (nearestObjects [player, ["WeaponHolderSimulated", "GroundWeaponHolder"], 5]);

/* SAVE */
[] call AlysiaClient_fnc_stripDownPlayer;

{
	missionNamespace setVariable [(format["inv_%1", _x]), 0];
} forEach (g_inv_items);

g_is_alive = false;
g_cash = 0;
g_blood = 4000;
g_bleed = 0;
g_alcool = 0;
g_hunger = 100;
g_thirst = 100;
[] call AlysiaDB_fnc_query_update_usual;
/* **** */

resetCamShake;

g_adrenaline = 0;
g_morphine = 0;
g_action_inUse = false;
g_killer = ObjNull;
