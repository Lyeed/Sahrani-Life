/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

_item = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_item");
if ((_item != "") && !(_item in (magazines player))) exitWith {
	[format[
		"Vous n'avez pas l'objet nécessaire pour prouver votre identité<br/><br/><t align='left'>Requis</t><t align='right'>%1</t>",
		(([_item] call public_fnc_fetchCfgDetails) select 1)
	]] call public_fnc_error;
};

[
	parseText format
	[
			"<img size='%1' image='%2'/><br/>"
		+ 	"<t size='2' align='center'>-%3-</t><br/>"
		+	"<t size='2' align='center'>%4</t><br/><br/>"
		+	"<t size='1' color='#01DF01'>%5</t>",
		(getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_image_size")),
		(getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_image_path")),
		([playerSide, (player getVariable["rank", 0])] call public_fnc_rankToStr),
		(player getVariable["realname", profileName]),
		(getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"))
	]
] remoteExecCall ["hintSilent", g_interaction_target];