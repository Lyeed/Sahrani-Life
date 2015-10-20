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
	["Aucun plant à récolter à proximité"] call public_fnc_error; 
};

if ((time - g_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

if (g_action_gathering) exitWith {
	["Vous êtes déjà en train de ramasser"] call public_fnc_error; 
};

if (_object getVariable["ready", false]) then
{
	private["_amount", "_receive"];

	g_action_gathering = true;
	g_action_delay = time;

	_receive = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> typeOf(_object) >> "receive");
	_amount = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> typeOf(_object) >> "amount");
	if ([true, _receive, _amount] call public_fnc_handleInv) then
	{
		player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
		waitUntil {animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
		deleteVehicle _object;
		titleText[format["Vous avez récolté %1x %2", _amount, ([_receive] call public_fnc_itemGetName)], "PLAIN"];
	}
	else {
		["Votre inventaire est plein"] call public_fnc_error; 
	};
	g_action_gathering = false;
} else {
	["Cette pousse n'est pas encore prête à être récoltée"] call public_fnc_error;
};