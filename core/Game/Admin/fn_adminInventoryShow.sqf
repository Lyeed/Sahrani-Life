/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_infos", "_display", "_text", "_infoText"];
_infos = [_this, 0, [], [[]]] call BIS_fnc_param;

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if ((count _infos) == 0) exitWith { closeDialog 0; };
_infoText = "";

{
	_infoText = _infoText + format["<t align='left'>%1</t><t align='right'>%2</t><br/>", [(_x select 1)] call life_fnc_numberText, [(_x select 0)] call life_fnc_varToStr];
} forEach (_infos);

disableSerialization;
_display = findDisplay 2900;
_text = _display displayCtrl 2903;
_text ctrlSetStructuredText parseText _infoText;
