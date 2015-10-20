/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (life_inv_bip == 0) exitWith {
	["Vous n'avez pas de télécommande"] call ALYSIA_fnc_error; 
};

if ((time - life_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; 
};

life_action_delay = time;

{
	if ((_x animationPhase "Door_1_rot") == 1) then {
		_x animate ["Door_1_rot", 0];
	} else {
		_x animate ["Door_1_rot", 1];
	};
} forEach (nearestObjects [player, ["Land_BarGate_F"], 15]);