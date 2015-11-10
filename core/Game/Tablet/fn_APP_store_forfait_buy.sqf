/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_forfait"];

_sel = lbCurSel 8132;
if (_sel isEqualTo -1) exitWith {};

if ((time - g_action_delay) < 2) exitWith { 
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

_forfait = lbData[8132, _sel];
if (_forfait isEqualTo g_phone_forfait) exitWith {};

if (g_atm < (getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> _forfait >> "bill"))) exitWith {};

g_action_delay = time;
playSound "buy";
g_phone_forfait = _forfait;
if (g_phone_number isEqualTo "") then {
	[] call public_fnc_phone_numberChange;
};

[format["Vous avez changé de forfait<br/><br/><t align='left'>Nouveau</t><t align='right' color='#FF4000'>%1</t>", g_phone_forfait]] call public_fnc_info;
["STORE_FORFAIT"] spawn public_fnc_tabletApp;