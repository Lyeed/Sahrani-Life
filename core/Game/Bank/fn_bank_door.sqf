/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_bank", "_door", "_config_bank", "_config_door", "_item", "_alarm", "_config_item"];
_bank = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_door = [_this, 1, "", [""]] call BIS_fnc_param;

_config_bank = missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank);
_config_door = _config_bank >> "doors" >> _door;

if (str(playerSide) in getArray(_config_bank >> "owners")) then
{
	_open = false;
	{
		if ((_bank animationPhase (configName _x)) isEqualTo getNumber(_x >> "value")) exitWith {_open = true};
		_bank animate [(configName _x), getNumber(_x >> "value")];
	} forEach ("true" configClasses (_config_door >> "states" >> "open"));
	if (_open) then
	{
		{
			_bank animate [(configName _x), getNumber(_x >> "value")];
		} forEach ("true" configClasses (_config_door >> "states" >> "close"));
	};
} else {
	_item = getText(_config_door >> "item");
	_config_item = _config_bank >> "items" >> _item;

	if (!(_item in (magazines player))) exitWith {
		[format["Vous avez besoin de <t color='#FF0000'>%1</t> pour tenter d'ouvrir cette porte.", getText(missionConfigFile >> "CfgMagazines" >> _item >> "displayName")]] call AlysiaClient_fnc_error;
	};

	_open = false;
	{
		if ((_bank animationPhase (configName _x)) isEqualTo getNumber(_x >> "value")) exitWith {_open = true};
	} forEach ("true" configClasses (_config_door >> "states" >> "open"));
	if (_open) exitWith {
		["Vous ne pouvez pas forcer une porte déjà ouverte."] call AlysiaClient_fnc_error;
	};

	if ((_bank getVariable ["secutiry_online", true]) && (getNumber(_config_item >> "alarm") isEqualTo 1)) then
	{
		{
			[
				format
				[
					"Alerte !<br/>La porte <t color='#FF8000'>%1</t> de la banque est en train d'être forcée.",
					getText(_config_door >> "name")
				], "BANQUE"
			] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", [_x] call AlysiaClient_fnc_strToSide];
		} forEach getArray(_config_bank >> "owners");
		[_bank, "bankAlarm"] call CBA_fnc_globalSay3d;
	};

	if (!([
			format["Tentative d'ouverture : %1", getText(_config_door >> "name")],
			getNumber(_config_door >> "progress_time"),
			_bank,
			getText(_config_door >> "progress_sound"),
			getText(_config_door >> "progress_anim")
	] call AlysiaClient_fnc_showProgress)) exitWith {};

	if (getNumber(_config_item >> "removeOnUse") isEqualTo 1) then {
		player removeMagazine _item;
	};

	{
		_bank animate [(configName _x), getNumber(_x >> "value")];
	} forEach ("true" configClasses (_config_door >> "states" >> "open"));

	switch(_door) do
	{
		case "Interact5":
		{
			[(_bank modelToWorld [4.23, 0.777, 4.875]), 180, _bank] call AlysiaClient_fnc_drill_create;
		};
		case "Vault_Door":
		{
			_object = "Bank_Bomb" createVehicle [0,0,0];
			_object attachTo [_bank, [0.87, 2.285, 5.0595]];
		};
	};	
};
