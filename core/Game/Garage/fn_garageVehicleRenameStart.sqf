/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_index";

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule."] call AlysiaClient_fnc_error;
};

g_garage_rename = _index;

waitUntil
{
	closeDialog 0;
	!dialog
};

if (!(createDialog "RscDisplayGarageRename")) exitWith {};

ctrlSetText[555991, ((g_garage_vehicles select _index) select 5)];
