/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price"];

_price = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "price_heal_hopital");
if (g_cash < _price) exitWith {
	[format
		[
			"Vous n'avez pas assez d'argent<br/><t align='left'>Prix</t><t color='#FF4000' align='right'>%1kn</t>",
			([_price] call public_fnc_numberText)
		]
	] call public_fnc_error;
};

if ((independent countSide allPlayers) isEqualTo 0) then
{
	[false, _price] call public_fnc_handleCash;
	["Veuillez patienter pendant l'administration de vos soins", "buy"] call public_fnc_info;

	sleep 8;

	if (player distance (_this select 0) > 5) exitWith {
		["Vous êtes trop loin"] call public_fnc_error;
	};

	["Vous avez été soigné"] call public_fnc_info;
	[4000] call public_fnc_handleBlood;
	g_bleed = 0;
} else {
	["Veuillez contacter les médecins de garde pour vous administrer vos soins"] call public_fnc_error;	
};
