/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_text", "_from", "_inv", "_keys_vehicles", "_money", "_keys_buildings"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_inv = [_this, 1, [], [[]]] call BIS_fnc_param;
_keys_vehicles = [_this, 2, [], [[]]] call BIS_fnc_param;
_money = [_this, 3, 0, [0]] call BIS_fnc_param;
_keys_buildings = [_this, 4, [], [[]]] call BIS_fnc_param;

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
	_text = _text + format["- Clef de véhicule (%1)<br/>", getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName")];
} forEach _keys_vehicles;

{
	_text = _text + format["- Clef de bâtiment (%1)<br/>", mapGridPosition _x];
} forEach _keys_buildings;

_action =
[
	format
	[
			"<t align='center'>"
		+	"<img size='7' image='lyeed_IMG\data\interactions\player_to_player_basics\action_trade.paa'/><br/>"
		+	"<t color='#DA81F5'>ECHANGE</t><br/><br/></t>"
		+	"Un échange vous a été proposé.<br/>"
		+	"En acceptant vous recevrez :<br/>%1",
		_text
	],
	"Echange",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[true, _money] call AlysiaClient_fnc_handleCash;

	if ((count _keys_buildings) > 0) then
	{
		{
			if ((alive _x) && !(_x in g_houses)) then
			{
				_marker = createMarkerLocal [format["house_%1", (count g_houses)], (getPosATL _x)];
				_marker setMarkerTextLocal "Chez vous";
				_marker setMarkerColorLocal "ColorWhite";
				_marker setMarkerTypeLocal "Maels_housing";
				_marker setMarkerSizeLocal [0.55, 0.55];
				g_houses pushBack _x;
			};
		} forEach _keys_buildings;
		[_keys_buildings, (getPlayerUID player), playerSide] remoteExecCall ["AlysiaServer_fnc_house_tenants_add", 2];
	};

	{
		if ((alive _x) && !(_x in g_vehicles)) then
		{
			g_vehicles pushBack _x;
			[(getPlayerUID player), playerSide, _x] remoteExecCall ["AlysiaServer_fnc_keyManagement", 2];
		};
	} forEach _keys_vehicles;

	_return = [];

	{
		_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
		[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
		if (_amount != (_x select 1)) then
		{
			_return pushBack [(_x select 0), (_x select 1) - _amount];
		};
	} forEach _inv;
	
	if (_return isEqualTo []) then {
		["L'échange a été <t color='#74DF00'>accepté</t>."] remoteExecCall ["AlysiaClient_fnc_info", _from];
	} else {
		_text = "";
		{
			_text = _text + format["- %1x %2<br/>", ([(_x select 1)] call AlysiaClient_fnc_numberText), ([(_x select 0)] call AlysiaClient_fnc_itemGetName)];
		} forEach _return;
		[format["Vous avez <t color='#74DF00'>accepté</t> l'échange cependant vous n'avez pas assez de place pour récupérer :<br/>%1", _text]] call AlysiaClient_fnc_info;
		[_return, _text] remoteExecCall ["AlysiaClient_fnc_interactionMenu_action_trade_space", _from];
	};
} else {
	[_inv, _money] remoteExecCall ["AlysiaClient_fnc_interactionMenu_action_trade_refuse", _from];
};
