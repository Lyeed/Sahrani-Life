/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_info", "_members", "_names", "_uids", "_list"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

if (isNull _company) exitWith {closeDialog 0};

_info = _company getVariable "company_info";
_members = _company getVariable "company_members";
if (isNil "_info") exitWith {};

_uids = _members select 0;
_names = _members select 1;

(_display displayCtrl 9602) ctrlSetText getText(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "image");

(_display displayCtrl 9603) ctrlSetStructuredText parseText format
[
	"<t align='center' size='1.1'>%1 : %2</t>",
	getText(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "name"),
	(_info select 0)
];

(_display displayCtrl 9605) ctrlSetStructuredText parseText format
[
	"<t align='left'>Membres</t><t align='right'>%1/%2</t>",
	count(_uids),
	getNumber(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "members_max")
];

_list = _display displayCtrl 9606;
lbClear _list;

{
	_index = _list lbAdd format
	[
		"%1%2",
		_x,
		if (_x isEqualTo (player getVariable ["realname", profileName])) then {" (Vous)"} else {""}
	];
	_list lbSetData [_index, (_uids select _forEachIndex)];
} forEach _names;

if ((_info select 1) isEqualTo (getPlayerUID player)) then
{
	[9607, true] call AlysiaClient_fnc_tabletShow;
	[9608, true] call AlysiaClient_fnc_tabletShow;
	[9609, true] call AlysiaClient_fnc_tabletShow;
	[9610, true] call AlysiaClient_fnc_tabletShow;
	[9611, true] call AlysiaClient_fnc_tabletShow;
	[9612, true] call AlysiaClient_fnc_tabletShow;
	[9613, true] call AlysiaClient_fnc_tabletShow;
	[9614, true] call AlysiaClient_fnc_tabletShow;
	[9615, true] call AlysiaClient_fnc_tabletShow;

	(_display displayCtrl 9615) ctrlSetStructuredText parseText format
	[
		"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
		[(_company getVariable ["company_bank", 0])] call AlysiaClient_fnc_numberText
	];

	_list ctrlSetEventHandler ["LBSelChanged", "_this call AlysiaClient_fnc_APP_company_update;"];
} else {
	_list ctrlRemoveAllEventHandlers "LBSelChanged";
};

_list lbSetCurSel 0;
