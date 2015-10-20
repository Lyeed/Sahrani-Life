/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

if (_type isEqualTo 0) then {
	_index = lbCurSel 8320;
	if (_index isEqualTo -1) exitWith {};
	g_phone_messages deleteAt _index;
} else {
	g_phone_messages = [];
};

["phone_messages_read"] spawn public_fnc_tabletApp;