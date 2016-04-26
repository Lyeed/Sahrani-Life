/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 9551;
lbClear _list;

{
	_data = _x select 0;
	_index = _list lbAdd format["%1 par %2 il y a %3 minutes", (_data select 1), (_data select 0), round((serverTime - ((_x select 1) - (15 * 60))) / 60)];
	_list lbSetData [_index, format["<t align='left'>Auteur : %1</t><t align='right'>Titre : %2</t><br/>%3", (_data select 0), (_data select 1), (_data select 2)]];
	_list lbSetPicture [_index, "lyeed_IMG\data\tablet\announces\action_announces_show.paa"];
} forEach (missionNamespace getVariable ["gServer_tablet_announces", []]);

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};
