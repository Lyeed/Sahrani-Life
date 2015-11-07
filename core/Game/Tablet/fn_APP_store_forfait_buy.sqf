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
if (g_phone_number isEqualTo "") then
{
	private["_newNumber", "_numbers"];
	_numbers = missionNamespace getVariable["gServer_phone_numbers", []];
	_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
	while {_newNumber in _numbers} do
	{
		_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
	};
	_numbers deleteAt (_numbers find g_phone_number);
	_numbers pushBack _newNumber;
	g_phone_number = _newNumber;
	player setVariable ["number", _newNumber, true];
	["gServer_phone_numbers", _numbers] call CBA_fnc_publicVariable;
	[format["Vous avez changé de forfait<br/><br/><t align='left'>Nouveau</t><t align='right' color='#FF4000'>%1</t>", g_phone_forfait]] call public_fnc_info;
	["PHONE"] spawn public_fnc_tabletApp;
} else {
	[format["Vous avez changé de forfait<br/><br/><t align='left'>Nouveau</t><t align='right' color='#FF4000'>%1</t>", g_phone_forfait]] call public_fnc_info;
	["STORE_FORFAIT"] spawn public_fnc_tabletApp;
};