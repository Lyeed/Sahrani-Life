/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_hours", "_minuts"];
_hours = date select 3;
_minuts = date select 4;

if (_hours < 10) then {
	_hours = format["0%1", _hours];
};
if (_minuts < 10) then {
	_minuts = format["0%1", _minuts];
};

format["%1:%2", _hours, _minuts];