/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_coma || !(alive player)) exitWith {};
if ((player getVariable["restrained", false]) || (player getVariable["surrender", false])) exitWith {};

if (!(createDialog "Skyline_ATM_Dialog")) exitWith {};

[] call public_fnc_atmMenuUpdate;