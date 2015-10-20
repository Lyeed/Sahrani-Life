/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (!dialog) exitWith {};

private["_display","_text","_info","_prim","_sec","_vest","_uni","_bp","_attach","_tmp"];
_info = lbData[2902,lbCurSel (2902)];
_info = call compile format["%1", _info];

if (isNil "_info") exitWith { _text ctrlSetText localize "STR_ANOTF_QueryFail"; };
if (isNull _info) exitWith { _text ctrlSetText localize "STR_ANOTF_QueryFail"; };
[[player], "ALYSIA_fnc_adminQueryGetInfo", _info, false] spawn life_fnc_MP;

ctrlShow [2903, true];
ctrlShow [2901, true];

disableSerialization;
_display = findDisplay 2900;
_text = _display displayCtrl 2903;
_text ctrlSetText localize "STR_ANOTF_Query";