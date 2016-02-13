/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount", "_receive", "_action"];

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour blanchir votre argent"] call AlysiaClient_fnc_error;
};

_amount = ["illegal_money"] call AlysiaClient_fnc_itemCount;
if (_amount isEqualTo 0) exitWith {
	["Vous n'avez pas d'argent à blanchir"] call AlysiaClient_fnc_error;
};
if (_amount < 10000) exitWith {
	[format["Vous ne pouvez pas blanchir moins de <t color='#8cff9b'>%1</t>kn d'argent sale", ([10000] call AlysiaClient_fnc_numberText)]] call AlysiaClient_fnc_error;
};

if (g_launder != 0) exitWith {
	["Vous êtes déjà en train de blanchir de l'argent<br/>Attendez d'avoir reçu la somme avant de blanchir de nouveau"] call AlysiaClient_fnc_error;
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
	[format["Vous recevrez <t color='#8cff9b'>%1</t>kn sur votre compte bancaire dans quelques minutes", ([_receive] call AlysiaClient_fnc_numberText)]] call AlysiaClient_fnc_info;
	g_launder = _value;
	[13] call AlysiaDB_fnc_query_update_partial;
	(60 * (random(7) + 3)) spawn 
	{
		sleep _this;
		[] call AlysiaClient_fnc_launder_receive;
	};
	[false, "illegal_money", _amount] call AlysiaClient_fnc_handleInv;
};
