/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

disableSerialization;

private
[
	"_hud",
	"_volume",
	"_ctrl_hunger",
	"_ctrl_thirst",
	"_ctrl_fatigue",
	"_ctrl_blood",
	"_idc",
	"_ico_1",
	"_ico_2",
	"_ico_3",
	"_ico_4",
	"_ico_5",
	"_ico_6",
	"_ico_7",
	"_ctrl_speed",
	"_list_vehicle",
	"_list_weapon",
	"_list_map",
	"_ctrl_speak"
];

if (!(isNull (uiNameSpace getVariable ["RscHudPlayer", displayNull]))) exitWith {};

showGPS false;

8 cutRsc ["RscHudPlayer", "PLAIN"];

_hud = uiNameSpace getVariable ["RscHudPlayer", displayNull];

[] spawn
{
	disableSerialization;
	_presentation = (uiNameSpace getVariable ["RscHudPlayer", displayNull]) displayCtrl 23537;
	while {((ctrlFade _presentation) < 1)} do
	{
		_presentation ctrlSetFade ((ctrlFade _presentation) + 0.01);
		_presentation ctrlCommit 0;
		sleep 0.05;
	};
	ctrlDelete _presentation;
};

_ctrl_speak = _hud displayCtrl 23501;
_ctrl_hunger = _hud displayCtrl 23502;
_ctrl_thirst = _hud displayCtrl 23503;
_ctrl_fatigue = _hud displayCtrl 23504;
_ctrl_blood = _hud displayCtrl 23505;
_ctrl_speed = _hud displayCtrl 23506;

_list_map =
[
	(_hud displayCtrl 23538),
	(_hud displayCtrl 23539),
	(_hud displayCtrl 23540),
	(_hud displayCtrl 23541),
	(_hud displayCtrl 23542)
];

_list_vehicle =
[
	(_hud displayCtrl 23520),
	(_hud displayCtrl 23521),
	(_hud displayCtrl 23522),
	(_hud displayCtrl 23523),
	(_hud displayCtrl 23524)
];

_list_weapon =
[
	(_hud displayCtrl 23530),
	(_hud displayCtrl 23531),
	(_hud displayCtrl 23532),
	(_hud displayCtrl 23533),
	(_hud displayCtrl 23534),
	(_hud displayCtrl 23535),
	(_hud displayCtrl 23536)
];

_ico_1 = _hud displayCtrl 23510;
_ico_2 = _hud displayCtrl 23511;
_ico_3 = _hud displayCtrl 23512;
_ico_4 = _hud displayCtrl 23513;
_ico_5 = _hud displayCtrl 23514;
_ico_6 = _hud displayCtrl 23515;
_ico_7 = _hud displayCtrl 23516;

while {true} do
{
	_ctrl_hunger progressSetPosition (g_hunger / 100);
	_ctrl_thirst progressSetPosition (g_thirst / 100);
	_ctrl_fatigue ctrlSetStructuredText parseText format["<t align='center' size='1.3'>%1%2</t>", round((getFatigue player) * 100), "%"];
	_ctrl_blood ctrlSetStructuredText parseText format["<t align='center' size='1.3'>%1%2</t>", round((g_blood / 4000) * 100), "%"];
	_ctrl_speed ctrlSetStructuredText parseText format["<t align='center' size='2.2'>%1</t>", abs(round(speed player))];
	
	_volume = switch (TF_speak_volume_level) do
	{
		case "whispering": {"Chuchote"};
		case "normal": {"Normal"};
		case "yelling": {"Crie"};
		default {"Inconnu"};
	};
	_ctrl_speak ctrlSetStructuredText parseText format["<t align='left' size='1.2'>%1</t>", _volume];
	
	_idc = 1;
	{
		if (call compile format["%1", (_x select 1)]) then
		{
			_ctrl = call compile format["_ico_%1", _idc];
			_ctrl ctrlSetText (_x select 0);
			_ctrl ctrlShow true;
			_idc = _idc + 1;
		};
	} forEach 
	([
		["\lyeed_IMG\data\player_hud\bleed.paa", "(g_bleed > 0)"],
		["\lyeed_IMG\data\player_hud\regen.paa", "(g_regen_active && (g_bleed isEqualTo 0))"],
		["\lyeed_IMG\data\player_hud\drugs.paa", "(g_drugs_consuming > 0)"],
		["\lyeed_IMG\data\player_hud\handcuffs.paa", "(player getVariable [""restrained"", false])"],
		["\lyeed_IMG\data\player_hud\blind.paa", "(player getVariable [""bandeau"", false])"],
		["\lyeed_IMG\data\player_hud\arrested.paa", "(g_arrested)"],
		["\lyeed_IMG\data\player_hud\fight.paa", "(g_firstCombatActive)"],
		["\lyeed_IMG\data\player_hud\speak.paa", "(g_speaking)"]
	]);

	for "_i" from _idc to 7 do
	{
		(call compile format["_ico_%1", _i]) ctrlShow false;
	};

	if (((vehicle player) != player) && (driver (vehicle player) isEqualTo player)) then
	{
		(_list_vehicle select 4) progressSetPosition ((fuel (vehicle player)) / 1);
		(_list_vehicle select 0) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(vehicle player) >> "displayName")];

		{
			_x ctrlShow true;
		} forEach (_list_vehicle);
	} else {
		{
			_x ctrlShow false;
		} forEach (_list_vehicle);
	};

	if (((weaponState player) select 0) isEqualTo "") then
	{
		{
			_x ctrlShow false;
		} forEach (_list_weapon);
	} else {
		(_list_weapon select 2) ctrlSetStructuredText parseText format["<t align='center' size='1.2'>%1</t>", getText(configFile >> "CfgWeapons" >> ((weaponState player) select 0) >> "displayName")];
		if ((((weaponState player) select 3)) isEqualTo "") then {
			(_list_weapon select 4) ctrlSetStructuredText parseText "<t align='left'>Aucune</t>";
		} else {
			(_list_weapon select 4) ctrlSetStructuredText parseText format["<t align='left'>%1</t>", getText(configFile >> "CfgMagazines" >> ((weaponState player) select 3) >> "displayName")];
		};
		
		_mod = switch (currentWeaponMode player) do
		{
			case "Single": {"Coup par coup"};
			case "Burst": {"Rafale"};
			case "FullAuto": {"Automatique"};
			case "manual": {"Manuel"};
			default {"Inconnu"};
		};
		(_list_weapon select 6) ctrlSetStructuredText parseText format["<t align='left'>%1</t>", _mod];

		{
			_x ctrlShow true;
		} forEach (_list_weapon);
	};

	if ("ItemGPS" in (assignedItems player)) then
	{
		(_list_map select 4) ctrlSetStructuredText parseText format["<t align='center' font='PuristaBold'>%1</t>", (mapGridPosition player)];

		if ((vehicle player) isEqualTo player) then {
			(_list_map select 1) ctrlMapAnimAdd [0, 0.05, player];
		} else {
			(_list_map select 1) ctrlMapAnimAdd [0, 0.09, (vehicle player)];
		};
		ctrlMapAnimCommit (_list_map select 1);

		{
			_x ctrlShow true;
		} forEach (_list_map);
	} else {
		{
			_x ctrlShow false;
		} forEach (_list_map);
	};

	sleep 0.3;
};