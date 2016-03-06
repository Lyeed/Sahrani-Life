/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

if (isNull g_interaction_target) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayCompanyCreate")) exitWith {};

disableSerialization;
_display = findDisplay 90000;
if (isNull _display) exitWith {};

_list = _display displayCtrl 90006;
lbClear _list;

{
	_company = configName _x;
	_index = _list lbAdd getText(_x >> "name");
	_list lbSetData [_index, _company];
	_list lbSetValue [_index, getNumber(_x >> "construction" >> "price")];
	_list lbSetPicture [_index, getText(_x >> "image")];
} forEach ("isClass(_x >> 'construction') && (getNumber(_x >> 'ready') isEqualTo 1)" configClasses (missionConfigFile >> "ALYSIA_COMPANIES" >> "types"));
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Aucun";
	ctrlShow[90001, false];
	ctrlShow[90002, false];
	ctrlShow[90003, false];
	ctrlShow[90004, false];
	ctrlShow[90005, false];
	ctrlShow[90007, false];
	ctrlShow[90008, false];
	ctrlShow[90009, false];
	ctrlShow[90010, false];
	ctrlShow[90011, false];
};

_list lbSetCurSel 0;
