/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_title", "_pseudo", "_message"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_title = ctrlText 9530;
if (_title isEqualTo "") exitWith {["Vous n'avez pas entré de titre à votre annonce"] call AlysiaClient_fnc_error};
_bad = [_title, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-éè?!,'/():;!.ù_à *"] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {[format["Vous utilisez un caractère interdit dans le titre de votre annonce (%1)", _bad]] call AlysiaClient_fnc_error};
if (([_title] call CBA_fnc_strLen) > 20) exitWith {["Le titre de votre annonce ne doit pas dépasser 20 caractères"] call AlysiaClient_fnc_error};

_pseudo = ctrlText 9523;
_bad = [_pseudo, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-éè?!,'/():;!.ù_à *"] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {[format["Vous utilisez un caractère interdit dans le pseudo de votre annonce (%1)", _bad]] call AlysiaClient_fnc_error};
if (([_pseudo] call CBA_fnc_strLen) > 20) exitWith {["Le pseudo de votre annonce ne doit pas dépasser 20 caractères"] call AlysiaClient_fnc_error};
if (_pseudo isEqualTo "") then {
	_pseudo = "Guest";
};

_message = ctrlText 9525;
if (_message isEqualTo "") exitWith {["Vous n'avez pas entré de message à votre annonce"] call AlysiaClient_fnc_error};
_bad = [_message, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-éè?!,'/():;!.ù_à *"] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {[format["Vous utilisez un caractère interdit dans le message de votre annonce (%1)", _bad]] call AlysiaClient_fnc_error};
if (([_message] call CBA_fnc_strLen) > 120) exitWith {["Le message de votre annonce ne doit pas dépasser 120 caractères"] call AlysiaClient_fnc_error};

if ([false, 40, "Annonce (application)"] call AlysiaClient_fnc_handleATM) then
{
	playSound "buy";
	(_display displayCtrl 9530) ctrlSetText "";
	(_display displayCtrl 9523) ctrlSetText "";
	(_display displayCtrl 9525) ctrlSetText "";
	[_pseudo, _title, _message] remoteExec ["AlysiaServer_fnc_announces_add", 2];
} else {[format["Vous n'avez pas assez d'argent.<br/>Prix : <t color='#8cff9b'>%1</t>kn", [40] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error};
