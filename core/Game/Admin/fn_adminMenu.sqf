/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list"];

if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (!dialog) exitWith {};
disableSerialization;

ctrlShow [2903, false];
ctrlShow [2901, false];
if ((call life_adminlevel) < 2) then {
	ctrlShow [2910, false];
	ctrlShow [2911, false];
	ctrlShow [2912, false];
	ctrlShow [2913, false];
	ctrlShow [2914, false];
	ctrlShow [2915, false];
	ctrlShow [2916, false];
	ctrlShow [2917, false];
};

_list = ((findDisplay 2900) displayCtrl 2902);
lbClear _list;
{
	private["_side"];
	_side = switch(side _x) do {case west: {"Armée"}; case civilian: {"Civil"}; case east: {"ONU"}; default {"Inconnu"}; };
	_list lbAdd format["%1 - %2", _x getVariable["realname", (name _x)], _side];
	_list lbSetdata [(lbSize _list) - 1, str(_x)];
} forEach (playableUnits);