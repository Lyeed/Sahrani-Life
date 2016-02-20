/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_loading_ctrl", "_display", "_bar", "_loading_ctrl_white"];
disableSerialization;

if (g_action_inUse) exitWith {};
if (dialog) exitWith
{
	if (!(isNull (uiNamespace getVariable["tablet", displayNull]))) then {
		closeDialog 0;
	};
};

if (player getVariable ["arrested", false]) exitWith {["Vous n'avez pas accès à votre tablette en prison"] call AlysiaClient_fnc_error};
if ((player getVariable ["restrained", false]) || (player getVariable ["knockedOut", false])) exitWith {};

if (!(createDialog "RscDisplayTablet")) exitWith {};

if ((vehicle player) isEqualTo player) then { 
	player playAction "Gear";
};

_display = uiNamespace getVariable["tablet", displayNull];

_loading_ctrl = _display ctrlCreate ["RscPicture", 7506];
_loading_ctrl ctrlSetText "lyeed_IMG\data\tablet\backgrounds\loading_screen.jpg";
_loading_ctrl ctrlSetPosition (ctrlPosition (_display displayCtrl 7502));
_loading_ctrl ctrlSetFade 1;
_loading_ctrl ctrlCommit 0;

_loading_ctrl_white = _display ctrlCreate ["RscPicture", 7508];
_loading_ctrl_white ctrlSetText "#(argb,8,8,3)color(1,1,1,1)";
_loading_ctrl_white ctrlSetPosition (ctrlPosition (_display displayCtrl 7502));
_loading_ctrl_white ctrlCommit 0;

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
g_CTRL_inUse = true;
g_app = "";
playSound "tablet_startup";

while {(!(isNull _display) && ((ctrlFade _loading_ctrl) > 0))} do
{
	_loading_ctrl ctrlSetFade ((ctrlFade _loading_ctrl) - 0.05);
	_loading_ctrl ctrlCommit 0;

	_loading_ctrl_white ctrlSetFade ((ctrlFade _loading_ctrl_white) + 0.05);
	_loading_ctrl_white ctrlCommit 0;

	sleep 0.05;
};

g_CTRL_inUse = false;

if (!(isNull _display)) then
{
	ctrlDelete _loading_ctrl_white;
	_bar = _display displayCtrl 7501;
	while {!(isNull _display)} do
	{
		_bar ctrlSetStructuredText parseText format
		[
			"<t align='left'><img image='%1'/> %2</t><t align='center'>%3</t><t align='right'>%4/%5/%6 <img image='lyeed_IMG\data\tablet\infobar\date.paa'/></t>",
			if ("ItemGPS" in (assignedItems player)) then {"lyeed_IMG\data\tablet\infobar\gps_yes.paa"} else {"lyeed_IMG\data\tablet\infobar\gps_no.paa"},
			if ("ItemGPS" in (assignedItems player)) then {(mapGridPosition player)} else {"noGPS"},
			([] call AlysiaClient_fnc_strTime),
			(date select 2),
			(date select 1),
			(date select 0)
		];
		sleep 0.5;
	};
	g_app = "";
};
