/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_info", "_name", "_explosion"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};
if ((missionNamespace getVariable["destru", 0]) == 0) exitWith {
	["Vous n'avez pas de kit de destruction"] call public_fnc_error;
};

_info = _object getVariable["info", []];
if (_info isEqualTo []) exitWith {
	["Cible invalide"] call public_fnc_error;
};

if (_object getVariable["inUse", false]) exitWith {
	["Quelqu'un est déjà en train de détruire cet objet"] call public_fnc_error; 
};

_name = getText(missionConfigFile >> "ALYSIA_ITEMS" >> (getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> typeOf(_object) >> "item")) >> "name");
_object setVariable["inUse", true, true];
if (!([format["Destruction (%1)", _name], 10, true, "destroylab", true, _object] call public_fnc_showProgress)) exitWith {
	_object setVariable["inUse", false, true];
};

_explosion = getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> (typeOf _object) >> "explosion");
if (!(_explosion isEqualTo "")) then {
	[format["Le <t color='#FF4000'>%1</t> est devenu instable et risque d'exploser à tout instant", _name]] call public_fnc_info;
} else {
	[format["Vous avez détruit un <t color='#FF4000'>%1</t>", _name]] call public_fnc_info;	
};

[[0, format["NEWS: La faction -%1- a détruit un %2", ([playerSide] call public_fnc_sideToStr), _name]], "public_fnc_broadcast", true] spawn life_fnc_MP;
[[_info, _object, _explosion], "TON_fnc_lastingObjectsDestroy", false] spawn life_fnc_MP;