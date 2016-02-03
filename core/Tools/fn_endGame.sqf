/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isDedicated) exitWith {};
if (missionNamespace getVariable ["g_connected", false]) then
{
	systemChat "Sauvegarde des véhicules dans 2 minutes. VEUILLEZ DESCENDRE DE VOTRE VEHICULE et DECONNECTER";
	playmusic "LeadTrack01_F";
	sleep 94;
	closeDialog 0;
	sleep 1;
	[] call AlysiaDB_fnc_query_update_disconnect;
	sleep 1;
	"Bye" call BIS_fnc_endMission;
} else {
	"Bye" call BIS_fnc_endMission;
};
