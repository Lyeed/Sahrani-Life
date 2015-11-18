/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_text"];

if (!params [
		["_from", objNull, [objNull]],
		["_inv", [], [[]]],
		["_keys", [], [[]]],
		["_money", 0, [0]]
	]) exitWith {};

if (isNull _from) exitWith {};

_text = "";

if (_money > 0) then
{
	_text = _text + format["- %1$<br/>", ([_money] call public_fnc_numberText)];
};

{
	_text = _text + format["- %1x %2<br/>", ([(_x select 1)] call public_fnc_numberText), ([(_x select 0)] call public_fnc_itemGetName)];
} forEach (_inv);

{
	_text = _text + format["- Clef (%1)<br/>", getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName")];
} forEach (_keys);

_action = 
[
	format
	[
		"<t align='center'><img size='7' image='\lyeed_IMG\data\player_interactions\actions\action_trade.paa'/><br/><t color='#DA81F5'>ECHANGE</t><br/><br/>Un échange vous a été proposé. En acceptant vous recevrez :</t><br/><br/>%1", 
		_text
	],
	"Echange reçu",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[true, _money] call public_fnc_handleCash;

	{
		if ((alive _x) && !(_x in g_vehicles)) then {
			g_vehicles pushBack _x;
		};
	} forEach (_keys);

	{
		_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		if (_amount isEqualTo (_x select 1)) then
		{
			[true, (_x select 0), _amount] call public_fnc_handleInv;
			_inv deleteAt _forEachIndex;
		} else {
			if (_amount > 0) then
			{
				[true, (_x select 0), _amount] call public_fnc_handleInv;
				(_inv select _forEachIndex) set [1, (_x select 1) - _amount];
			};
		}
	} forEach (_inv);
	if (_inv isEqualTo []) then {
		["L'échange a été accepté"] remoteExecCall ["public_fnc_info", _from];
	} else {
		["Vous n'avez pas assez de place pour tout récupérer"] call public_fnc_info;
		[_inv] remoteExecCall ["public_fnc_interactionMenu_action_trade_space", _from];
	};
} else {
	[_inv, _keys, _money] remoteExecCall ["public_fnc_interactionMenu_action_trade_refuse", _from];
};