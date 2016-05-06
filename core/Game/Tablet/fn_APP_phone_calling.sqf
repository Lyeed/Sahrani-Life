/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((call AlysiaClient_fnc_hasPhone) && (missionNamespace getVariable ['calling', false])) then
{
	if (player getVariable ["tf_sw_speakers", false]) then {
		[(call TFAR_fnc_activeSwRadio)] call TFAR_fnc_setSwSpeakers;
	};

	missionNamespace setVariable ["phone_call_micro_on", true];

	[] call AlysiaClient_fnc_APP_phone_calling_update;
} else {
	['MAIN'] spawn AlysiaClient_fnc_tabletApp;
};
