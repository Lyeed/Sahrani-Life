/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_action"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};
if (g_action_inUse) exitWith {};

g_action_inUse = true;

if (!(isNull g_company) && {(((g_company getVariable 'company_info') select 2) isEqualTo 'money_transfer')}) then {
	[_object] spawn AlysiaClient_fnc_moneyBagHandle;
} else {
	_action = 
	[
		"En ramassant ce sac, vous le transformerez en <t color='#DF0101'>argent sale</t>", 
		"Validation",
		"Valider",
		"Annuler"
	] call BIS_fnc_guiMessage;
	if (_action) then
	{
		if (isNull _object) then {
			["Impossible de trouver le sac. Quelqu'un l'a surement ramasser avant vous."] call AlysiaClient_fnc_error;
		} else {
			deleteVehicle _object;
			player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
			[true, "illegal_money", 2000] call AlysiaClient_fnc_handleInv;			
		};
	};
};

g_action_inUse = false;
