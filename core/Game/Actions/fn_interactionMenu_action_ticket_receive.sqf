/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_side", "_price", "_desc", "_from", "_company"];
_price = round([_this, 0, 0, [0]] call BIS_fnc_param);
_desc = [_this, 1, "Aucune", [""]] call BIS_fnc_param;
_from = [_this, 2, objNull, [objNull]] call BIS_fnc_param;
_company = [_this, 3, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};
if (_price < 1) exitWith {};
if (g_atm < _price) exitWith {
	["La personne n'a <t color='#DF0101'>pas assez</t> d'argent pour payer."] remoteExecCall ["AlysiaClient_fnc_info", _from];
};

_side = side _from;
_action = 
[
	format
	[
			"<t align='center'><img size='6' image='%6'/></t><br/>"
		+	"<t align='left' font='PuristaMedium'>Vous avez reçu une demande de <t color='#74DF00'>paiement</t></t><br/><br/>"
		+	"<t align='left' font='PuristaMedium'>Provenance</t><t align='right'>%1</t><br/>"
		+	"<t align='left' font='PuristaMedium'>Emetteur</t><t align='right'>%2 %3</t><br/>"
		+	"<t align='left' font='PuristaMedium'>Montant</t><t align='right'><t color='#8cff9b'>%4</t>kn</t><br/>"
		+	"<t align='center'>-----------------------</t><br/>"
		+	"<t align='center' font='PuristaMedium'>Description</t><br/>"
		+	"%5",
		if (playerSide isEqualTo civilian) then {(_company getVariable "company_info") select 0} else {getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(_side) >> "name")},
		([_side, (_from getVariable["rank", 0])] call AlysiaClient_fnc_rankToStr),
		(_from getVariable ["realname", (name _from)]),
		([_price] call AlysiaClient_fnc_numberText),
		_desc,
		getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(_side) >> "icon")
	],
	"Paiement",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	if ([false, _price, "Paiement"] call AlysiaClient_fnc_handleATM) then
	{
		playSound "buy";
		["Votre paiement a été <t color='#01DF01'>accepté</t>.", "buy"] remoteExecCall ["AlysiaClient_fnc_info", _from];
		_side = side _from;
		switch (_side) do
		{
			case west: {[civilian, true, _price] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2]};
			case east: {[east, true, _price] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2]};
			case independent: {[independent, true, _price] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2]};
			case civilian: {[_company, true, _price] call AlysiaClient_fnc_company_bank_handle};
		};
	} else {
		["La personne n'a <t color='#DF0101'>pas assez</t> d'argent pour payer."] remoteExecCall ["AlysiaClient_fnc_info", _from];
	};
} else {
	["Votre paiement a été <t color='#FF4000'>refusé</t>."] remoteExecCall ["AlysiaClient_fnc_info", _from];
};
