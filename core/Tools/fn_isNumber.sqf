/*
	Author : Bryan "Tonic" Boardwine
*/
private["_array", "_return"];
_array = [(_this select 0)] call KRON_StrToArray;
_return = true;

{
	if (!(_x in ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"])) then {
		_return = false;
	};
} forEach (_array);

_return;