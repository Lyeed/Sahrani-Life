/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules

	["lyeed_IMG\data\player_hud\drugs.paa", "(g_drugs_consuming > 0)"],
	["lyeed_IMG\data\player_hud\blind.paa", "(player getVariable [""bandeau"",false])"],
*/
private "_move_ctrl";
_move_ctrl =
{
	private["_ctrl", "_type", "_distance", "_default_position", "_math", "_hide_end", "_position_end"];
	
	disableSerialization;
	_ctrl = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;

	if (isNull _ctrl) exitWith {};

	_type = [_this, 1, "", [""]] call BIS_fnc_param;
	_hide_end = [_this, 2, true, [true]] call BIS_fnc_param;

	_default_position = ctrlPosition _ctrl;
	_distance = [_this, 3, (_default_position select 2), [0]] call BIS_fnc_param;
	_math = _distance / 13;

	if (!(ctrlShown _ctrl)) then {_ctrl ctrlShow true};
	if (profileNamespace getVariable ["ALYSIA_hud_animation", true]) then
	{
		switch (_type) do
		{
			case "right":
			{
				_position_end = (_default_position select 0) + _distance;
				while {((((ctrlPosition _ctrl) select 0) + _math) < _position_end)} do
				{
					_ctrl ctrlSetPosition [((ctrlPosition _ctrl) select 0) + _math, (_default_position select 1)];
					_ctrl ctrlCommit 0;
					uiSleep 0.1;
				};
			};
			case "left":
			{
				_position_end = (_default_position select 0) - _distance;
				while {((((ctrlPosition _ctrl) select 0) - _math) > _position_end)} do
				{
					_ctrl ctrlSetPosition [((ctrlPosition _ctrl) select 0) - _math, (_default_position select 1)];
					_ctrl ctrlCommit 0;
					uiSleep 0.1;
				};
			};
		};
	} else {
		switch (_type) do
		{
			case "right": {_position_end = (_default_position select 0) + _distance};
			case "left": {_position_end = (_default_position select 0) - _distance};
		};
	};

	_ctrl ctrlSetPosition [_position_end, (_default_position select 1)];
	_ctrl ctrlCommit 0;
	if (_hide_end) then {_ctrl ctrlShow false};
};

