/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_hud", "_ctrl_hunger", "_ctrl_thirst", "_ctrl_fatigue", "_ctrl_blood", "_idc", "_ico_1", "_ico_2", "_ico_3", "_ico_4", "_ico_5", "_ico_6", "_ico_7", "_ctrl_speed", "_ctrl_fuel", "_list_fuel", "_ctrl_vehicle"];

if (!(isNull (uiNameSpace getVariable ["RscHudPlayer", displayNull]))) exitWith {};

disableSerialization;

8 cutRsc ["RscHudPlayer", "PLAIN"];
_hud = uiNameSpace getVariable ["RscHudPlayer", displayNull];

(_hud displayCtrl 23501) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", profileName];

_ctrl_hunger = _hud displayCtrl 23502;
_ctrl_thirst = _hud displayCtrl 23503;
_ctrl_fatigue = _hud displayCtrl 23504;
_ctrl_blood = _hud displayCtrl 23505;
_ctrl_speed = _hud displayCtrl 23506;
_ctrl_vehicle = _hud displayCtrl 23520;
_ctrl_fuel = _hud displayCtrl 23524;

_list_fuel =
[
	_ctrl_vehicle,
	(_hud displayCtrl 23521),
	(_hud displayCtrl 23522),
	(_hud displayCtrl 23523),
	_ctrl_fuel
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
		["\lyeed_IMG\data\player_hud\regen.paa", "(g_regen_active)"],
		["\lyeed_IMG\data\player_hud\drugs.paa", "(g_drugs_consuming > 0)"],
		["\lyeed_IMG\data\player_hud\handcuffs.paa", "(player getVariable[""restrained"", false])"],
		["\lyeed_IMG\data\player_hud\blind.paa", "(player getVariable[""bandeau"", false])"],
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
		_ctrl_fuel progressSetPosition ((fuel (vehicle player)) / 1);
		_ctrl_vehicle ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(vehicle player) >> "displayName")];

		{
			_x ctrlShow true;
		} forEach (_list_fuel);
	} else {
		{
			_x ctrlShow false;
		} forEach (_list_fuel);
	};

	sleep 0.5;
};