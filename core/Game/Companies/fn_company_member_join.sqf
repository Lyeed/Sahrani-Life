/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_company", "_info", "_actual"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _company) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {};

if (isNull g_company) then
{
	[format["Vous avez rejoint l'entreprise : <t color='#74DF00'>%1</t>.", (_info select 0)]] call AlysiaClient_fnc_info;
	[_company, true, (getPlayerUID player), profileName] call AlysiaClient_fnc_company_member_handle;
	g_company = _company;
} else {
	_actual = g_company getVariable "company_info";
	[format["Vous êtes déjà membre de l'entreprise : <t color='#74DF00'>%1</t>.<br/>Contactez <t color='#045FB4'>%2</t> et demandez-lui de quitter l'entreprise.", (_actual select 0), (_actual select 4)]] call AlysiaClient_fnc_error;
};
