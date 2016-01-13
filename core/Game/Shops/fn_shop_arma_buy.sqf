/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_price", "_item", "_itemInfo", "_weaponChecker"];

_sel = lbCurSel 38402;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné d'équipement à acheter"] call public_fnc_error;
};

_price = lbValue[38402, _sel];
if (_price > g_cash) exitWith {
	["Vous n'avez pas assez d'argent"] call public_fnc_error;
};

_item = lbData[38402, _sel];
_itemInfo = [_item] call public_fnc_fetchCfgDetails;
if (((_itemInfo select 6) != "CfgVehicles") && ((_itemInfo select 4) in [4069, 131072]) && !(player canAdd _item)) exitWith {
	["Vous n'avez pas assez de place"] call public_fnc_error;
};

_weaponChecker = false;
if ((_itemInfo select 6) isEqualTo "CfgWeapons") then
{
	switch (_itemInfo select 4) do
	{
		case 1:
		{
			if ((primaryWeapon player) != "") then
			{
				[format["Veuillez ranger votre arme principale<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", getText(configFile >> "CfgWeapons" >> (primaryWeapon player) >> "displayName")]] call public_fnc_error;
				_weaponChecker = true;
			};
		};
		case 2:
		{
			if ((handgunWeapon player) != "") then 
			{
				[format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", getText(configFile >> "CfgWeapons" >> (handgunWeapon player) >> "displayName")]] call public_fnc_error;
				_weaponChecker = true;
			};
		};
		case 4:
		{
			if ((secondaryWeapon player) != "") then
			{
				[format["Veuillez ranger votre lanceur<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", getText(configFile >> "CfgWeapons" >> (secondaryWeapon player) >> "displayName")]] call public_fnc_error;
				_weaponChecker = true;
			};
		};
	};
};
if (_weaponChecker) exitWith {};

if ((time - g_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

g_action_delay = time;
[false, _price] call public_fnc_handleCash;
playSound "buy";
[_item, true] call public_fnc_handleItem;

if (_item in getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "leader_bord_history")) then {
	[(player getVariable["realname", profileName]), _item, playerSide] remoteExecCall ["TON_fnc_factionHistoryAdd", 2];
};
