/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount", "_receive", "_action"];

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour blanchir votre argent."] call AlysiaClient_fnc_error;
};

_amount = ["illegal_money"] call AlysiaClient_fnc_itemCount;
if (_amount isEqualTo 0) exitWith {
	["Vous n'avez pas d'argent à blanchir."] call AlysiaClient_fnc_error;
};
if (g_launder > 0) exitWith {
	["Vous êtes déjà en train de blanchir de l'argent<br/>Attendez d'avoir reçu la somme avant de blanchir de nouveau."] call AlysiaClient_fnc_error;
};

closeDialog 0;
_receive = [_amount] call AlysiaClient_fnc_launder_calc;
_action =
[
	format
	[
		"Vous êtes sur le point de blanchir <t color='#8cff9b'>%1</t>kn d'argent sale vers votre <t color='#FF4000'>compte bancaire</t>. Une fois blanchie vous recevrez <t color='#8cff9b'>%2</t>kn", 
		[_amount] call AlysiaClient_fnc_numberText,
		[_receive] call AlysiaClient_fnc_numberText
	],
	"Blanchiment",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	if ([false, "illegal_money", _amount] call AlysiaClient_fnc_handleInv) then
	{
		g_launder = _receive;
		[(getPlayerUID player), (player getVariable "realname"), g_launder] remoteExecCall ["AlysiaServer_fnc_logLaunder", 2];
		[format["Vous recevrez <t color='#8cff9b'>%1</t>kn sur votre compte bancaire dans quelques minutes. Ne vous déconnectez pas !", ([_receive] call AlysiaClient_fnc_numberText)]] call AlysiaClient_fnc_info;
		[13] call AlysiaDB_fnc_query_update_partial;
		uiSleep ((round(random(15)) + 3) * 60);
		[] call AlysiaClient_fnc_launder_receive;
	};
};
