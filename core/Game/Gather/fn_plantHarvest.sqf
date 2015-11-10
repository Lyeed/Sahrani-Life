/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_space"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Aucune plante à récolter à proximité"] call public_fnc_error; 
};

if ((time - g_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train de ramasser"] call public_fnc_error; 
};

g_action_delay = time;

if (_object getVariable ["ready", false]) then
{
	g_action_inUse = true;
	
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil {((animationState player) != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon")};

	_space = true;

	{
		private["_amount"];
		_amount = 0;
		if ((_x select 2) isEqualTo 1) then {
			_amount = [(_x select 0), random(_x select 1), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		} else {
			_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		};

		if ((_amount isEqualTo 0) && (_forEachIndex isEqualTo 0)) exitWith {
			_space = false;
		};

		[true, (_x select 0), _amount] call public_fnc_handleInv;
	} forEach (getArray(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> typeOf(_object) >> "receive"));

	if (_space) then {
		deleteVehicle _object;		
	} else {
		["Votre inventaire est plein"] call public_fnc_error;
	};
	
	g_action_inUse = false;
} else {
	["Cette pousse n'est pas encore prête à être récoltée"] call public_fnc_error;
};