/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
		Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_target", "_display", "_title", "_balance", "_btnL1", "_btnL2", "_btnL3", "_btnL4", "_btnR1", "_btnR2", "_btnR3", "_btnR4", "_txtL1", "_txtL2", "_txtL3", "_txtL4", "_txtR1", "_txtR2", "_txtR3", "_txtR4", "_edit"];
_action = [_this, 0, "", [""]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

disableSerialization;
_display = findDisplay 15000;
if (isNull _display) then
{
	createDialog "RscDisplayATM";
	_display = findDisplay 15000;
};

g_interaction_target = _target;

_title = _display displayCtrl 15001;
_balance = _display displayCtrl 15002;
_btnL1 = _display displayCtrl 15003; 
_btnL2 = _display displayCtrl 15004; 
_btnL3 = _display displayCtrl 15005; 
_btnL4 = _display displayCtrl 15006; 
_btnR1 = _display displayCtrl 15007; 
_btnR2 = _display displayCtrl 15008; 
_btnR3 = _display displayCtrl 15009; 
_btnR4 = _display displayCtrl 15010;
_txtL1 = _display displayCtrl 15011; 
_txtL2 = _display displayCtrl 15012; 
_txtL3 = _display displayCtrl 15013; 
_txtL4 = _display displayCtrl 15014; 
_txtR1 = _display displayCtrl 15015; 
_txtR2 = _display displayCtrl 15016; 
_txtR3 = _display displayCtrl 15017; 
_txtR4 = _display displayCtrl 15018;
_edit = _display displayCtrl 15019;

{
	_x ctrlShow false;
} forEach ([_btnR1, _btnR2, _btnR3, _btnR4, _btnL1, _btnL2, _btnL3, _btnL4, _txtR1, _txtR2, _txtR3, _txtR4, _txtL1, _txtL2, _txtL3, _txtL4, _edit]);

switch (_action) do
{
	case "home": 
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Distributeur</t>";
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Solde </t><t align='center' size='1.2'><t color='#74DF00'>%1</t>kn</t>", [g_atm] call AlysiaClient_fnc_numberText];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retrait</t>";
		_btnL1 buttonSetAction "[""withdraw"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnL1 ctrlShow true;
		_txtL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Dépôt</t>";
		_btnR1 buttonSetAction "[""deposit"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_bank_handle_rank") isEqualTo (player getVariable ["rank", 0])) then
		{
			if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> typeOf(g_interaction_target) >> "money_faction") isEqualTo 1) then
			{
				_txtL4 ctrlSetStructuredText parseText "<t align='right'>Faction</t>";
				_btnL4 buttonSetAction "[""home_faction"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
				_btnL4 ctrlShow true;
				_txtL4 ctrlShow true;
			};
		};
	};

	case "withdraw":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Retrait</t>";
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Montant</t>"];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retirer</t>";
		_btnL1 buttonSetAction "[""withdraw"", g_interaction_target] call AlysiaClient_fnc_atmAction";
		_btnL1 ctrlShow true;
		_txtL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "[""home"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";		
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		_edit ctrlSetText str(getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min"));
		_edit ctrlShow true;
	};

	case "deposit":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Dépôt</t>";
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Montant</t>"];
		
		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Déposer</t>";
		_btnL1 buttonSetAction "[""deposit"", g_interaction_target] call AlysiaClient_fnc_atmAction";
		_btnL1 ctrlShow true;
		_txtL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "[""home"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		_edit ctrlSetText str(getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min"));
		_edit ctrlShow true;
	};

	case "withdraw_faction":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Retrait Faction</t>";
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Montant</t>"];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retirer</t>";
		_btnL1 buttonSetAction "[""withdraw_faction"", g_interaction_target] call AlysiaClient_fnc_atmAction";
		_btnL1 ctrlShow true;
		_txtL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "[""home_faction"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";		
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		_edit ctrlSetText str(getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "withdraw_min"));
		_edit ctrlShow true;
	};

	case "deposit_faction":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Dépôt Faction</t>";
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Montant</t>"];
		
		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Déposer</t>";
		_btnL1 buttonSetAction "[""deposit_faction"", g_interaction_target] call AlysiaClient_fnc_atmAction";
		_btnL1 ctrlShow true;
		_txtL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "[""home_faction"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		_edit ctrlSetText str(getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(g_interaction_target) >> "deposit_min"));
		_edit ctrlShow true;
	};

	case "home_faction":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Distributeur Faction</t>";
		
		_value = switch (playerSide) do
		{
			case east: {gServer_faction_EAST_bank};
			case west: {gServer_faction_WEST_bank};
			case independent: {gServer_faction_GUER_bank};
			case civilian: {gServer_faction_CIV_bank};
		};
		_balance ctrlSetStructuredText parseText format["<t align ='left' size='1.2'>Solde </t><t align='center' size='1.2'><t color='#74DF00'>%1</t>kn</t>", [_value] call AlysiaClient_fnc_numberText];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retrait faction</t>";
		_btnL1 buttonSetAction "[""withdraw_faction"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_txtL1 ctrlShow true;
		_btnL1 ctrlShow true;

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Dépôt faction</t>";
		_btnR1 buttonSetAction "[""deposit_faction"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnR1 ctrlShow true;
		_txtR1 ctrlShow true;

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Récupérer Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";
		_btnR4 ctrlShow true;
		_txtR4 ctrlShow true;

		_txtL4 ctrlSetStructuredText parseText "<t align='left'>Retour</t>";
		_btnL4 buttonSetAction "[""home"", g_interaction_target] call AlysiaClient_fnc_atmScreen";
		_btnL4 ctrlShow true;
		_txtL4 ctrlShow true;
	};
	
	default {["Action non reconnue"] call AlysiaClient_fnc_error};
};
