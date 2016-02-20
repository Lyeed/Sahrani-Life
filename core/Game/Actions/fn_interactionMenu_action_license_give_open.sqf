/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_display", "_button"];

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (isNull g_interaction_target) exitWith {};
if (!(createDialog "RscDisplayDefaultChoice")) exitWith {};

disableSerialization;
_display = findDisplay 69000;
if (isNull _display) exitWith {};

_list = _display displayCtrl 69002;
lbClear _list;

(_display displayCtrl 69001) ctrlSetStructuredText parseText "<t size='1.5' align='center'>Licenses</t>";
						
{
	_license = configName _x;
	_index = _list lbAdd ([_license] call AlysiaClient_fnc_licenseGetName);
	_list lbSetData [_index, _license];
} forEach
(
	"
		(
			((player getVariable ['rank',0]) >= getNumber(_x >> 'rank')) && 
			((getText(_x >> 'license') isEqualTo '') || ([getText(_x >> 'license')] call AlysiaClient_fnc_hasLicense)) &&
			((getNumber(_x >> 'same_side_only') isEqualTo 0) || ((getNumber(_x >> 'same_side_only') isEqualTo 1) && ((side g_interaction_target) isEqualTo playerSide))) &&
			(isClass(missionConfigFile >> 'ALYSIA_LICENSES' >> (configName _x) >> 'factions' >> str(side g_interaction_target)))
		)
	"
	configClasses (missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'licenses_give')
);

if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Aucune";
	ctrlShow[69003, false];
	ctrlShow[69004, false];
	ctrlShow[69005, false];
	ctrlShow[69006, false];
	ctrlShow[69007, false];
} else {
	(_display displayCtrl 69006) ctrlSetStructuredText parseText "<t align='left' size='1.3'>Donner</t>";

	_button = _display displayCtrl 69007;
	_button buttonSetAction
	"
		[lbData[69002,lbCurSel 69002], player] remoteExec ['AlysiaClient_fnc_interactionMenu_action_license_give_action', g_interaction_target];
		closeDialog 0;
	";

	_button ctrlSetEventHandler["MouseEnter",
		"((findDisplay 69000) displayCtrl 69005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Donner</t>"";
		((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [1,1,1,1];
		ctrlSetText[69008, ""lyeed_IMG\data\global\validate_select.paa""];
		ctrlShow[69003, false];"
	];

	_button ctrlSetEventHandler["MouseExit",
		"((findDisplay 69000) displayCtrl 69005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Donner</t>"";
		((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [0,0,0,0.6]; 
		ctrlSetText[69008, ""lyeed_IMG\data\global\validate.paa""];
		ctrlShow[69003, true];"
	];	
};

_list lbSetCurSel 0;
