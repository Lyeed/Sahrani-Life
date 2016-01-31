/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_process"];

_sel = lbCurSel 53101;
if (_sel isEqualTo -1) exitWith {};

_process = lbData[53101, _sel];
if (_process isEqualTo "") exitWith {};

[g_interaction_target, nil, nil, _process] call public_fnc_process_open;
