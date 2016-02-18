/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_zone", "_seed", "_plant", "_object", "_plantGrowingtime"];
_zone = [_this, 0, "", [""]] call BIS_fnc_param;

if (g_action_inUse) exitWith {};

scopeName "main";

if (_zone isEqualTo "") then
{
	_seeds = [];
	{
		if (!(getText(_x >> "seed") in _seeds)) then {
			_seeds pushBack [getText(_x >> "seed"), (configName _x)];
		};
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS"));

	{
		_count = [_x select 0] call AlysiaClient_fnc_itemCount;
		if (_count > 0) exitWith
		{
			_seed = _x select 0;
			_plant = _x select 1;
		};
	} forEach _seeds;

	if ((isNil "_seed") || (isNil "_plant")) then
	{
		["Vous n'avez pas de graine"] call AlysiaClient_fnc_error;
		false breakOut "main";
	};

} else {

	if (_zone isEqualTo "") then
	{
		["Aucune zone de récolte n'a été spécifiée"] call AlysiaClient_fnc_error;
		false breakOut "main";
	};

	_plant = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS" >> _zone >> "plant");
	if (count (nearestObjects [player, [_plant], getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "distance")]) > 0) then
	{
		["Vous êtes trop près d'une autre plantation"] call AlysiaClient_fnc_error;
		false breakOut "main";
	};

	_seed = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "seed");
	if (!([false, _seed, 1] call AlysiaClient_fnc_handleInv)) then
	{
		[format["Vous n'avez pas les graines requises (%1)", ([_seed] call AlysiaClient_fnc_itemGetName)]] call AlysiaClient_fnc_error;
		false breakOut "main";
	};
};

g_action_inUse = true;

player playMove "AinvPknlMstpSlayWrflDnon_1";
sleep 2.5;
player playMove "amovpercmstpsnonwnondnon";

titleText[format["Vous avez planté : 1x %1", ([_seed] call AlysiaClient_fnc_itemGetName)], "PLAIN"];
_object = createVehicle [_plant, [((getPos player) select 0), ((getPos player) select 1), (((getPos player) select 2) - (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "groundLevel")))], [], 0, "CAN_COLLIDE"];
_plantGrowingtime = (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "growingTime")) + round(random(getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "extraGrow")));
if ([false, "engrais", 1] call AlysiaClient_fnc_handleInv) then {_plantGrowingtime = round(_plantGrowingtime * 0.7)};
[(_plantGrowingtime / 10), (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "upLevel") / 10), _object] spawn AlysiaClient_fnc_plantGrow;

g_action_inUse = false;
true;
