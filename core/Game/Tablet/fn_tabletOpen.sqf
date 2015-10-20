/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_loading_ctrl", "_display", "_bar"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (dialog) exitWith {};
if (!(isNull _display)) exitWith {};
if (!(createDialog "RscDisplayTablet")) exitWith {};

if ((vehicle player) isEqualTo player) then { 
	player playAction "Gear";
};

_display = uiNamespace getVariable["tablet", displayNull];
_loading_ctrl = _display ctrlCreate ["RscPicture", 7506];
_loading_ctrl ctrlSetText "\lyeed\images\loading_screen.jpg";
_loading_ctrl ctrlSetPosition (ctrlPosition (_display displayCtrl 7502));
_loading_ctrl ctrlCommit 0;

"
	private[""_idc""];
	_idc = getNumber(_x >> ""IDC"");
	if (!(_idc in [-1, 7506, 7502, 7507])) then
	{
		ctrlShow[_idc, false];
	};
	true
" configClasses (missionConfigFile >> "RscDisplayTablet" >> "controls");

g_CTRL_shown = [];
g_CTRL_inUse = false;
g_app = "";

_bar = _display displayCtrl 7501;
while {!(isNull _display)} do
{
	_bar ctrlSetStructuredText parseText format
	[
		"<t align='left'>%1</t><t align='center'>%2</t><t align='right'>%3</t>",
		if ("ItemGPS" in (assignedItems player)) then {(mapGridPosition player)} else {"noGPS"},
		([] call public_fnc_strDate),
		([] call public_fnc_strTime)
	];
	sleep 0.5;
};