/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (([_this, 0, 0, [0]] call BIS_fnc_param) isEqualTo 0) then
{
	["Vous n'apparaîtrez plus dans l'annuaire téléphonique."] call AlysiaClient_fnc_info;
	g_phone_annuaire = false;
} else {
	["Vous serez présent dans l'annuaire téléphonique très prochainement."] call AlysiaClient_fnc_info;
	g_phone_annuaire = true;
};
