/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (missionNamespace getVariable ["calling_answer_tmp", false]) exitWith {};

missionNamespace setVariable ["calling_answer_tmp", true];
waitUntil {(time >= (missionNamespace getVariable ["message_sound_end_time", 0]))};

missionNamespace setVariable ['calling_answer', false];
missionNamespace setVariable ["calling_answer_tmp", false];
