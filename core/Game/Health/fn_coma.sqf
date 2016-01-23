/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_time", "_display", "_ctrl_left", "_id", "_ctrl_suicide"];

if (g_staff_god) exitWith {};
if (player getVariable ["is_coma", false]) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayComa")) exitWith {};

if (player getVariable ["surrender", false]) then {
	player setVariable ["surrender", false, true];
};
if (player getVariable ["restrained", false]) then {
	player setVariable ["restrained", false, true];
};

disableSerialization;
_display = findDisplay 350;
if (isNull _display) exitWith {};

_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

ctrlShow[352, false];
ctrlShow[353, false];
ctrlShow[354, false];

_ctrl_left = _display displayCtrl 351;
_ctrl_suicide = _display displayCtrl 355;
_time = 1000;

g_bleed = 0;
g_blood = 1;

player setVariable ["tf_globalVolume", 0];
player setVariable ["tf_voiceVolume", 0, true];
player setVariable ["is_coma", true, true];

while {(_time > 0) && (alive player) && (player getVariable ["is_coma", false])} do
{
	if ((vehicle player) != player) then { 
		player action ["Eject", (vehicle player)]; 
	};
	if ((animationState player) != "acts_InjuredLookingRifle01") then {
		[player, "acts_InjuredLookingRifle01"] remoteExecCall ["switchMove", -2];
	};
	
	player setOxygenRemaining 1;

	_ctrl_left ctrlSetStructuredText parseText format["<t align='center' size='2'>Il vous reste %1 secondes à vivre</t>", _time];
	if (_time > (1000 - (60 * 2))) then {
		_ctrl_suicide ctrlSetStructuredText parseText format["<t align='center' size='1.5'>Vous pouvez vous suicider dans %1 secondes</t>", (_time - (1000 - (60 * 2)))];
	} else {
		ctrlShow[352, true];
		ctrlShow[354, true];
		ctrlShow[353, true];
		ctrlShow[355, false];
	};
	
	sleep 1;
	
	_time = _time - 1;
	if (_time isEqualTo 1) then
	{
		player setDamage 1; 
	};
};

if (alive player) then 
{
	if (g_thirst < 10) then {
		g_thirst = 15; 
	};
	
	if (g_hunger < 10) then {
		g_hunger = 15; 
	};

	player switchCamera "Internal";
	player setFatigue 1;
	[100] call public_fnc_handleBlood;
	cutText ["", "BLACK IN", 20, true];
	player setVariable ["tf_voiceVolume", 1, true];
	[player, ""] remoteExecCall ["switchMove", -2];
};

if (player getVariable ["is_coma", false]) then {
	player setVariable ["is_coma", false, true];
};

if (player getVariable ["medic_request", false]) then {
	player getVariable ["medic_request", false, true];
};

_display displayRemoveEventHandler ["KeyDown", _id];
closeDialog 0;
