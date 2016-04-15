/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_playSound", "_sound"];
_sound = [_this, 0, "", [""]] call BIS_fnc_param;
_playSound = [_this, 1, false, [false]] call BIS_fnc_param;

profileNamespace setVariable ['ALYSIA_phone_call_ring', _sound];
if ((_playSound) && (_sound != "")) then {
	playSound _sound;
};
