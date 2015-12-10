/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_maxAmount", "_processLicense", "_rank", "_display"];
g_interaction_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
g_interaction_process_type = [_this, 3, "", [""]] call BIS_fnc_param;

if (!isClass(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type)) exitWith
{
	[format["Impossible de trouver les informations concernant le traitement <color='#FF8000'>%1</t>", g_interaction_process_type]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Process %1 not defined in ALYSIA_PROCESS (class not found)", g_interaction_process_type];
};

if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br>Revenez plus tard"] call public_fnc_error;
};
if ((player getVariable["restrained", false]) || (player getVariable["surrender", false])) exitWith {
	["Vous ne pouvez pas traiter lorsque vous êtes menotté ou avez les mains sur la tête"] call public_fnc_error;
};
if ((vehicle player) != player) exitWith {
	["Vous devez être à pied pour traiter"] call public_fnc_error;
};
if ((getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "requiere_target") isEqualTo 1) && (isNull g_interaction_target)) exitWith {
	["Le traitement à besoin d'émaner d'une entité"] call public_fnc_error;
};
if ((getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "requiere_target") isEqualTo 1) && ((player distance g_interaction_target) > 5)) exitWith {
	["Le traitement à besoin d'émaner d'une entité"] call public_fnc_error;
};
if (!(str(playerSide) in getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "sides"))) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404'>%1</t> n'est pas autorisé à traiter ici<br/>Ce traitement (<t color='#2EFE9A'>%2</t>) est <t color='#FF0000'>réservé</t>",
		([playerSide] call public_fnc_sideToStr),
		getText(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "name")
	]] call public_fnc_error;
};

_processLicense = getText(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "license");
if ((playerSide isEqualTo civilian) && (_processLicense != "") && !(missionNamespace getVariable[format["license_%1", _processLicense], false])) exitWith {
	[format["Vous n'avez pas la license requise pour traiter<br/>Vous avez besoin de %1", ([_processLicense] call public_fnc_licenseGetName)]] call public_fnc_error;
};
_rank = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "rank");
if ((playerSide != civilian) && ((player getVariable ["rank", 0]) < _rank)) exitWith {
	["Vous n'avez pas le rank suffisant pour traiter"] call public_fnc_error;
};

if (!(createDialog "RscDisplayProcess")) exitWith {};

disableSerialization;
_display = findDisplay 53000;
if (isNull _display) exitWith {};

ctrlEnable[53005, false];
(_display displayCtrl 53001) ctrlSetStructuredText parseText format["<t align='center' size='1.5'>%1</t>", getText(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "name")];

{
	private["_varMaxAmount", "_varAmount"];
	_varAmount = [(_x select 0)] call public_fnc_itemCount;
	_varMaxAmount = floor(_varAmount / (_x select 1));

	if (isNil "_maxAmount") then {
		_maxAmount = _varMaxAmount;
	} else {
		if (_varMaxAmount < _maxAmount) then {
			_maxAmount = _varMaxAmount;
		};
	};
} forEach getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "require");
if (_maxAmount isEqualTo 0) then {
	_maxAmount = 1;
};

(_display displayCtrl 53006) ctrlSetText str(_maxAmount);

_display spawn
{
	disableSerialization;
	while {!(isNull _this)} do
	{
		[] call public_fnc_process_update;
		_data = ctrlText 53006;
		waitUntil {((_data != (ctrlText 53006)) || (isNull _this))};
	};
};
