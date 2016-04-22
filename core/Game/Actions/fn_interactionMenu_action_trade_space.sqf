/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

{
	[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
} forEach ([_this, 0, [], [[]]] call BIS_fnc_param);

[
	format
	[
			"L'échange a été <t color='#74DF00'>accepté</t>.<br/>"
		+	"La cible n'avait cependant pas assez de place pour tout récupérer.<br/>"
		+	"Vous avez reçu :<br/>%1",
		[_this, 1, "", [""]] call BIS_fnc_param
	]
] call AlysiaClient_fnc_info;
