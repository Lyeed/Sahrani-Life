/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_text", "_from", "_inv", "_keys", "_money"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_inv = [_this, 1, [], [[]]] call BIS_fnc_param;
_keys = [_this, 2, [], [[]]] call BIS_fnc_param;
_money = [_this, 3, 0, [0]] call BIS_fnc_param;

if (isNull _from) exitWith {};

_text = "";

if (_money > 0) then
{
	_text = _text + format["- %1kn<br/>", ([_money] call AlysiaClient_fnc_numberText)];
};

{
	_text = _text + format["- %1x %2<br/>", ([(_x select 1)] call AlysiaClient_fnc_numberText), ([(_x select 0)] call AlysiaClient_fnc_itemGetName)];
} forEach _inv;

{
	_text = _text + format["- Clef (%1)<br/>", getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName")];
} forEach _keys;

_action = 
[
	format
	[
		"<t align='center'><img size='7' image='lyeed_IMG\data\player_interactions\actions\action_trade.paa'/><br/><t color='#DA81F5'>ECHANGE</t><br/><br/>Un échange vous a été proposé. En acceptant vous recevrez :</t><br/><br/>%1", 
		_text
	],
	"Echange reçu",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[true, _money] call AlysiaClient_fnc_handleCash;

	{
		if ((alive _x) && !(_x in g_vehicles)) then
		{
			g_vehicles pushBack _x;
			[(getPlayerUID player), playerSide, _x] call AlysiaServer_fnc_keyManagement;
		};
	} forEach _keys;

	{
		_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
		if (_amount isEqualTo (_x select 1)) then
		{
			[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
			_inv deleteAt _forEachIndex;
		} else {
			if (_amount > 0) then
			{
				[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
				(_inv select _forEachIndex) set [1, (_x select 1) - _amount];
			};
		}
	} forEach _inv;
	
	if (_inv isEqualTo []) then {
		["L'échange a été accepté"] remoteExecCall ["AlysiaClient_fnc_info", _from];
	} else {
		["Vous n'avez pas assez de place pour tout récupérer"] call AlysiaClient_fnc_info;
		[_inv] remoteExecCall ["AlysiaClient_fnc_interactionMenu_action_trade_space", _from];
	};
} else {
	[_inv, _keys, _money] remoteExecCall ["AlysiaClient_fnc_interactionMenu_action_trade_refuse", _from];
};
