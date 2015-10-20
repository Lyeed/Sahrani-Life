/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_button"];
_unit = _this select 0;
_button = _this select 4;

if ((_unit getVariable["restrained", false]) || (_unit getVariable["surrender", false]) || !(alive player) || g_coma) exitWith {
	true; 
};