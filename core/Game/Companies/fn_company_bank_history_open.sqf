/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_history", "_list"];
_history = [_this, 0, [], [[]]] call BIS_fnc_param;

createDialog "RscDisplayDefaultList";

disableSerialization;
_list = (findDisplay 16000) displayCtrl 16001;
lbClear _list;

if (_history isEqualTo []) then {
	_list lbAdd "Vide";
} else {
	{
		_index = _list lbAdd format["%1 le %2 de %3 (%4)", _x select 3, _x select 1, _x select 0, _x select 4];
		if ((_x select 2) isEqualTo 1) then {
			_list lbSetPicture [_index, "lyeed_IMG\data\global\ope_plus.paa"];
		} else {
			_list lbSetPicture [_index, "lyeed_IMG\data\global\ope_minus.paa"];
		};
		_list lbSetTooltip [_index, (_list lbText _index)];
	} forEach _history;
};
