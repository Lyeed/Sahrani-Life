/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_maxAmount", "_processLicenses", "_rank", "_display", "_license_condition", "_licenses_text"];
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

if (!(createDialog "RscDisplayProcess")) exitWith {};

disableSerialization;
_display = findDisplay 53000;
if (isNull _display) exitWith {};

(_display displayCtrl 53001) ctrlSetStructuredText parseText format["<t align='center' size='1.5'>%1</t>", getText(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "name")];

if (!(str(playerSide) in getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "sides"))) exitWith
{
	{
		ctrlShow[getNumber(_x >> "IDC"), false];	
	} forEach ("(!((configName _x) in ['TITLE', 'ERROR_TEXT', 'OPTION_EXIT_FRAME', 'OPTION_EXIT_BACKGROUND', 'OPTION_EXIT_IMAGE', 'OPTION_EXIT_BUTTON']) && (getNumber(_x >> 'IDC') != -1))" configClasses (missionConfigFile >> "RscDisplayProcess" >> "controls"));

	(_display displayCtrl 53015) ctrlSetStructuredText parseText format
	[
		"<t align='center' font='PuristaBold'><t size='1.5'>Votre faction<br/><t color='#04B404'>%1</t> n'est pas autorisé à traiter ici",
		([playerSide] call public_fnc_sideToStr)
	];
};

_processLicenses = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "licenses");
if (count(_processLicenses) > 0) then
{
	_licenses_text = "";
	_license_condition = true;

	{
		if (!([_x] call public_fnc_hasLicense)) then
		{
			_licenses_text = _licenses_text + format["%1<br/>", [_x] call public_fnc_licenseGetName];
			_license_condition = false;
		};
	} forEach _processLicenses;
} else {
	_license_condition = true;
};

if (!_license_condition) exitWith
{
	{
		ctrlShow[getNumber(_x >> "IDC"), false];	
	} forEach ("(!((configName _x) in ['TITLE', 'ERROR_TEXT', 'OPTION_EXIT_FRAME', 'OPTION_EXIT_BACKGROUND', 'OPTION_EXIT_IMAGE', 'OPTION_EXIT_BUTTON']) && (getNumber(_x >> 'IDC') != -1))" configClasses (missionConfigFile >> "RscDisplayProcess" >> "controls"));

	(_display displayCtrl 53015) ctrlSetStructuredText parseText format
	[
		"<t align='center' font='PuristaBold'><t size='1.2'>Vous n'avez pas toutes les licenses requises pour traiter<br/><br/>Vous avez besoin de<br/></t><t size='1.5' color='#FF8000'>%1</t></t>",
		_licenses_text
	];
};

_rank = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "rank");
if ((playerSide != civilian) && ((player getVariable ["rank", 0]) < _rank)) exitWith
{
	{
		ctrlShow[getNumber(_x >> "IDC"), false];	
	} forEach ("(!((configName _x) in ['TITLE', 'ERROR_TEXT', 'OPTION_EXIT_FRAME', 'OPTION_EXIT_BACKGROUND', 'OPTION_EXIT_IMAGE', 'OPTION_EXIT_BUTTON']) && (getNumber(_x >> 'IDC') != -1))" configClasses (missionConfigFile >> "RscDisplayProcess" >> "controls"));

	(_display displayCtrl 53015) ctrlSetStructuredText parseText format
	[
		"<t align='center' font='PuristaBold'><t size='1.5'>Vous n'avez pas le rank suffisant dans votre faction pour traider<br/><br/>Vous avez besoin de<br/></t><t size='2' color='#FF8000'>%1</t></t>",
		([playerSide, _rank] call public_fnc_rankToStr)
	];
};

ctrlShow[53015, false];
ctrlEnable[53005, false];
ctrlEnable[53014, false];

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
