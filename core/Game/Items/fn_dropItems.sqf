/*
	Author : Bryan "Tonic" Boardwine
	Edit : Lyeed
*/
private["_cash"];
_cash = [_this, 0, 0, [0]] call BIS_fnc_param;

{
	private["_value"];
	_value = missionNamespace getVariable _x;
	if (_value > 0) then
	{
		private["_obj", "_pos", "_className"];
		_pos = player modelToWorld[0, 3, 0];
		_className = switch (true) do
		{
			case (_x == "life_invwater"): {"Land_BottlePlastic_V1_F"};
			case (_x in ["life_inv_fuelF", "life_inv_fuelE"]): {"Land_CanisterFuel_F"};
			default {"Land_Suitcase_F"};
		};
		_obj = _className createVehicle _pos;
		[[_obj], "life_fnc_simDisable", nil, true] spawn life_fnc_MP;
		_obj setPosATL [_pos select 0, _pos select 1, 0];
		_obj setVariable["item", [([_x, 1] call life_fnc_varHandle), _value], true];
		missionNamespace setVariable[_x, 0];		
	}
} forEach (life_inv_items);

if (_cash > 0) then
{
	private["_pos", "_obj"];
	_pos = player modelToWorld[0,3,0];
	_obj = "Land_Money_F" createVehicle _pos;
	_obj setVariable["item", ["money", _cash],true];
	_obj setPosATL [_pos select 0, _pos select 1, 0];
	[[_obj], "life_fnc_simDisable", nil, true] spawn life_fnc_MP;
};
