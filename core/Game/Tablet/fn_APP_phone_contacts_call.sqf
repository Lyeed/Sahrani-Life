/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_number", "_index"];

_index = lbCurSel 8374;
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de contact."] call AlysiaClient_fnc_error;
};

_number = lbData[8374, _index];
if (_number isEqualTo "") exitWith
{
	["Ce contact n'a pas de numéro."] call AlysiaClient_fnc_error;
	g_phone_contacts deleteAt _index;
	["PHONE_CONTACTS"] spawn AlysiaClient_fnc_tabletApp;
};

_handle = ['PHONE_CALL'] spawn AlysiaClient_fnc_tabletApp;
waitUntil {(scriptDone _handle)};

uiNamespace setVariable ["phone_call_number", _number];
((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 8920) ctrlSetStructuredText parseText _number;
