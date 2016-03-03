/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_obj", "_action_1"];
_obj = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (!(isNull _obj) && !(isNull(attachedTo _obj))) exitWith {
	["Quelqu'un porte déjà ce sac"] call AlysiaClient_fnc_error;
};

if (isNull _obj) then {
	_obj = "Land_Bag_EP1" createVehicle (getPos player);
};

_obj attachTo [player, [0, 0.4, 0.7]];
player setVariable ["money_transfer", _obj];

_action_1 = player addAction [format["Déposer <t color='#FFFF33'>%1</t>", ["money_transfer"] call AlysiaClient_fnc_itemGetName],
{
	[] spawn
	{
		if (!g_action_inUse) then
		{
			g_action_inUse = true;
			player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
			_obj = player getVariable ["money_transfer", objNull];
			_obj attachTo [player, [0, 0.7, 0.8]];
			detach _obj;
			_obj setPosATL (getPosATL _obj);
			_obj setVariable ["money_bank", true, true];
			player setVariable ["money_transfer", objNull];
			g_action_inUse = false;
		};
	};
}, "", 9999992, true, true, "",'!(isNull (player getVariable ["money_transfer", objNull]))'];

while {!(isNull _obj) && !(isNull (attachedTo _obj))} do
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
		if (!(_atm getVariable ["inUse", false]) && !g_action_inUse) then
		{
			_max = getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(_atm) >> "money_stock");
			_amount = _atm getVariable ["money", _max];
			if ((_max - _amount) > 0) then
			{
				_atm setVariable ["inUse", true, true];
				g_action_inUse = true;
				player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
				waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
				playSound "buy";
				deleteVehicle _obj;
				[g_company, true, 2000 + ((_max - _amount) / 50)] call AlysiaClient_fnc_company_bank_handle;
				_amount = _amount + 2000;
				if (_amount > _max) then {
					_amount = _max;
				};
				_atm setVariable ["money", _amount, true];
				_atm setVariable ["inUse", false, true];
				g_action_inUse = false;
			};
		};
	};

	sleep 1;
};

player removeAction _action_1;
