/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_txt"];
_txt = [_this, 0, "", [""]] call BIS_fnc_param;

if (_txt isEqualTo "") exitWith {false};

(([_txt, "0123456789"] call AlysiaClient_fnc_TextAllowed) isEqualTo "")