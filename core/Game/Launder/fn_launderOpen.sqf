/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_illegalMoney"];

if (dialog) exitWith {};
if (playerSide != civilian) exitWith {};
if (!(isNil "gServer_soonReboot")) exitWith {
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour blanchir votre argent"] call public_fnc_error;
};

_illegalMoney = missionNamespace getVariable["life_inv_illegal_money", 0];
if (_illegalMoney == 0) exitWith {
	["Vous n'avez pas d'argent à blanchir"] call public_fnc_error;
};

if (_illegalMoney < 10000) exitWith {
	[format["Vous ne pouvez pas blanchir moins de <t color='#8cff9b'>%1kn</t> d'argent sale", ([10000] call public_fnc_numberText)]] call public_fnc_error; 
};

if (g_launder != 0) exitWith {
	["Vous êtes déjà en train de blanchir de l'argent<br/>Attendez d'avoir reçu la somme avant de blanchir de nouveau"] call public_fnc_error; 
};

if (!(createDialog "ALYSIA_launder")) exitWith {};
disableSerialization;

if (((group player) getVariable["gang_name", ""]) == "") then 
{
	ctrlEnable [29602, false];
	((findDisplay 29600) displayCtrl 29602) ctrlSetTooltip "Vous n'avez pas de groupe";
};

((findDisplay 29600) displayCtrl 29601) ctrlSetStructuredText parseText format
[
	"Vous avez <t color='#8cff9b'>%1kn</t> d'argent sale<br/><br/><t align='left'>Gains personnels</t><t align='right' color='#8cff9b'>%2kn</t><br/><t align='left'>Gains du groupe</t><t align='right' color='#8cff9b'>%3kn</t>",
	([_illegalMoney] call public_fnc_numberText),
	([(_illegalMoney * (call public_fnc_launderCalc))] call public_fnc_numberText),
	([(_illegalMoney * 0.97)] call public_fnc_numberText)
];