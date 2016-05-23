private["_keyForward", "_keyLeft", "_keyBackward", "_keyRight", "_keyUp", "_keyDown"];

AlysiaAdmin_fnc_fly_forward =
{
	_vehicle = vehicle player;
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_vehicle setVelocity [(_vel select 0) + (sin _dir * 0.4), (_vel select 1) + (cos _dir * 0.4), 0.4];
};

AlysiaAdmin_fnc_fly_left =
{
	(vehicle player) setdir (getdir(vehicle player) - 2);
};

AlysiaAdmin_fnc_fly_right =
{
	(vehicle player) setdir (getdir(vehicle player) + 2);
};

AlysiaAdmin_fnc_fly_backward =
{
	_vehicle = vehicle player;
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_vehicle setVelocity [(_vel select 0) - (sin _dir * 0.4), (_vel select 1) - (cos _dir * 0.4), 0.4];
};

AlysiaAdmin_fnc_fly_up =
{
	_vehicle = vehicle player;
	_vel = velocity _vehicle;
	_vehicle setVelocity [(_vel select 0), (_vel select 1), 6];
};

AlysiaAdmin_fnc_fly_down =
{
	(vehicle player) setVelocity [0,0,-4];
};

_keyForward = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveForward')) then {call AlysiaAdmin_fnc_fly_forward}"]; 
_keyLeft = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveLeft')) then {call AlysiaAdmin_fnc_fly_left}"]; 
_keyBackward = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveBack')) then {call AlysiaAdmin_fnc_fly_backward}"]; 
_keyRight = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveRight')) then {call AlysiaAdmin_fnc_fly_right}"]; 
_keyUp = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveUp')) then {call AlysiaAdmin_fnc_fly_up}"]; 
_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) in (actionKeys 'MoveDown')) then {call AlysiaAdmin_fnc_fly_down}"]; 

g_staff_on = true;
g_staff_god = true;
g_staff_markers = true;
[player, true] remoteExecCall ['hideObjectGlobal', 2];
onMapSingleClick "(vehicle player) setPos _pos";

while {g_staff_on} do
{
	if (((getPosATL player) select 2) < 2.5) then {
		call AlysiaAdmin_fnc_fly_up;
	} else {
		sleep 1;
	};
};

g_staff_markers = false;
g_staff_god = false;
(vehicle player) setPosATL [(getPosATL (vehicle player)) select 0, (getPosATL (vehicle player)) select 1, 0];
[player, false] remoteExecCall ["hideObjectGlobal", 2];
onMapSingleClick "";

(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyForward];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyLeft];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyBackward];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyRight];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyUp];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyDown];
