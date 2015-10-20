/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_ring"];
disableSerialization;

_display = findDisplay 7500;
if (isNull _display) exitWith {};

_list = _display displayCtrl 8351;
lbClear _list;

_ring = profileNamespace getVariable["ALYSIA_phone_recv", 1];

{
	_index = _list lbAdd format["Sonnerie %1 %2", (_forEachIndex + 1), if (_ring isEqualTo (_forEachIndex + 1)) then {"(Actuelle)"} else {""}];
	_list lbSetData [_index, _x];
} forEach (
	[
		"message_rcv_1",
		"message_rcv_2",
		"message_rcv_3",
		"message_rcv_4",
		"message_rcv_5",
		"message_rcv_6",
		"message_rcv_7",
		"message_rcv_8",
		"message_rcv_9",
		"message_rcv_10"
	]);
_list lbSetCurSel (_ring - 1);

if (profileNamespace getVariable["ALYSIA_phone_SILENT", false]) then {
	(_display displayCtrl 8360) cbSetChecked true;
} else {
	(_display displayCtrl 8360) cbSetChecked false;
};