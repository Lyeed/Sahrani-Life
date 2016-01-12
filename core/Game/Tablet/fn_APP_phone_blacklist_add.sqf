/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_number"];
_number = [_this, 0, "", [""]] call BIS_fnc_param;

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

if (!([_number] call public_fnc_isNumber)) exitWith {
	["Le numéro de téléphone entré n'est pas valide"] call public_fnc_error;
};
if (([_number] call CBA_fnc_strLen) != 6) exitWith {
	["Un numéro de téléphone doit être composé de six chiffres"] call public_fnc_error;
};
if ((count g_phone_blacklist) >= getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "backlist_max")) exitWith {
	["Vous avez déjà atteint votre quota maximum de numéros blacklistés"] call public_fnc_error;
};
if ((g_phone_blacklist find _number) != -1) exitWith {
	["Ce numéro est déjà blacklisté"] call public_fnc_error;
};
if (([_number, g_phone_contacts] call public_fnc_index) != -1) exitWith {
	["Vous ne pouvez pas blacklister un numéro faisant partie de vos contacts"] call public_fnc_error;
};

g_action_delay = time;
g_phone_blacklist pushBack _number;
((findDisplay 7500) displayCtrl 8540) ctrlSetText "";
["PHONE_BLACKLIST"] spawn public_fnc_tabletApp;