/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_boat", "_trunk", "_weight_max", "_weight_actual"];
_boat = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _boat) exitWith {};

if (_boat getVariable ["fishing", false]) exitWith
{
	_boat setVariable ["fishing", false];
	["Pêche annulée"] call public_fnc_error;
};

if ((_boat distance (getMarkerPos "fish_1")) > 100) exitWith {
	[format["Vous devez être près de <t color='#FF8000'>%1</t> pour déployer le filet de pêche", (markerText "fish_1")]] call public_fnc_error;
};
if ((driver _boat) != player) exitWith {
	["Seul le conducteur peut déployer un filet de pêche"] call public_fnc_error;
};
if ((_boat getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas commencer la pêche alors que le coffre est en cours d'utilisation"] call public_fnc_error;
};

_trunk = _boat getVariable ["Trunk", []];
_weight_actual = [_trunk] call public_fnc_weightGenerate;
_weight_max = [typeOf(_boat)] call public_fnc_getVehVirtual;

if (([_trunk, "fishingpoles"] call public_fnc_itemTrunk) isEqualTo 0) exitWith {
	["Vous devez avoir un filet de pêche dans le coffre du bateau"] call public_fnc_error;
};

_boat setVariable ["fishing", true];
_boat setVariable ["trunk_in_use_ID", "FISHING", true];

["Déploiement du filet de pêche..."] call public_fnc_info;
sleep 2;

while {(_boat getVariable ["fishing", false])} do
{
	scopeName "loop";

	if ((_boat distance (getMarkerPos "fish_1")) > 100) exitWith {
		[format["Pêche annulée<br/>Trop loin de %1", (markerText "fish_1")]] call public_fnc_error;
	};
	if ((driver _boat) != player) exitWith {
		["Pêche annulée<br/>Vous devez rester à la place de conducteur"] call public_fnc_error;
	};

	if (random(100) <= 30) then
	{
		_fish = ["daurade", "sardine", "merlu", "maquereau", "bar", "anchois"] call BIS_fnc_selectRandom;
		if (random(100) <= 4) then
		{
			_trunk = [false, _trunk, "fishingpoles", 1] call public_fnc_handleTrunk;
			if (([_trunk, "fishingpoles"] call public_fnc_itemTrunk) isEqualTo 0) then
			{
				["Pêche annulée<br/>Le filet s'est fissuré et vous n'en avez pas d'autre dans le coffre du bateau"] call public_fnc_error;
				breakOut "loop";
			};
		} else {
			if (([_fish, 1, _weight_actual, _weight_max] call public_fnc_calWeightDiff) isEqualTo 0) then
			{
				["L'inventaire du véhicule est plein"] call public_fnc_error;
				breakOut "loop";
			} else {
				_trunk = [true, _trunk, _fish, 1] call public_fnc_handleTrunk;
				_weight_actual = _weight_actual + ([_item] call public_fnc_itemGetWeight);
			};
		};
	};

	sleep 2;
};

if (!(_trunk isEqualTo (_boat getVariable ["Trunk", []]))) then {
	_boat setVariable ["Trunk", _trunk, true];	
};
_boat setVariable ["trunk_in_use_ID", "", true];
_boat setVariable ["fishing", false];
