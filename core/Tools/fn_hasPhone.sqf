/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_radio";

if (!(call TFAR_fnc_haveSWRadio)) exitWith {false};

_radio = (call TFAR_fnc_activeSwRadio);
if (isNil "_radio") exitWith {false};

["Lyeed_Phone", _radio] call BIS_fnc_inString;
