/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_info", "_display", "_action"];

if (isNull g_interaction_target) exitWith {};

if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call AlysiaClient_fnc_error;	
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_info = g_interaction_target getVariable "info";
if (isNil "_info") exitWith {
	["Impossible de récupérer les informations du véhicule."] call AlysiaClient_fnc_error;
};

_action = true;
if (!(g_interaction_target in g_vehicles)) then
{
	if (!(["Inspection", 5, g_interaction_target] call AlysiaClient_fnc_showProgress)) then {_action = false};
};

if (_action) then
{
	if (!(createDialog "RscDisplayDefaultText")) exitWith {};

	disableSerialization;
	_display = findDisplay 68000;
	if (isNull _display) exitWith {};

	(_display displayCtrl 68002) ctrlSetText "lyeed_IMG\data\vehicle\background.jpg";
	
	(_display displayCtrl 68003) ctrlSetStructuredText parseText "<t size='1.5' align='center'>Carte grise</t>";
	
	(_display displayCtrl 68001) ctrlSetStructuredText parseText format
	[
			"<t align='left'>Immatriculation</t><t align='right'>%1</t><br/>"
		+	"<t align='left'>Propriétaire</t><t align='right'>%2</t><br/>"
		+	"<t align='left'>Assuré</t><t align='right'>%3</t><br/>"
		+	"<t align='left'>Carburant</t><t align='right'>%4</t>",
		(_info select 2),
		(_info select 1),
		if ((_info select 3) isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
		getText(missionConfigFile >> "ALYSIA_FUEL" >> getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf(g_interaction_target) >> "fuel") >> "name")
	];

	while {!(isNull _display)} do
	{
		if (
			(isNull g_interaction_target) ||
			!(alive g_interaction_target) ||
			(player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false])
		) exitWith {closeDialog 0};
		uiSleep 0.5;
	};
};
