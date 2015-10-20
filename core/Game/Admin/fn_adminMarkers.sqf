/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_markers"];

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

life_markers = !life_markers;
if (life_markers) then { ["<t align='center'>Markers activés</t>"] call ALYSIA_fnc_info; }
else { ["<t align='center'>Markers désactivés</t>"] call ALYSIA_fnc_info; };
