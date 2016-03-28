/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_company", "_uid", "_member", "_info", "_data"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_uid = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _company) || (_uid isEqualTo "")) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {
	["La cible n'est une entreprise."] call AlysiaClient_fnc_error;
};
if ((_info select 1) isEqualTo _uid) exitWith {
	["Cette personne est déjà PDG de l'entreprise : <t color='#74DF00'>%1</t>.", (_data select 0)] call AlysiaClient_fnc_error;
};

_data = [_company, _uid] call AlysiaClient_fnc_company_member_data;
if (_data isEqualTo []) exitWith {
	["Cette personne ne fait pas parti de l'entreprise : <t color='#74DF00'>%1</t>.", (_data select 0)] call AlysiaClient_fnc_error;
};

_company setVariable ["company_info", [(_info select 0), (_data select 0), (_info select 2), (_info select 3), (_data select 1), (_info select 5)], true];
[format["<t color='#045FB4'>%1</t> a été nommé à la tête de l'entreprise : <t color='#74DF00'>%2</t>.", (_data select 1), (_info select 0)]] call AlysiaClient_fnc_info;

_member = [_uid] call AlysiaClient_fnc_getPlayerFromUID;
if (!(isNull _member)) then {
	[format["Vous avez été nommé à la tête de l'entreprise : <t color='#74DF00'>%1</t>.", (_info select 0)]] remoteExecCall ["AlysiaClient_fnc_info", _member];
};
