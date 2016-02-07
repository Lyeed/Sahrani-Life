/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_obj"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (g_action_inUse) exitWith {};

if (!(isNull (player getVariable ["money_transfert", objNull]))) exitWith {
	["Vous transportez déjà un sac de billets"] call AlysiaClient_fnc_error;
};

if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas récupérer de sac alors que le coffre est en cours d'utilisation"] call AlysiaClient_fnc_error;
};

if ([false, _vehicle, "Trunk", "money_transfert", 1] call AlysiaClient_fnc_handleTrunk) then
{
	closeDialog 0;

	g_action_inUse = true;

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

	_obj = "Land_Bag_EP1" createVehicle (getPos player);
	_obj attachTo [player, [0,0.4,0.7]];
	player setVariable ["money_transfert", _obj];

	g_action_inUse = false;

	while {!(isNull _obj)} do
	{
		if (
			(player getVariable ["is_coma", false]) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false])
		) exitWith {
			detach _obj;
		};

		_atm = (nearestObjects [player, (call g_atms), 2]) select 0;
		if (!(isNil "_atm")) then
		{
			if (!(_atm getVariable ["inUse", false])) then
			{
				_max = getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(_atm) >> "money_stock");
				_amount = _atm getVariable ["money", _max];
				if ((_max - _amount) > 0) then
				{
					_atm setVariable ["inUse", true, true];
					playSound "buy";
					deleteVehicle _obj;
					[true, 2000 + ((_max - _amount) / 50)] call AlysaClient_fnc_company_bank_handle;
					_amount = _amount + 2000;
					if (_amount > _max) then {
						_amount = _max;
					};
					_atm setVariable ["money", _amount, true];
					_atm setVariable ["inUse", false, true];
				};
			};
		};

		sleep 1;
	};
} else {
	["Le coffre ne comprend aucun sac de billets de banque"] call AlysiaClient_fnc_error;
};
