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
if ((time - life_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

if ((vehicle player) != player) exitWith {
	[(localize "STR_NOTF_GatherVeh")] call public_fnc_error; 
};

_plant = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS" >> _zone > "plant");
_seed = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "seed");
if (count (nearestObjects [player, [_plant], (getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "distance"))]) > 0) exitWith { 
	["Vous êtes trop près d'une autre plantation"] call public_fnc_error; 
};
if (!([false, _seed, 1] call public_fnc_handleInv)) exitWith { 
	["Vous devez acheter des graines"] call public_fnc_error;
};

g_action_delay = time;
g_action_inUse = true;
g_action_gathering = true;
if ([false, "engrais", 1] call public_fnc_handleInv) then {
	_hasEngrais = true; 
} else {
	_hasEngrais = false; 
};

titleText[format["Vous avez planté : 1x %1", ([_seed] call public_fnc_itemGetName)], "PLAIN"];
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

[[(getPos player), _plant, _hasEngrais], "TON_fnc_plantServer", false] spawn life_fnc_MP;
g_action_inUse = false;
g_action_gathering = false;