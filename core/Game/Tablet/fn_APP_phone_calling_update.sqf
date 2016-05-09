/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_display";

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

if (missionNamespace getVariable ["phone_call_micro_on", false]) then {
	(_display displayCtrl 11005) ctrlSetText "lyeed_IMG\data\phone\call\action_micro_off.paa";
} else {
	(_display displayCtrl 11005) ctrlSetText "lyeed_IMG\data\phone\call\action_micro_on.paa";
};

if (((call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings) select TF_SW_SPEAKER_OFFSET) then {
	(_display displayCtrl 11007) ctrlSetText "lyeed_IMG\data\phone\call\action_speaker_on.paa";
} else {
	(_display displayCtrl 11007) ctrlSetText "lyeed_IMG\data\phone\call\action_speaker_off.paa";
};

(_display displayCtrl 11004) ctrlSetStructuredText parseText format
[
	"<t size='1.5' align='center'>%1</t>",
	[(missionNamespace getVariable ["calling_time", 0]), "M:SS"] call CBA_fnc_formatElapsedTime
];

(_display displayCtrl 11003) ctrlSetStructuredText parseText format
[
	"<t size='3.5' align='center'>%1</t>",
	if (missionNamespace getVariable ["calling_hide", false]) then {"Inconnu"} else {(missionNamespace getVariable ["calling_number", ""])}
];
