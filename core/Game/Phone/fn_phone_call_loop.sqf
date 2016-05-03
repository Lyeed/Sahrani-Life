/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

while {((missionNamespace getVariable "calling") && !(player getVariable ["is_coma", false]))} do
{
	if (([(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency) isEqualTo (missionNamespace getVariable "calling_freq")) then
	{
		if (isNull (missionNamespace getVariable "calling_target")) then
		{
			if (player getVariable ["tf_sw_speakers", false]) then {
				[player, "phone_busy", 6] call CBA_fnc_globalSay3d;
			} else {
				playSound "phone_busy";
			};
		} else {
			if ((player getVariable ["tf_sendingDistanceMultiplicator", 1]) != 0.1) then {
				player setVariable ["tf_sendingDistanceMultiplicator", 0.1];
			};
			if ((player getVariable ["tf_receivingDistanceMultiplicator", 1]) != 0.1) then {
				player setVariable ["tf_receivingDistanceMultiplicator", 0.1];
			};
		};

		call TFAR_fnc_onSwTangentPressed;
		call TFAR_fnc_HideHint;
	} else {
		if (((missionNamespace getVariable "calling_time") % 5) isEqualTo 0) then	
		{
			if (player getVariable ["tf_sw_speakers", false]) then {
				[player, "phone_tonalite", 6] call CBA_fnc_globalSay3d;
			} else {
				playSound "phone_tonalite";
			};

			if (isNull (missionNamespace getVariable "calling_target")) then
			{
				missionNamespace setVariable ["calling_target", ([(missionNamespace getVariable "calling_number")] call AlysiaClient_fnc_phone_number_to_unit)];
				if (!(isNull (missionNamespace getVariable "calling_target"))) then
				{
					[player, missionNamespace getVariable "calling_freq"] remoteExec ["AlysiaClient_fnc_phone_call_receive", (missionNamespace getVariable "calling_target")];
				};
			};
		};
	};

	if (g_app isEqualTo "PHONE_CALL") then
	{
		((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 11004) ctrlSetStructuredText parseText format
		[
			"<t size='1.5' align='center'>%1</t>",
			[(missionNamespace getVariable "calling_time"), "M:SS"] call CBA_fnc_formatElapsedTime
		];

		((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 11003) ctrlSetStructuredText parseText format
		[
			"<t size='3.5' align='center'>%1</t>",
			if (missionNamespace getVariable "calling_hide") then {"Inconnu"} else {(missionNamespace getVariable "calling_number")}
		];
	};

	uiSleep 1;
	missionNamespace setVariable ["calling_time", (missionNamespace getVariable "calling_time") + 1];
};

[] call AlysiaClient_fnc_phone_call_end;
