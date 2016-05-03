/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_time", "_display", "_ctrl_left", "_id", "_ctrl_suicide", "_timer"];

if (g_staff_god) exitWith {};
if (player getVariable ["is_coma", false]) exitWith {};
if (!(isNull (findDisplay 350))) exitWith {};

1 fadeSound 0;

if (visibleMap) then
{
	openMap false;
	waitUntil {!visibleMap};
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

createDialog "RscDisplayComa";

if (player getVariable ["surrender", false]) then {player setVariable ["surrender", false, true]};
if (player getVariable ["restrained", false]) then {player setVariable ["restrained", false, true]};

{
	if (isPlayer _x) then
	{
		if (_x getVariable ["is_coma", false]) then {
			[_x, false] spawn AlysiaClient_fnc_action_body_drop;
		} else {
			[_x, false] spawn AlysiaClient_fnc_stopescort;
		};
	} else {
		if (isClass(missionConfigFile >> "ALYSIA_DYN_OBJECTS" >> typeOf(_x))) then {
			detach _x;
		};
	};
} forEach attachedObjects player;

if (missionNamespace getVariable ["calling", false]) then
{
	[true, false] call AlysiaClient_fnc_APP_phone_call_hangup;
};

disableSerialization;
_display = findDisplay 350;
if (isNull _display) exitWith {};

_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

_ctrl_left = _display displayCtrl 351;
_ctrl_suicide = _display displayCtrl 355;
_time = getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "coma" >> "timer");
_timer = _time;

g_blood = 10;
g_bleed = 0;
g_coma_dead = false;
g_coma_suicide = false;

if ((vehicle player) != player) then {
	player action ["Eject", (vehicle player)];
};

player setVariable ["is_coma", true, true];
player setVariable ["tf_globalVolume", 0];
if ((player getVariable ["tf_voiceVolume", 0]) > 0) then {
	player setVariable ["tf_voiceVolume", 0, true];
};

while {(_time > 0) && !g_coma_dead && (player getVariable ["is_coma", false])} do
{
	if ((vehicle player) isEqualTo player) then
	{
		_animation = switch (true) do
		{
			case (typeOf(attachedTo player) in ["HospitalTable_F","HealTable_F","Siuuz_Brancard_01_F"]): {"ainjppnemstpsnonwrfldnon"};
			case (typeOf(attachedTo player) isEqualTo "HospitalBed_F"): {"ainjppnemrunsnonwnondb_still"};
			case (player getVariable ["heart_attack", false]): {"ainjppnemrunsnonwnondb"};
			default {"acts_InjuredLookingRifle01"};
		};
		if ((animationState player) != _animation) then
		{
			[player, _animation] remoteExecCall ["switchMove", 0];
		};
	};
	
	player setOxygenRemaining 1;
	playSound "death";

	_reduce = switch (true) do
	{
		case (player getVariable ["bullet_operation_inUse", false]):
		{
			_ctrl_suicide ctrlSetStructuredText parseText "<t align='center' size='1.5'>Vous êtes en train d'être opéré. Croisez les doigts pour que l'opération se passe bien</t>";
			_ctrl_suicide ctrlShow true;
			ctrlShow[352, false];
			ctrlShow[353, false];
			ctrlShow[354, false];
			false;
		};
		case (player getVariable ["bed_awake", false]):
		{
			_ctrl_suicide ctrlSetStructuredText parseText "<t align='center' size='1.5'>Vous êtes en salle de réveil dans un centre hospitalier. Vous devriez vous réveiller très bientôt</t>";
			_ctrl_suicide ctrlShow true;
			ctrlShow[352, false];
			ctrlShow[353, false];
			ctrlShow[354, false];
			false;
		};
		case (g_adrenaline > 0):
		{
			_ctrl_suicide ctrlSetStructuredText parseText "<t align='center' size='1.5'>Vous êtes sous l'effet de l'adrénaline</t>";
			_ctrl_suicide ctrlShow true;
			ctrlShow[352, false];
			ctrlShow[353, false];
			ctrlShow[354, false];
			false;
		};
		case (_time > (_timer - (60 * 3))):
		{
			_ctrl_suicide ctrlSetStructuredText parseText format
			[
				"<t align='center' size='1.5'>Vous pouvez vous suicider dans %1</t>",
				[(_time - (_timer - (60 * 3))) , "H:MM:SS"] call CBA_fnc_formatElapsedTime
			];
			_ctrl_suicide ctrlShow true;
			ctrlShow[352, false];
			ctrlShow[353, false];
			ctrlShow[354, false];
			true;
		};
		default
		{
			_ctrl_suicide ctrlShow false;
			ctrlShow[352, true];
			ctrlShow[353, true];
			ctrlShow[354, true];
			true;
		};
	};

	if (_reduce) then
	{
		_ctrl_left ctrlSetStructuredText parseText format
		[
			"<t align='center' size='2'>Il vous reste %1 à vivre</t>",
			[_time , "H:MM:SS"] call CBA_fnc_formatElapsedTime
		];

		_time = _time - 1;
		if (_time isEqualTo 0) then
		{
			g_coma_dead = true;
			player setDamage 1;
		};
	} else {
		_ctrl_left ctrlSetStructuredText parseText "<t align='center'>Vous êtes stabilisé</t>";
	};

	uiSleep 1;
};

_display displayRemoveEventHandler ["KeyDown", _id];
closeDialog 0;
if (player getVariable ["is_coma", false]) then {player setVariable ["is_coma", false, true]};
if (player getVariable ["medic_request", false]) then {player setVariable ["medic_request", false, true]};

if (!g_coma_dead) then
{
	if (g_thirst < 10) then {[15] call AlysiaClient_fnc_handleThirst};
	if (g_hunger < 10) then {[15] call AlysiaClient_fnc_handleHunger};
	if ((player getVariable ["tf_voiceVolume", 0]) isEqualTo 0) then {player setVariable ["tf_voiceVolume", 1, true]};

	player switchCamera "Internal";
	player setFatigue 1;
	cutText ["", "BLACK IN", 20, true];

	20 fadeSound 1;
	for "_i" from 1 to 10 do
	{
		if (!(player getVariable ["is_coma", false])) then
		{
			if (player getVariable ["bed_awake", false]) then
			{
				[4000 / 10] call AlysiaClient_fnc_handleBlood;
			};
			player setVariable ["tf_globalVolume", (_i / 10)];
			uiSleep 2;
		};
	};
	[player, ""] remoteExecCall ["switchMove", 0];
	if (player getVariable ["bed_awake", false]) then {player setVariable ["bed_awake", false, true]};
};

if (!(isNull (attachedTo player))) then {detach player};
