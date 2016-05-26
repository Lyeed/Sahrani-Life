/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_display", "_reasons"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

g_interaction_target = _object;

createDialog "RscDisplayCompanyLaunder";

disableSerialization;
_display = findDisplay 70000;

(_display displayCtrl 70002) ctrlSetText str(["illegal_money"] call AlysiaClient_fnc_itemCount);
(_display displayCtrl 70007) buttonAction "[g_interaction_target] spawn AlysiaClient_fnc_company_launder_action;";

_reasons = _display displayCtrl 70001;
_reason lbAdd "Demande de paiement";
_reason lbAdd "Activité professionnelle";
_reasons lbSetCurSel 0;
