/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_drugs_patched != 0) exitWith {
	["Vous avez déjà un patch d'appliqué"] call public_fnc_error;
};

if ([false, "patch", 1] call public_fnc_handleInv) then 
{
	["Vous vous êtes appliqué un patch anti-addiction"] call public_fnc_info;
	g_drugs_patched = 60 * 20;
	[] spawn
	{
		while {(g_drugs_patched > 0)} do
		{
			g_drugs_patched = g_drugs_patched - 5;
			sleep 5;
		};
	};
};
