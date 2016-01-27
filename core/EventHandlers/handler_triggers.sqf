/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

g_trigger_frontiere = createTrigger ["EmptyDetector", [13332.3,8877.9,0], false];
g_trigger_frontiere setTriggerArea [300, 150, 116.32645, true];
g_trigger_frontiere setTriggerActivation ["ANY", "PRESENT", true];
g_trigger_frontiere setTriggerStatements
[
	"(vehicle player) in thislist",
	"
		if (missionNamespace getVariable [""g_connected"", false]) then
		{
			[
				[
					[""Frontière"", ""<t align='center' size='1'>%1</t><br/>""], ["""", """"],
					[([] call public_fnc_strDate), ""<t align = 'center' size = '0.7'>%1</t><br/>""], ["""", """"],
					[([] call public_fnc_strTime), ""<t align = 'center' size = '0.7'>%1</t>""], ["""", """"], ["""", """"], ["""", """"]
				]
			] spawn BIS_fnc_typeText;
		};
	",
	""
];
