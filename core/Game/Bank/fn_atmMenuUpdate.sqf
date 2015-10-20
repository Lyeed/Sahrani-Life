/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];
disableSerialization;

_display = findDisplay 2700;
if (isNull _display) exitWith {};

(_display displayCtrl 2701) ctrlSetStructuredText parseText format
[
	"<img size='1.7' image='Alysia_textures\data\bank.paa'/> %1$<br/><img size='1.6' image='Alysia_textures\data\money.paa'/> %2$", 
	([g_atm] call life_fnc_numberText),
	([g_cash] call life_fnc_numberText)
];