/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount", "_target", "_info"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (g_company != _target) exitWith {
	["Vous devez blanchir l'argent dans votre entreprise."] call AlysiaClient_fnc_error;
};

_info = _target getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de récupérer les informations de l'entreprise."] call AlysiaClient_fnc_error;
};

_amount = ctrlText 70002;
if (_amount < 20000) exitWith {
	["Vous devez blanchir au minimum <t color='#8cff9b'>%1</t>kn."] call AlysiaClient_fnc_error;
};

if (((gServer_rebootHour * 60) - serverTime) < (30 * 60)) exitWith
{
	[
		format
		[
			"Le serveur redémarre dans <t color='#74DF00'>%1</t>.<br/>Le temps de blanchiment est d'environ <t color='#74DF00'>%2</t>.<br/>Impossible de blanchir.",
			[(gServer_rebootHour * 60) - serverTime, "H:MM:SS"] call CBA_fnc_formatElapsedTime,
			[(30 * 60), "H:MM:SS"] call CBA_fnc_formatElapsedTime
		]
	] call AlysiaClient_fnc_error;
};

if (_target getVariable ["launder", false]) exitWith {
	["Votre entreprise est déjà en train de blanchir de l'argent."] call AlysiaClient_fnc_error;
};

if ([false, "illegal_money", _amount] call AlysiaClient_fnc_handleInv) then
{
	[
		format
		[
			"L'entreprise <t color='#74DF00'>%1</t> recevra <t color='#8cff9b'>%2</t>kn dans son compte en banque dans quelques minutes.",
			(_info select 0),
			[_amount] call AlysiaClient_fnc_numberText
		]
	] call AlysiaClient_fnc_info;
	[_target, _amount] remoteExec ["AlysiaServer_fnc_company_launder", 2];
	[1] call AlysiaDB_fnc_query_update_partial;
	[(getPlayerUID player), (player getVariable "realname"), _amount, (_info select 0)] remoteExecCall ["AlysiaServer_fnc_logLaunder", 2];
} else {
	["Vous n'avez pas autant d'argent sale sur vous."] call AlysiaClient_fnc_error;
};
