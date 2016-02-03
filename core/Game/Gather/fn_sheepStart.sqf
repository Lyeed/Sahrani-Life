/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!(g_sheeps isEqualTo [])) exitWith {
	["Vous possèdez déjà des moutons"] call AlysiaClient_fnc_error;
};

[player] remoteExecCall ["AlysiaServer_fnc_sheepGenerate", 2];
