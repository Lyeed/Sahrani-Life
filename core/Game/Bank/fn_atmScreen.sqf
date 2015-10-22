/*
ArmA 3 N'Ziwasogo Life RPG - ALYSIA
Code written by Devilz80
@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
["_action", "", [""]]
]) exitWith {};

disableSerialization;
_display = findDisplay 15000;
if (isNull _display) then
{
	createDialog "RscDisplayATM";
	_display = findDisplay 15000;
};

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

_btnR1 ctrlShow false;
_btnR2 ctrlShow false;
_btnR3 ctrlShow false;
_btnR4 ctrlShow false;
_btnL1 ctrlShow false;
_btnL2 ctrlShow false;
_btnL3 ctrlShow false;
_btnL4 ctrlShow false;
_txtR1 ctrlShow false;
_txtR2 ctrlShow false;
_txtR3 ctrlShow false;
_txtR4 ctrlShow false;
_txtL1 ctrlShow false;
_txtL2 ctrlShow false;
_txtL3 ctrlShow false;
_txtL4 ctrlShow false;
_edit ctrlShow false;

switch (_action) do
{
	case "home": 
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Distributeur</t>";
		_balance ctrlSetStructuredText parseText format ["<t align ='left' size='1.2'>Solde </t><t align='center' size='1.2'><t color='#74DF00'>%1</t>$</t>", [g_atm] call public_fnc_numberText];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retrait</t>";
		_btnL1 buttonSetAction "['withdraw'] call public_fnc_atmScreen";

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Dépôt</t>";
		_btnR1 buttonSetAction "['deposit'] call public_fnc_atmScreen";

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Reprendre Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";

		_btnL1 ctrlShow true;
		_btnR1 ctrlShow true;
		_btnR4 ctrlShow true;
		_txtL1 ctrlShow true;
		_txtR1 ctrlShow true;
		_txtR4 ctrlShow true;
	};

	case "withdraw":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Distributeur - Retrait</t>";
		_balance ctrlSetStructuredText parseText format ["<t align ='left' size='1.2'>Montant</t>"];

		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Retirer</t>";
		_btnL1 buttonSetAction "['withdraw'] call public_fnc_atmAction";

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "['home'] call public_fnc_atmScreen";

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Reprendre Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";		

		_edit ctrlSetStructuredText parseText "<t align='right'>100</t>";

		_btnL1 ctrlShow true;
		_btnR1 ctrlShow true;
		_btnR4 ctrlShow true;
		_txtL1 ctrlShow true;
		_txtR1 ctrlShow true;
		_txtR4 ctrlShow true;
		_edit ctrlShow true;
	};

	case "deposit":
	{
		_title ctrlSetStructuredText parseText "<t align='center' size='1.5'>Distributeur - Dépôt</t>";
		_balance ctrlSetStructuredText parseText format ["<t align ='left' size='1.2'>Montant</t>"];
		
		_txtL1 ctrlSetStructuredText parseText "<t align='left'>Déposer</t>";
		_btnL1 buttonSetAction "['deposit'] call public_fnc_atmAction";

		_txtR1 ctrlSetStructuredText parseText "<t align='right'>Retour</t>";
		_btnR1 buttonSetAction "['home'] call public_fnc_atmScreen";

		_txtR4 ctrlSetStructuredText parseText "<t align='right'>Reprendre Carte</t>";
		_btnR4 buttonSetAction "closeDialog 0";

		_edit ctrlSetStructuredText parseText "<t align='right'>100</t>";

		_btnL1 ctrlShow true;
		_btnR1 ctrlShow true;
		_btnR4 ctrlShow true;
		_txtL1 ctrlShow true;
		_txtR1 ctrlShow true;
		_txtR4 ctrlShow true;
		_edit ctrlShow true;
	};
	
	default {["Action non reconnue"] call public_fnc_error};
};