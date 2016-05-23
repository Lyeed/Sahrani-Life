/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_object";
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AlysiaClient_fnc_error;
};
if (isNull _object) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (!(player canAdd "Bank_Drill")) exitWith {
	["Vous n'avez pas assez de place dans votre inventaire pour récupérer cet objet."] call AlysiaClient_fnc_error;
};

deleteVehicle _object;

g_action_inUse = true;
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil {((animationState player) isEqualTo "ainvpercmstpsnonwnondnon_putdown_amovpercmstpsnonwnondnon")};
g_action_inUse = false;

player addItem "Bank_Drill";
