/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_forfait", "_price"];

if ((time - g_action_delay) < 1) exitWith { 
	["Veuillez ralentir dans vos actions"] call AlysiaClient_fnc_error; 
};

_sel = lbCurSel 8110;
if (_sel isEqualTo -1) exitWith {};

_forfait = lbData[8110, _sel];
if (_forfait isEqualTo g_phone_forfait) exitWith {};

_price = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _forfait >> "bill");
if (g_atm < _price) exitWith {};

g_action_delay = time;

[_forfait] call AlysiaClient_fnc_phone_forfait_change;
[false, _price, "Forfait téléphonique"] call AlysiaClient_fnc_handleATM;
playSound "buy";
["STORE_FORFAIT"] spawn AlysiaClient_fnc_tabletApp;
