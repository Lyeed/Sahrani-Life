/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (([(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency) isEqualTo (missionNamespace getVariable "calling_freq")) then
{
	call TFAR_fnc_onSwTangentReleased;
	[(call TFAR_fnc_activeSwRadio), 1, (missionNamespace getVariable "calling_freq_old")] call TFAR_fnc_SetChannelFrequency;
};

if ((player getVariable ["tf_sendingDistanceMultiplicator", 1]) != 1) then {
	player setVariable ["tf_sendingDistanceMultiplicator", 1];
};
if ((player getVariable ["tf_receivingDistanceMultiplicator", 1]) != 1) then {
	player setVariable ["tf_receivingDistanceMultiplicator", 1];
};

missionNamespace setVariable ["calling", false];
missionNamespace setVariable ["calling_target", objNull];
missionNamespace setVariable ["calling_freq_old", ""];
missionNamespace setVariable ["calling_freq", ""];
missionNamespace setVariable ["calling_time", 0];
missionNamespace setVariable ["calling_number", ""];
missionNamespace setVariable ["calling_answer", nil];

if (g_app isEqualTo "PHONE_CALLING") then {
	["PHONE_CALL"] spawn AlysiaClient_fnc_tabletApp;
};
