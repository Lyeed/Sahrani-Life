/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

life_teleport = !life_teleport;
if (life_teleport) then
{
	["<t align='center'>Téléportation activé</t>"] call ALYSIA_fnc_info;
	player onMapSingleclick {(vehicle player) setPos _pos; titleFadeOut 2;};
}
else
{
	["<t align='center'>Téléportation désactivé</t>"] call ALYSIA_fnc_info;
	player onMapSingleClick {};
};
