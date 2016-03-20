/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_price";

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};

_price = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "price_heal_hopital");
if (g_cash < _price) exitWith
{
	[format
		[
			"Vous n'avez pas assez d'argent<br/><t align='left'>Prix</t><t color='#FF4000' align='right'>%1kn</t>",
			([_price] call AlysiaClient_fnc_numberText)
		]
	] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

[false, _price] call AlysiaClient_fnc_handleCash;
["Veuillez patienter pendant l'administration de vos soins", "buy"] call AlysiaClient_fnc_info;

sleep 6;

if (player distance (_this select 0) > 5) exitWith {
	["Vous êtes trop loin"] call AlysiaClient_fnc_error;
};

[format["Vous avez été soigné pour <t color='#8cff9b'>%1</t>", _price]] call AlysiaClient_fnc_info;
[4000] call AlysiaClient_fnc_handleBlood;
[independent, true, _price, (getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_factionBankHandle", 2];

g_bleed = 0;
g_action_inUse = false;
