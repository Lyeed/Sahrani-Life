/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_voice"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_voice = round((player getVariable["tf_globalVolume", 1]) * 100);
sliderSetPosition[7819, _voice];
(_display displayCtrl 7821) ctrlSetStructuredText parseText format["<t align='center'>%1%2</t>", _voice, "%"];

(_display displayCtrl 7807) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_foot];
(_display displayCtrl 7810) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_car];
(_display displayCtrl 7813) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_air];
(_display displayCtrl 7816) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getObjectViewDistance select 0)];

{
	slidersetRange [(_x select 0), 100, 12000];
	(_display displayCtrl (_x select 0)) sliderSetSpeed [100, 100, 100];
	sliderSetPosition[(_x select 0), (_x select 1)];
} forEach [[7806, tawvd_foot], [7809, tawvd_car], [7812, tawvd_air], [7815, (getObjectViewDistance select 0)]];

sliderSetRange[7819, 0, 100];
sliderSetSpeed[7819, 1, 1];

(_display displayCtrl 7827) cbSetChecked (profileNamespace getVariable ["ALYSIA_tablet_animation", true]);
(_display displayCtrl 7830) cbSetChecked (profileNamespace getVariable ["ALYSIA_hud_animation", true]);

while {(g_app isEqualTo "SETTINGS")} do
{
	(_display displayCtrl 7801) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", diag_fps];
	sleep 0.5;
};
