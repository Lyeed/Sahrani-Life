/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_item";

if (isNull g_interaction_target) exitWith
{
	["Transfert annulé : Cible invalide."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

_item = lbData[91002, (lbCurSel 91002)];
if (_item isEqualTo "") exitWith
{
	["Transfert annulé : Impossible de récupérer l'objet à transférer."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then {
	[false, g_interaction_target, g_interaction_reduce_var, _item, 1, false] call AlysiaClient_fnc_handleTrunk;
} else {
	["Impossible de récupérer l'objet dans votre inventaire."] call AlysiaClient_fnc_error;
};

[] call AlysiaClient_fnc_virtual_menu_reduce_update;
