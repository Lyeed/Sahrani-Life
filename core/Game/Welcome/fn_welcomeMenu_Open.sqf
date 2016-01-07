/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_id", "_list_sexe", "_list_origin"];

if (!(createDialog "RscDisplayWelcomeCharacter")) exitWith {};

disableSerialization;
_display = findDisplay 1500;
if (isNull _display) exitWith {};

_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

// Sexe
_list_sexe = _display displayCtrl 1505;
lbClear _list_sexe;

_list_sexe lbAdd "homme";
_list_sexe lbSetPicture [0, "lyeed_IMG\data\welcome\male.paa"];

_list_sexe lbAdd "femme";
_list_sexe lbSetPicture [1, "lyeed_IMG\data\welcome\female.paa"];

_list_sexe lbSetCurSel 0;

// Origine
_list_origin = _display displayCtrl 1504;
lbClear _list_origin;

{
	_index = _list_origin lbAdd getText(_x >> "name");
	_list_origin lbSetPicture [_index, getText(_x >> "flag")];
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_NATIONALITIES"));

_list_origin lbSetCurSel 0;

waitUntil
{
	(_display displayCtrl 1507) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", ([] call public_fnc_strTime)];
	(_display displayCtrl 1506) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", ([] call public_fnc_strDate)];
	sleep 0.5;
	isNull (findDisplay 1500)
};

(findDisplay 1500) displayRemoveEventHandler ["KeyDown", _id];
