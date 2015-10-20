/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_numbers"];

if (g_phone_number isEqualTo "") exitWith {};
if (g_atm < 10000) exitWith {
	[format["Vous n'avez pas assez d'argent<br/><br/><t align='left'>Prix</t><t align='right'><t color='#8cff9b'>%1</t>$</t>", [10000] call public_fnc_numberText]] call public_fnc_error;
};

_action = 
[
	"Êtes-vous sûr de vouloir changer de numéro ? Une fois validé vos anciens contacts ne pourront plus vous joindre.<br/><br/><t align='left'>Prix</t><t align='right'><t color='#8cff9b'>10.000</t>$</t>",
	"Changement de numéro",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	private["_newNumber", "_numbers"];
	_numbers = missionNamespace getVariable["gServer_phone_numbers", []];
	_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
	while {_newNumber in _numbers} do
	{
		_newNumber = format["%1%2%3%4%5%6", floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10), floor(random 10)];
	};
	_numbers deleteAt (_numbers find g_phone_number);
	g_phone_number = _newNumber;
	player setVariable["number", _newNumber, true];
	["gServer_phone_numbers", _numbers] call CBA_fnc_publicVariable;
	[format["Vous avez changé de numéro<br/><br/><t align='left'>Nouveau</t><t align='right' color='#FF4000'>%1</t>", g_phone_number]] call public_fnc_info;
	playSound "buy";
	[false, 1, 10000, false] call public_fnc_handleMoney;
};

["PHONE_CATEGORY"] spawn public_fnc_tabletApp;