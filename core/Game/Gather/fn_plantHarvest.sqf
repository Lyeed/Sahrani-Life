/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object"];
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

if (_object getVariable ["ready", false]) then
{
	g_action_inUse = true;
	g_action_delay = time;

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil {((animationState player) != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon")};

	{
		_item = _x select 0;
		if ((_x select 2) isEqualTo 1) then {
			_amount = random(_x select 1);
		} else {
			_amount = _x select 1;
		};

		if (_amount > 0) then
		{
			if ([true, _receive, _amount] call public_fnc_handleInv) then
			{

			} else {
				["Votre inventaire est plein"] call public_fnc_error; 
			};
		};
	} forEach (getArray(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> typeOf(_object) >> "receive"));

	missionNamespace setVariable [format["%1_PLANTS", (getPlayerUID player)], missionNamespace getVariable [format["%1_PLANTS", (getPlayerUID player)], []] - [_object]];
	deleteVehicle _object;
	titleText[format["Vous avez récolté %1x %2", _amount, ([_receive] call public_fnc_itemGetName)], "PLAIN"];

	g_action_inUse = false;
} else {
	["Cette pousse n'est pas encore prête à être récoltée"] call public_fnc_error;
};