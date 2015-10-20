/*
	Author: Bryan "Tonic" Boardwine
*/
private["_ammoType", "_projectile", "_weapon"];
_weapon = _this select 1;
_ammoType = _this select 4; 
_projectile = _this select 6;

if (_weapon == "Skyline_Merlin_01") then { [cursorTarget] call ALYSIA_fnc_fireGather; };
if (_ammoType == "GrenadeHand_stone") then 
{
	_projectile spawn 
	{
		private["_position"];
		while {!isNull _this} do 
		{
			_position = getPosATL _this;
			sleep 0.1;
		};
		[[_position], "life_fnc_flashbang", true, false] spawn life_fnc_MP;
	};
};