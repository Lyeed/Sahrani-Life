/*
	Author : Lyeed, Olivier ho
*/
private["_position", "_objPut", "_action", "_item", "_itemClassname"];
_item = _this select 0;

if (!isNull g_objPut) exitWith {
	["Vous deployez déjà un élèment"] call public_fnc_error; 
};

if (!([false, _item, 1] call public_fnc_handleInv)) exitWith {};

_itemClassname = switch(_item) do
{
	case "barriere": {"RoadBarrier_small_F"};
	case "cone": {"RoadCone_L_F"};
	case "spikeStrip": {"Land_Razorwire_F"};
	case "murbetonarme": {"Land_CncWall4_F"};
	case "bunkersable": {"Land_BagBunker_Tower_F"};
	case "mursable": {"Land_HBarrierWall6_F"};
	case "couloirsable": {"Land_HBarrierWall_corridor_F"};
	case "grandmurescalier": {"Land_Canal_Wall_Stairs_F"};
	case "gueritesable": {"Land_HBarrierTower_F"};
	case "grandmur": {"Land_Canal_Wall_10m_F"};
	case "coinsable": {"Land_HBarrierWall_corner_F"};
	default {""};
};
if (_itemClassname == "") exitWith {};

_objPut =  _itemClassname createVehicle [0, 0, 0];
switch (_itemClassname) do
{
	case "RoadBarrier_small_F":
	{
		_objPut attachTo [player, [0, 3.5, 0]];
		_objPut setDir 90;
	};
	case "RoadCone_L_F":
	{
		_objPut attachTo [player, [0, 2.5, 0]];
		_objPut setDir 90;
	};
	case "Land_Razorwire_F":
	{
		_objPut attachTo [player,[0, 5.5, 0]];
		_objPut setDir 90;
	};
	default
	{
		_objPut attachTo [player, [0, 5, 1.5]];
		_objPut setDir 0;
	};
};

life_objPut = _objPut;

_action = player addAction["<t color='#FFFF33'>Placer</t>",{ if (!isNull life_objPut) then { detach life_objPut; life_objPut = ObjNull; }; }, "", 99999, true, true, "", '!isNull life_objPut'];
waitUntil {isNull life_objPut};
player removeAction _action;

if (!(isNull _objPut)) then 
{
	private["_posZ"];
	_posZ = (getPosATL player) select 2;
	if (_itemClassname in ["Land_Canal_Wall_Stairs_F", "Land_Canal_Wall_10m_F"]) then { _posZ = _posZ + 3.5; };
	if (_itemClassname == "Land_Razorwire_F") then { _posZ = 0; };

	_objPut setVariable["isPackable", true, true];
	_objPut setPos [(getPos _objPut) select 0, (getPos _objPut) select 1, _posZ];	
	if (_itemClassname == "Land_Razorwire_F") then {
		_objPut setDamage 1;
		[[_objPut], "TON_fnc_spikeStrip", false, false] spawn life_fnc_MP;
	};
	if (_itemClassname in ["Land_CncWall4_F", "Land_BagBunker_Tower_F", "Land_HBarrierWall6_F", "Land_HBarrierWall_corridor_F", "Land_Canal_Wall_Stairs_F", "Land_HBarrierTower_F", "Land_Canal_Wall_10m_F", "Land_HBarrierWall_corner_F"]) then {
		_objPut setVariable["owner", (getPlayerUID player), true];
	};
};

