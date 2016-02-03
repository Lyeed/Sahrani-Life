/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_price"];

if ((player getVariable ["number", ""]) isEqualTo "") exitWith {};

_price = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "phone_change_number_price");
if (g_atm < _price) exitWith {
	[format["Vous n'avez pas assez d'argent<br/>Prix : <t color='#8cff9b'>%1</t>kn", [_price] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
};

_action = 
[
	"Êtes-vous sûr de vouloir changer de numéro ? Une fois validé vos anciens contacts ne pourront plus vous joindre.<br/><br/><t align='left'>Prix</t><t align='right'><t color='#8cff9b'>10.000</t>kn</t>",
	"Changement de numéro",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[] call AlysiaClient_fnc_phone_numberChange;
	[format["Vous avez changé de numéro<br/>Nouveau : <t color='#FF4000'>%1</t>", (player getVariable ["number", ""])]] call AlysiaClient_fnc_info;
	playSound "buy";
	[false, 10000, "Changement numéro"] call AlysiaClient_fnc_handleATM;
};

["PHONE_CATEGORY"] spawn AlysiaClient_fnc_tabletApp;