if (isNull (uiNameSpace getVariable ["RscTitlePlayer", displayNull])) then
{
	8 cutRsc ["RscTitlePlayer", "PLAIN"];

	disableSerialization;
	_hud = uiNameSpace getVariable ["RscTitlePlayer", displayNull];
	if (isNull _hud) exitWith {};

	_cagoule_active = false;
	/*===========================
	  ===       PERCENT       ===
	  =========================== */
	_ctrl_blood = _hud displayCtrl 23500;
	_ctrl_fatigue = _hud displayCtrl 23501;
	_ctrl_hunger = _hud displayCtrl 23502;
	_ctrl_thirst = _hud displayCtrl 23503;

	/*===========================
	  ===       WEAPONS       ===
	  =========================== */
	_ctrl_weapon_mod = _hud displayCtrl 23530;
	_ctrl_weapon_ammo = _hud displayCtrl 23532;

	{
		(_hud displayCtrl _x) ctrlShow false;
	} forEach ([23530, 23531, 23532, 23533]);
	_ctrl_weapon_active = false;
	_ctrl_weapon_first = true;
	/*===========================
	  ===         GPS         ===
	  =========================== */
	_ctrl_gps_map = _hud displayCtrl 23539;
	_ctrl_gps_text = _hud displayCtrl 23542;

	{
		(_hud displayCtrl _x) ctrlShow false;
	} forEach ([23538, 23539, 23540, 23541, 23542]);
	_ctrl_gps_active = false;
	_ctrl_gps_first = true;
	/*===========================
	  ===       VEHICLE       ===
	  ===========================*/
	_ctrl_vehicle_speed = _hud displayCtrl 23520;
	_ctrl_vehicle_fuel = _hud displayCtrl 23522;

	{
		(_hud displayCtrl _x) ctrlShow false;
	} forEach ([23520, 23521, 23522, 23523]);
	_ctrl_vehicle_active = false;
	_ctrl_vehicle_first = true;

	while {!(isNull _hud)} do
	{
		/*===========================
		  ===       PERCENT       ===
		  =========================== */
		_ctrl_blood ctrlSetStructuredText parseText format
		[
			"<img size='1.4' image='lyeed_IMG\data\player_hud\blood.paa'/><t align='right' font='Impact'><t size='1.7'>%1</t><t size='1.3'>%2</t></t>",
			round((g_blood / 4000) * 100), "%"
		];

		_ctrl_fatigue ctrlSetStructuredText parseText format
		[
			"<img size='1.4' image='lyeed_IMG\data\player_hud\fatigue.paa'/><t align='right' font='Impact'><t size='1.7'>%1</t><t size='1.3'>%2</t></t>",
			round((1 - (getFatigue player)) * 100), "%"
		];

		_ctrl_hunger ctrlSetStructuredText parseText format
		[
			"<img size='1.4' image='lyeed_IMG\data\player_hud\hunger.paa'/><t align='right' font='Impact'><t size='1.7'>%1</t><t size='1.3'>%2</t></t>",
			g_hunger, "%"
		];

		_ctrl_thirst ctrlSetStructuredText parseText format
		[
			"<img size='1.4' image='lyeed_IMG\data\player_hud\thirst.paa'/><t align='right' font='Impact'><t size='1.7'>%1</t><t size='1.3'>%2</t></t>",
			g_thirst, "%"
		];

		/*===========================
		  ===        ICONS        ===
		  =========================== */
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
			["lyeed_IMG\data\player_hud\alcohol.paa", "(g_alcool > 0)"]
		]);

		for "_i" from _idc to 23516 do
		{
			(_hud displayCtrl _i) ctrlShow false;
		};

		/*===========================
		  ===       VEHICLE       ===
		  =========================== */
		if (((vehicle player) != player) && (driver (vehicle player) isEqualTo player)) then
		{
			_ctrl_vehicle_speed ctrlSetStructuredText parseText format
			[
				"<t align='center'><t size='1.3'>%1</t><t size='1'>km/h</t></t>",
				abs(round(speed player))
			];

			_ctrl_vehicle_fuel ctrlSetStructuredText parseText format
			[
				"<img size='1.4' image='lyeed_IMG\data\player_hud\fuel.paa'/><t align='right' font='Impact'><t size='1.7'>%1</t><t size='1.3'>%2</t></t>",
				round((fuel (vehicle player)) * 100), "%"
			];

			if (!_ctrl_vehicle_active) then
			{
				if (_ctrl_vehicle_first) then
				{
					_ctrl_vehicle_first = false;
					{
						(_hud displayCtrl _x) ctrlShow true;
					} forEach ([23520, 23521, 23522, 23523]);
				} else {
					[(_hud displayCtrl 23520), "right", false] spawn _move_ctrl;
					[(_hud displayCtrl 23521), "right", false] spawn _move_ctrl;
					[(_hud displayCtrl 23522), "left", false] spawn _move_ctrl;
					[(_hud displayCtrl 23523), "left", false] spawn _move_ctrl;
				};
				_ctrl_vehicle_active = true;
			};
		} else {
			if (_ctrl_vehicle_active) then
			{
				_ctrl_vehicle_active = false;
				[(_hud displayCtrl 23520), "left", true] spawn _move_ctrl;
				[(_hud displayCtrl 23521), "left", true] spawn _move_ctrl;
				[(_hud displayCtrl 23522), "right", true] spawn _move_ctrl;
				[(_hud displayCtrl 23523), "right", true] spawn _move_ctrl;
			};
		};

		/*===========================
		  ===       WEAPONS       ===
		  =========================== */
		if (((currentWeapon player) isEqualTo "") || ((vehicle player) != player)) then
		{
			if (_ctrl_weapon_active) then
			{
				_ctrl_weapon_active = false;
				[(_hud displayCtrl 23530), "right", true] spawn _move_ctrl;
				[(_hud displayCtrl 23531), "right", true] spawn _move_ctrl;
				[(_hud displayCtrl 23532), "right", true] spawn _move_ctrl;
				[(_hud displayCtrl 23533), "right", true] spawn _move_ctrl;
			};
		} else {

			_mod = switch (currentWeaponMode player) do
			{
				case "Single": {"Coup par coup"};
				case "Burst": {"Rafale"};
				case "FullAuto": {"Automatique"};
				case "manual": {"Manuel"};
				default {"Inconnu"};
			};

			_ctrl_weapon_mod ctrlSetStructuredText parseText format
			[
				"<img size='1.4' image='lyeed_IMG\data\player_hud\weapon_mod.paa'/><t align='right'><t size='1.3'>%1</t></t>",
				_mod
			];

			_ctrl_weapon_ammo ctrlSetStructuredText parseText format
			[
				"<img size='1.4' image='lyeed_IMG\data\player_hud\weapon_bullet_name.paa'/><t align='right'><t size='1.3'>%1</t></t>",
				if ((((weaponState player) select 3)) isEqualTo "") then {"Aucune"} else {getText(configFile >> "CfgMagazines" >> ((weaponState player) select 3) >> "displayName")}
			];

			if (!_ctrl_weapon_active) then
			{
				if (_ctrl_weapon_first) then 
				{
					_ctrl_weapon_first = false;
					{
						(_hud displayCtrl _x) ctrlShow true;
					} forEach ([23530, 23531, 23532, 23533]);
				} else {
					[(_hud displayCtrl 23530), "left", false] spawn _move_ctrl;
					[(_hud displayCtrl 23531), "left", false] spawn _move_ctrl;
					[(_hud displayCtrl 23532), "left", false] spawn _move_ctrl;
					[(_hud displayCtrl 23533), "left", false] spawn _move_ctrl;
				};
				_ctrl_weapon_active = true;
			};
		};

		/*===========================
		  ===         GPS         ===
		  =========================== */
		if ("ItemGPS" in (assignedItems player)) then
		{
			_ctrl_gps_text ctrlSetStructuredText parseText format["<t align='center' font='PuristaBold'>%1</t>", (mapGridPosition player)];

			if ((vehicle player) isEqualTo player) then {
				_ctrl_gps_map ctrlMapAnimAdd [0, 0.05, player];
			} else {
				_ctrl_gps_map ctrlMapAnimAdd [0, 0.09, (vehicle player)];
			};
			ctrlMapAnimCommit _ctrl_gps_map;

			if (!_ctrl_gps_active) then
			{
				if (_ctrl_gps_first) then
				{
					_ctrl_gps_first = false;
					{
						(_hud displayCtrl _x) ctrlShow true;
					} forEach ([23538, 23539, 23540, 23541, 23542]);
				} else {
					[(_hud displayCtrl 23538), "left", false, 0.4] spawn _move_ctrl;
					[(_hud displayCtrl 23539), "left", false, 0.4] spawn _move_ctrl;
					[(_hud displayCtrl 23540), "left", false, 0.4] spawn _move_ctrl;
					[(_hud displayCtrl 23541), "left", false, 0.4] spawn _move_ctrl;
					[(_hud displayCtrl 23542), "left", false, 0.4] spawn _move_ctrl;
				};
				_ctrl_gps_active = true;
			};
		} else {
			if (_ctrl_gps_active) then
			{
				_ctrl_gps_active = false;
				[(_hud displayCtrl 23538), "right", true, 0.4] spawn _move_ctrl;
				[(_hud displayCtrl 23539), "right", true, 0.4] spawn _move_ctrl;
				[(_hud displayCtrl 23540), "right", true, 0.4] spawn _move_ctrl;
				[(_hud displayCtrl 23541), "right", true, 0.4] spawn _move_ctrl;
				[(_hud displayCtrl 23542), "right", true, 0.4] spawn _move_ctrl;
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
			if ((goggles player) isEqualTo "G_Bandanna_blk") then
			{
				if ((player getVariable ["tf_voiceVolume", 0]) > 0) then
				{
					player setVariable ["tf_voiceVolume", 0, true];
				};
			} else {
				if ((player getVariable ["tf_voiceVolume", 0]) isEqualTo 0) then
				{
					player setVariable ["tf_voiceVolume", 1, true];
				};				
			};
		};

		uiSleep 0.3;
	};
};
