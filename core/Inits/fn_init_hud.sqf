/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules

	["lyeed_IMG\data\player_hud\drugs.paa", "(g_drugs_consuming > 0)"],
	["lyeed_IMG\data\player_hud\blind.paa", "(player getVariable [""bandeau"",false])"],
*/

if (isNull (uiNameSpace getVariable ["RscTitlePlayer", displayNull])) then
{
	("hudLayer" call BIS_fnc_rscLayer) cutRsc ["RscTitlePlayer", "PLAIN"];

	disableSerialization;
	_hud = uiNameSpace getVariable ["RscTitlePlayer", displayNull];
	if (isNull _hud) exitWith {};

	_cagoule_active = false;

	_ctrl_blood = _hud displayCtrl 23500;
	_ctrl_fatigue = _hud displayCtrl 23501;
	_ctrl_hunger = _hud displayCtrl 23502;
	_ctrl_thirst = _hud displayCtrl 23503;

	_ctrl_weapon_mod = _hud displayCtrl 23530;
	_ctrl_weapon_ammo = _hud displayCtrl 23532;
	_ctrl_weapon_distance = _hud displayCtrl 23531;
	_ctrl_weapon_mod ctrlShow false;
	_ctrl_weapon_ammo ctrlShow false;
	_ctrl_weapon_active = false;

	_ctrl_gps_image = _hud displayCtrl 23540;
	_ctrl_gps_map = _hud displayCtrl 23539;
	_ctrl_gps_azimut = _hud displayCtrl 23542;
	_ctrl_gps_altitude = _hud displayCtrl 23543;
	_ctrl_gps_position = _hud displayCtrl 23544;
	_ctrl_gps_frame = _hud displayCtrl 23540;

	_ctrl_gps_frame ctrlShow false;
	_ctrl_gps_position ctrlShow false;
	_ctrl_gps_altitude ctrlShow false;
	_ctrl_gps_azimut ctrlShow false;
	_ctrl_gps_map ctrlShow false;

	_ctrl_gps_active = false;
	_gps_old_pos = [0,0,0];

	_ctrl_vehicle_speed = _hud displayCtrl 23520;
	_ctrl_vehicle_fuel = _hud displayCtrl 23522;
	_ctrl_vehicle_speed ctrlShow false;
	_ctrl_vehicle_fuel ctrlShow false;
	_ctrl_vehicle_active = false;

	createMarkerLocal ["myGPS", (getPos player)];
	"myGPS" setMarkerShapeLocal "ICON";
	"myGPS" setMarkerTypeLocal "Lyeed_GPS";
	"myGPS" setMarkerColorLocal "ColorBlue";
	"myGPS" setMarkerSizeLocal [0.7, 0.7];

	while {!(isNull _hud)} do
	{
		_ctrl_blood ctrlSetStructuredText parseText format
		[
			"<t align='right' font='RobotoRegular' size='2'>%1</t><t size='1.3' align='right'>%2</t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\blood.paa'/>",
			round((g_blood / 4000) * 100), "%"
		];

		_ctrl_fatigue ctrlSetStructuredText parseText format
		[
			"<t align='right' font='RobotoRegular' size='2'>%1</t><t size='1.3' align='right'>%2</t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\fatigue.paa'/>",
			round((1 - (getFatigue player)) * 100), "%"
		];

		_ctrl_hunger ctrlSetStructuredText parseText format
		[
			"<t align='right' font='RobotoRegular' size='2'>%1</t><t size='1.3' align='right'>%2</t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\hunger.paa'/>",
			g_hunger, "%"
		];

		_ctrl_thirst ctrlSetStructuredText parseText format
		[
			"<t align='right' font='RobotoRegular' size='2'>%1</t><t size='1.3' align='right'>%2</t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\thirst.paa'/>",
			g_thirst, "%"
		];

		_idc = 23510;
		{
			if (call compile (_x select 1)) then
			{
				(_hud displayCtrl _idc) ctrlSetText (_x select 0);
				(_hud displayCtrl _idc) ctrlShow true;
				_idc = _idc + 1;
			};
		} forEach 
		([
			["lyeed_IMG\data\player_hud\bleed.paa", "(g_bleed > 0)"],
			["lyeed_IMG\data\player_hud\regen.paa", "(g_regen_active && (g_bleed isEqualTo 0) && (g_hunger > 0) && (g_thirst > 0))"],
			["lyeed_IMG\data\player_hud\handcuffs.paa", "(player getVariable [""restrained"",false])"],
			["lyeed_IMG\data\player_hud\arrested.paa", "(player getVariable [""arrested"", false])"],
			["lyeed_IMG\data\player_hud\fight.paa", "(g_firstCombatActive)"],
			["lyeed_IMG\data\player_hud\speak.paa", "(g_speaking)"],
			["lyeed_IMG\data\player_hud\seatbelt.paa", "(g_seatbelt)"],
			["lyeed_IMG\data\player_hud\silence.paa", "(missionNamespace getVariable [""silence"",false])"],
			["lyeed_IMG\data\player_hud\sirene.paa", "((vehicle player) getVariable ['sireneOn',false])"],
			["lyeed_IMG\data\player_hud\sit.paa", "(player getVariable ['sit',false])"],
			["lyeed_IMG\data\player_hud\coma.paa", "(player getVariable ['is_coma',false])"],
			["lyeed_IMG\data\player_hud\weight.paa", "(g_carryWeight > g_maxWeight)"],
			["lyeed_IMG\data\player_hud\alcohol.paa", "(g_alcool > 0)"],
			["lyeed_IMG\data\player_hud\fatigue.paa", "((missionNamespace getVariable ['unlimitedRun', 0]) > 0)"],
			["lyeed_IMG\data\player_hud\bullet_touched.paa", "(player getVariable ['bullet_check', false])"],
			["lyeed_IMG\data\phone\main\sms.paa", "(([] call AlysiaClient_fnc_hasPhone) && ((count ([] call AlysiaClient_fnc_phone_get_messages_new)) > 0))"]
		]);

		for "_i" from _idc to 23516 do
		{
			(_hud displayCtrl _i) ctrlShow false;
		};

		if (((vehicle player) != player) && (driver (vehicle player) isEqualTo player)) then
		{
			_ctrl_vehicle_speed ctrlSetStructuredText parseText format
			[
				"<t align='center' font='digital' size='3'>%1</t><t align='right' font='PuristaLight' size='1.8'>km/h</t>",
				abs(round(speed player))
			];

			_fuel = "";
			for "_i" from 0 to round(((fuel (vehicle player)) * 10) - 1) do {_fuel = _fuel + "-"};
			_ctrl_vehicle_fuel ctrlSetStructuredText parseText format
			[
				"<t align='left'><img size='1.2' image='lyeed_IMG\data\player_hud\fuel.paa'/>  <t font='digital' size='2.4'>%1</t></t><t align='right' font='digital' size='1.2'>|</t>",
				_fuel
			];

			if (!_ctrl_vehicle_active) then
			{
				_ctrl_vehicle_speed ctrlShow true;
				_ctrl_vehicle_fuel ctrlShow true;
				_ctrl_vehicle_active = true;
			};
		} else {
			if (_ctrl_vehicle_active) then
			{
				_ctrl_vehicle_speed ctrlShow false;
				_ctrl_vehicle_fuel ctrlShow false;
				_ctrl_vehicle_active = false;
			};
		};

		if (((currentWeapon player) isEqualTo "") || ((vehicle player) != player)) then
		{
			if (_ctrl_weapon_active) then
			{
				_ctrl_weapon_mod ctrlShow false;
				_ctrl_weapon_ammo ctrlShow false;
				_ctrl_weapon_distance ctrlShow false;
				_ctrl_weapon_active = false;
			};
		} else {

			_ctrl_weapon_mod ctrlSetStructuredText parseText format
			[
				"<t align='right' font='RobotoRegular'><t size='1.4'>%1  </t></t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\weapon_mod.paa'/>",
				switch (currentWeaponMode player) do
				{
					case "Single": {"Coup par coup"};
					case "Burst": {"Rafale"};
					case "FullAuto": {"Automatique"};
					case "manual": {"Manuel"};
					default {"Inconnu"};
				}
			];

			_ctrl_weapon_ammo ctrlSetStructuredText parseText format
			[
				"<t align='right' font='RobotoRegular'><t size='1.4'>%1  </t></t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\weapon_bullet_name.paa'/>",
				if ((((weaponState player) select 3)) isEqualTo "") then {"Aucun"} else {getText(configFile >> "CfgMagazines" >> ((weaponState player) select 3) >> "displayName")}
			];

			_ctrl_weapon_distance ctrlSetStructuredText parseText format
			[
				"<t align='right' font='RobotoRegular'><t size='1.4'>%1  </t></t><img size='1.4' align='right' image='lyeed_IMG\data\player_hud\target.paa'/>",
				currentZeroing player
			];

			if (!_ctrl_weapon_active) then
			{
				_ctrl_weapon_mod ctrlShow true;
				_ctrl_weapon_ammo ctrlShow true;
				_ctrl_weapon_distance ctrlShow true;
				_ctrl_weapon_active = true;
			};
		};

		if (
				("ItemGPS" in (assignedItems player)) &&
				!(player getVariable ["restrained", false]) &&
				!(player getVariable ["surrender", false]) &&
				!(player getVariable ["is_coma", false]) &&
				(g_app isEqualTo "")
			) then {

			if (sunOrMoon < 0.2) then {
				_ctrl_gps_image ctrlSetText "lyeed_IMG\data\player_hud\gps_night.paa";
			} else {
				_ctrl_gps_image ctrlSetText "lyeed_IMG\data\player_hud\gps_day.paa";
			};

			if (((vehicle player) distance _gps_old_pos) > 2) then
			{
				"myGPS" setMarkerPosLocal (getPos (vehicle player));
				_gps_old_pos = getPos (vehicle player);
			};
			"myGPS" setMarkerDirLocal floor((getDir (vehicle player)) - 40);
			
			_ctrl_gps_azimut ctrlSetStructuredText parseText format
			[
				"<t size='0.7' font='tf_font_segments' color='#000000' align='right'>%1</t>",
				round(getDir player)
			];

			_ctrl_gps_altitude ctrlSetStructuredText parseText format
			[
				"<t size='0.7' font='tf_font_segments' color='#000000' align='right'>%1</t>",
				round((getPosASL (vehicle player)) select 2)
			];

			_ctrl_gps_position ctrlSetStructuredText parseText format
			[
				"<t size='0.7' font='tf_font_segments' color='#000000' align='right'>%1</t>",
				(mapGridPosition player)
			];

			if ((vehicle player) isEqualTo player) then {
				_ctrl_gps_map ctrlMapAnimAdd [0, 0.05, player];
			} else {
				_ctrl_gps_map ctrlMapAnimAdd [0, 0.15, (vehicle player)];
			};
			ctrlMapAnimCommit _ctrl_gps_map;

			if (!_ctrl_gps_active) then
			{
				"myGPS" setMarkerAlphaLocal 1;
				_ctrl_gps_azimut ctrlShow true;
				_ctrl_gps_position ctrlShow true;
				_ctrl_gps_altitude ctrlShow true;
				_ctrl_gps_map ctrlShow true;
				_ctrl_gps_frame ctrlShow true;
				_ctrl_gps_active = true;
			};
		} else {
			if (_ctrl_gps_active) then
			{
				"myGPS" setMarkerAlphaLocal 0;
				_ctrl_gps_azimut ctrlShow false;
				_ctrl_gps_position ctrlShow false;
				_ctrl_gps_altitude ctrlShow false;
				_ctrl_gps_map ctrlShow false;
				_ctrl_gps_frame ctrlShow false;
				_ctrl_gps_active = false;
			};
		};

		if ((headgear player) isEqualTo "mgsr_headbag") then
		{
			25 cutText ["", "BLACK FADED"];
			_cagoule_active = true;
		} else {
			if (_cagoule_active) then
			{
				25 cutText ["", "PLAIN"];
				_cagoule_active = false;
			};
		};

		if (!(player getVariable ["is_coma", false]) && (alive player)) then
		{
			if ((goggles player) isEqualTo "G_Bandanna_blk") then {
				if ((player getVariable ["tf_voiceVolume", 0]) > 0) then {player setVariable ["tf_voiceVolume", 0, true]};
			} else {
				if ((player getVariable ["tf_voiceVolume", 0]) isEqualTo 0) then {player setVariable ["tf_voiceVolume", 1, true]};
			};
		};

		uiSleep 0.3;
	};
};
