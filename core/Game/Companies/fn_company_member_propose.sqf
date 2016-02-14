/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_company", "_info", "_action"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_company = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _company) || (isNull _from)) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {};

if (!(isNull g_company)) exitWith {
	[format["<t color='#045FB4'>%1</t> est déjà employé d'une entreprise.", (player getVariable ["realname", profileName])]] remoteExecCall ["AlysiaClient_fnc_info", _from];
};

_action = 
[
	format["<t color='#045FB4'>%1</t> vous propose de rejoindre son entreprise : <t color='#74DF00'>%2</t>.", (_info select 0), (_info select 4)],
	"Offre d'embauche",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[_company] call AlysiaClient_fnc_company_member_join;
	["Votre offre d'embauche a été <t color='#3ADF00'>acceptée</t>."] remoteExecCall ["AlysiaClient_fnc_info", _from];
} else {
	["Votre offre d'embauche a été <t color='#DF0101'>refusée</t>."] remoteExecCall ["AlysiaClient_fnc_info", _from];
};
