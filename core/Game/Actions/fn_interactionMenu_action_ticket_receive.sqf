/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_side", "_price", "_desc", "_from"];
_price = [_this, 0, 0, [0]] call BIS_fnc_param;
_desc = [_this, 1, "", [""]] call BIS_fnc_param;
_from = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

if (g_atm < _price) exitWith {
	["La personne n'a pas assez d'argent pour payer"] remoteExecCall ["AlysiaClient_fnc_info", _from];
};

_side = side _from;
_action = 
[
	format
	[
		"<t align='center'><img size='6' image='%6'/><br/>Vous avez reçu une demande de <t color='#74DF00'>paiement</t></t><br/><br/><t align='left' font='PuristaMedium'>Provenance</t><t align='right'>%1</t><br/><t align='left' font='PuristaMedium'>Emetteur</t><t align='right'>%2 %3</t><br/><t align='left' font='PuristaMedium'>Montant</t><t align='right'><t color='#8cff9b'>%4</t>kn</t><br/><t align='center'>-----------------------</t><br/><t align='center' font='PuristaMedium'>Description</t><br/>%5",
		getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(_side) >> "name"),
		([_side, (_from getVariable["rank", 0])] call AlysiaClient_fnc_rankToStr),
		(_from getVariable ["realname", (name _from)]),
		([_price] call AlysiaClient_fnc_numberText),
		_desc,
		getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(side _from) >> "icon")
	],
	"Paiement demandé",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[false, _price, "Paiement"] call AlysiaClient_fnc_handleATM;
	playSound "buy";
	["<t align='center'>Votre paiement a été <t color='#01DF01'>accepté</t></t>"] remoteExecCall ["AlysiaClient_fnc_info", _from];
} else {
	["<t align='center'>Votre paiement a été <t color='#FF4000'>refusé</t></t>"] remoteExecCall ["AlysiaClient_fnc_info", _from];
};
