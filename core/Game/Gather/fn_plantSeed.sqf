/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_zone", "_seed", "_hasEngrais", "_plant"];
_zone = [_this, 0, "", [""]] call BIS_fnc_param;

if (_zone isEqualTo "") exitWith {};
if ((time - g_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

_plant = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS" >> _zone >> "plant");
if (count (nearestObjects [player, [_plant], getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "distance")]) > 0) exitWith { 
	["Vous êtes trop près d'une autre plantation"] call public_fnc_error; 
};

_seed = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "seed");
if (!([false, _seed, 1] call public_fnc_handleInv)) exitWith { 
	[format["Vous n'avez pas les graines requises (%1)", ([_seed] call public_fnc_itemGetName)]] call public_fnc_error;
};

g_action_delay = time;
g_action_inUse = true;

player playMove "AinvPknlMstpSlayWrflDnon_1";
waitUntil {((animationState player) in ["ainvpknlmstpsnonwnondnon_2", "ainvpknlmstpsnonwnondnon_3"])};
player playMove "amovpercmstpsnonwnondnon";
titleText[format["Vous avez planté : 1x %1", ([_seed] call public_fnc_itemGetName)], "PLAIN"];

_pos = getPos player;
_object = createVehicle [_plant, [(_pos select 0), (_pos select 1), ((_pos select 2) - (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "groundLevel")))], [], 0, "CAN_COLLIDE"];
_plantGrowingtime = (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "growingTime")) + round(random(getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "extraGrow")));
if ([false, "engrais", 1] call public_fnc_handleInv) then {
	_plantGrowingtime = round(_plantGrowingtime * 0.7);
};

missionNamespace setVariable [format["%1_PLANTS", (getPlayerUID player)], (missionNamespace getVariable [format["%1_PLANTS", (getPlayerUID player)], []]) + [_object] - [objNull]];
publicVariableServer format["%1_PLANTS", (getPlayerUID player)];

[(_plantGrowingtime / 10), (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "upLevel") / 10), _object] spawn
{
	private["_growtime", "_growup", "_growprcnt", "_object"];
	_growtime = [_this, 0, 0, [0]] call BIS_fnc_param;
	_growup = [_this, 1, 0, [0]] call BIS_fnc_param;
	_object = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

	if (isNull _object) exitWith {};
	
	_growprcnt = 0;
	while {_growprcnt < 100} do
	{
		sleep _growtime;
		if (!(alive _object)) exitWith {
			deleteVehicle _object;
		};
		_object setposATL [(getpos _object select 0), (getpos _object select 1), ((getpos _object select 2) + _growup)];
		_growprcnt = _growprcnt + 10;
	};
	if (alive _object) then {
		_object setVariable ["ready", true, true];
	};
};

g_action_inUse = false;
