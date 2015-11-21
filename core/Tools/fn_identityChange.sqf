/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action"];
_action = 
[
	format["<t color='#0174DF'>RAPPEL</t> Changer d'identité vous fait oublier <t color='#DF0101'>toutes</t> vos licences et coûte <t color='#8cff9b'>150.000kn</t>"],
	"Changement d'identité", 
	"Valider", 
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then 
{
	if (life_atmCash < 150000) exitWith {
		[format["Vous n'avez pas assez d'argent<br/>Il vous manque <t color='#DF0101'>%1kn</t>", 150000 - life_atmCash]] call ALYSIA_fnc_error;
	};
	_action = 
	[
		"Etes vous <t color='#DF0101'>sûr</t> de vouloir changer d'identité ?",
		"Changement d'identité -validation-", 
		"Oui", 
		"Annuler"
	] call BIS_fnc_guiMessage;
	if (_action) then
	{
		if (life_atmCash < 150000) exitWith {
			[format["Vous n'avez pas assez d'argent<br/>Il vous manque <t color='#DF0101'>%1kn</t>", 150000 - life_atmCash]] call ALYSIA_fnc_error;
		};
		{
			missionNamespace setVariable[(_x select 0), false];
		} forEach (life_licenses);
		life_atmCash = life_atmCash - 150000;
		[[(getPlayerUID player), life_atmCash], "ALYSIA_fnc_resetIdentity", false] spawn life_fnc_MP;
		["Vous pouvez vous <t color='#31B404'>déconnecter</t> et changer de nom de profil Arma"] call ALYSIA_fnc_info;
	};
};
