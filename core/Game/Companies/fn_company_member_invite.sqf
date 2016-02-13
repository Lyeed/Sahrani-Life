/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_who", "_company", "_info", "_max", "_item"];
_who = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_company = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _company) || (isNull _who)) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {};

_max = getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "members_max");
if (count((_company getVariable "company_members") select 0) >= _max) exitWith {
	[format["<t color='#74DF00'>%1</t> comprends déjà %2 employés et ne peut en avoir plus", (_info select 0), _max]] call AlysiaClient_fnc_error;
};

if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(side _who) >> "companies" >> "employee") isEqualTo 0) exitWith {
	["La personne que vous essayez de recruter n'est pas en mesure d'être employée d'une entreprise"] call AlysiaClient_fnc_error;
};

_item = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(side _who) >> "identity_item");
if ((_item != "") && !(_item in (magazines _who))) exitWith {
	[format[
		"La personne que vous essayez de recruter dans l'entreprise <t color='#74DF00'>%1</t> n'a pas l'objet nécessaire pour prouver son identité (%1).",
		(([_item] call AlysiaClient_fnc_fetchCfgDetails) select 1)
	]] call AlysiaClient_fnc_error;
};

[format["Vous avez proposé à <t color='#045FB4'>%1</t> de rejoindre l'entreprise <t color='#74DF00'>%2</t>.", (_who getVariable ["realname", (name _who)]), (_info select 0)]] call AlysiaClient_fnc_info;
[player, _company] remoteExec ["AlysiaClient_fnc_company_member_propose", _who];
