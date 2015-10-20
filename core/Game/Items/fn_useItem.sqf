/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_use"];
disableSerialization;

if ((lbText[8001, (lbCurSel 8001)]) isEqualTo "Vide") exitWith {
	["Vous n'avez rien sélectionné"] call public_fnc_error;
};

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

if (g_coma) exitWith {
	["Vous ne pouvez pas utiliser d'objet dans le coma"] call public_fnc_error; 
};

if (g_is_processing) exitWith {
	["Vous ne pouvez pas utiliser d'objet pendant un traitement"] call public_fnc_error; 
};

if (g_action_gathering) exitWith {
	["Vous ne pouvez pas utiliser d'objet pendant que vous ramassez"] call public_fnc_error; 
};

_item = lbData[8001, (lbCurSel 8001)];
_use = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use");
if (_use isEqualTo "") then {
	["Cet objet n'est pas utilisable"] call public_fnc_error;
} else {
	g_action_delay = time;
	call compile format[_use, _item];
	["inventory"] call public_fnc_tabletApp;
};