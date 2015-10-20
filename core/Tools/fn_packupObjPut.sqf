/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_obj", "_item", "_owner"];
_obj = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};
if ((time - life_action_delay) < 2) exitWith { 
	["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; 
};

_item = switch (typeOf _obj) do
{
	case "RoadBarrier_small_F": {"barriere"};
	case "RoadCone_L_F": {"cone"};
	case "Land_Razorwire_F": {"spikeStrip"};
	case "Land_CncWall4_F": {"murbetonarme"};
	case "Land_BagBunker_Tower_F": {"bunkersable"};
	case "Land_HBarrierWall6_F": {"mursable"};
	case "Land_HBarrierWall_corridor_F": {"couloirsable"};
	case "Land_Canal_Wall_Stairs_F": {"grandmurescalier"};
	case "Land_HBarrierTower_F": {"gueritesable"};
	case "Land_Canal_Wall_10m_F": {"grandmur"};
	case "Land_HBarrierWall_corner_F": {"coinsable"};
	default {""};
};
if (_item isEqualTo "") exitWith { 
	["Cet objet ne peut pas être ramasssé"] call ALYSIA_fnc_error; 
};

_owner = _obj getVariable["owner", ""];
if (!(_owner isEqualTo "") && !((getPlayerUID player) isEqualTo _owner)) exitWith { 
	["Seul le propriétaire de cet objet peut le ramasser"] call ALYSIA_fnc_error; 
};

if ([true, _item, 1] call life_fnc_handleInv) then {
	life_action_delay = time;
	deleteVehicle _obj;
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	titleText[format["* Vous avez récuperé 1x %1 *", [[_item, 0] call life_fnc_varHandle] call life_fnc_varToStr], "PLAIN DOWN"];
} else { 
	["Vous n'avez pas assez de place"] call ALYSIA_fnc_error; 
};
