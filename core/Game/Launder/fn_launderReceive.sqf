/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	format
	[
		"Vous avez reçu l'argent de votre blanchiment sur votre compte<br/><br/><t align='left'>Total</t><t align='right' color='#8cff9b'>%1$</t>", 
		[g_launder] call public_fnc_numberText
	], "buy"
] call public_fnc_info;
[true, 1, g_launder, false] call public_fnc_handleMoney;
g_launder = 0;
[13] call MySQL_fnc_updatePartial;