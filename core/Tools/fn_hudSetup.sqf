/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull (uiNameSpace getVariable ["RscHudPlayer", displayNull])) then
{
	8 cutRsc ["RscHudPlayer", "PLAIN"];

	disableSerialization;
	_hud = uiNameSpace getVariable ["RscHudPlayer", displayNull];
	if (isNull _hud) exitWith {};

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
	_ctrl_speed = _hud displayCtrl 23506;

	/*===========================
	  ===         GPS         ===
	  =========================== */
	_ctrl_gps_map = _hud displayCtrl 23539;
	_ctrl_gps_text = _hud displayCtrl 23542;

	/*===========================
	  ===       VEHICLE       ===
	  ===========================*/
	_ctrl_vehicle_speed = _hud displayCtrl 23520;
	_ctrl_vehicle_fuel = _hud displayCtrl 23522;

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
			round((getFatigue player) * 100), "%"
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
			["lyeed_IMG\data\player_hud\drugs.paa", "(g_drugs_consuming > 0)"],
			["lyeed_IMG\data\player_hud\handcuffs.paa", "(player getVariable [""restrained"",false])"],
			["lyeed_IMG\data\player_hud\blind.paa", "(player getVariable [""bandeau"",false])"],
			["lyeed_IMG\data\player_hud\arrested.paa", "(g_arrested)"],
			["lyeed_IMG\data\player_hud\fight.paa", "(g_firstCombatActive)"],
			["lyeed_IMG\data\player_hud\speak.paa", "(g_speaking)"],
			["lyeed_IMG\data\player_hud\seatbelt.paa", "(g_seatbelt)"],
			["lyeed_IMG\data\player_hud\silence.paa", "(missionNamespace getVariable [""silence"",false])"],
			["lyeed_IMG\data\player_hud\sirene.paa", "((vehicle player) getVariable ['sireneOn',false])"]
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

			{
				(_hud displayCtrl _x) ctrlShow true;
			} forEach ([23520, 23521, 23522, 23523]);
		} else {
			{
				(_hud displayCtrl _x) ctrlShow false;
			} forEach ([23520, 23521, 23522, 23523]);
		};

		/*===========================
		  ===       WEAPONS       ===
		  =========================== */
		if ((currentWeapon player) isEqualTo "") then
		{
			{
				(_hud displayCtrl _x) ctrlShow false;
			} forEach ([23530, 23531, 23532, 23533]);
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

			{
				(_hud displayCtrl _x) ctrlShow true;
			} forEach ([23530, 23531, 23532, 23533]);
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

			{
				(_hud displayCtrl _x) ctrlShow true;
			} forEach ([23538, 23539, 23540, 23541, 23542]);
		} else {
			{
				(_hud displayCtrl _x) ctrlShow false;
			} forEach ([23538, 23539, 23540, 23541, 23542]);
		};

		sleep 0.3;
	};
};
