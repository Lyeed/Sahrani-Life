/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_company", "_uid", "_member", "_data", "_info"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_uid = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _company) || (isNull _uid)) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {};

_data = [_company, _uid] call AlysiaClient_fnc_company_member_data;
if ([false, _company, _uid] call AlysiaClient_fnc_company_member_handle) then
{
	[format["<t color='#045FB4'>%1</t> a été renvoyé de l'entreprise.", (_data select 1)]] call AlysiaClient_fnc_info;
	_member = [_uid] call AlysiaClient_fnc_getPlayerFromUID;
	if (!(isNull _member)) then {
		[
			format
			[
				"Vous avez été renvoyé par <t color='#045FB4'>%1</t> de l'entreprise : <t color='#74DF00'>%2</t>.",
				(player getVariable ["realname", (name player)]),
				(_info select 0)
			]
		] remoteExecCall ["AlysiaClient_fnc_info", _member];
	};
} else {
	[format["Impossible de renvoyer la personnage de l'entreprise. Il n'en fait peut être déjà plus parti."]] call AlysiaClient_fnc_info;
};
