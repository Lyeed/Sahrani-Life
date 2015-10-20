/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable["blood_receive", false]) exitWith {};

[1000] call public_fnc_handleBlood;
player setFatigue 1;

player setVariable["blood_receive", true, true];
[] spawn
{
	sleep (90 * 1);
	player setVariable["blood_receive", false, true];
};