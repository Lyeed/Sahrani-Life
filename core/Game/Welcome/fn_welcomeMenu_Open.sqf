/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_id", "_list_sexe", "_list_origin", "_list_birth_day", "_list_birth_month", "_list_birth_year"];

if (!(createDialog "RscDisplayWelcomeCharacter")) exitWith {};

disableSerialization;
_display = findDisplay 1500;
if (isNull _display) exitWith {};

_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

// Sexe
_list_sexe = _display displayCtrl 1505;
lbClear _list_sexe;

_list_sexe lbAdd "Homme";
_list_sexe lbSetPicture [0, "lyeed_IMG\data\welcome\male.paa"];

_list_sexe lbAdd "Femme";
_list_sexe lbSetPicture [1, "lyeed_IMG\data\welcome\female.paa"];

_list_sexe lbSetCurSel 0;

//birth
_list_birth_day = _display displayCtrl 1510;
for "_i" from 1 to 31 do
{
	_index = _list_birth_day lbAdd format["%1", _i];
	_list_birth_day lbSetValue [_index, _i];
};
_list_birth_day lbSetCurSel 0;

_list_birth_month = _display displayCtrl 1509;
for "_i" from 1 to 12 do
{
	_index = _list_birth_month lbAdd format["%1", _i];
	_list_birth_month lbSetValue [_index, _i];
};
_list_birth_month lbSetCurSel 0;

_list_birth_year = _display displayCtrl 1503;
for "_i" from ((date select 0) - 70) to ((date select 0) - 18) do
{
	_index = _list_birth_year lbAdd format["%1", _i];
	_list_birth_year lbSetValue [_index, _i];
};
_list_birth_year lbSetCurSel 0;

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
