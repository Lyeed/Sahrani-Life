/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount"];

if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "launder") isEqualTo 1) then
{
	if (createDialog "RscDisplayLaunder") then
	{
		_amount = ["illega_money"] call public_fnc_itemCount;
		((findDisplay 29000) displayCtrl 29001) ctrlSetStructuredText parseText format
		[
				"Blanchir de l'argent vous fait perdre un pourcentage sur la somme totale, variant selon la quantité d'argent à blanchir<br/>"
			+	"Vous avez <t color='#8cff9b'>%1</t>kn d'argent sale<br/>Gains : <t color='#8cff9b'>%2</t>kn",
			[_amount] call public_fnc_numberText,
			[[_amount] call public_fnc_launder_calc] call public_fnc_numberText
		];
	};
} else {
	[format["Votre faction <t color='#04B404'>%1</t> n'est pas autorisé blanchir de l'argent sale.", ([playerSide] call public_fnc_sideToStr)]] call public_fnc_error;	
};
