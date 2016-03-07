/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_launder > 0) then
{
	[
		format
		[
			"Le virement de <t color='#8cff9b'>%1</t>kn a été fait.<br/>A la prochaine...",
			[g_launder] call AlysiaClient_fnc_numberText
		],
		"BLANCHIMENT",
		true
	] call AlysiaClient_fnc_phone_message_receive;
	[true, g_launder, "Transfert argent sale"] call AlysiaClient_fnc_handleATM;
	g_launder = 0;
	[13] call AlysiaDB_fnc_query_update_partial;
};
