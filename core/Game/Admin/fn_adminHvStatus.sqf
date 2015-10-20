/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

if (ALYSIA_hv_lock) then 
{ 
	["<t align='center'>Hotel des ventes activés</t>"] call ALYSIA_fnc_info;
	ALYSIA_hv_lock = false;
}
else 
{ 
	["<t align='center'>Hotel des ventes désactivés</t>"] call ALYSIA_fnc_info; 
	ALYSIA_hv_lock = true;
};

publicVariable "ALYSIA_hv_lock";