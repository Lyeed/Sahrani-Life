	/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_vehicle";
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

if (_vehicle getVariable ["fishing", false]) exitWith
{
	_vehicle setVariable ["fishing", false];
	["Pêche annulée"] call AlysiaClient_fnc_info;
};

if ((_vehicle distance (getMarkerPos "fish_1")) > 100) exitWith {
	[format["Vous devez être près de <t color='#FF8000'>%1</t> pour déployer le filet de pêche", (markerText "fish_1")]] call AlysiaClient_fnc_error;
};
if ((driver _vehicle) != player) exitWith {
	["Seul le conducteur peut déployer un filet de pêche"] call AlysiaClient_fnc_error;
};
if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas commencer la pêche alors que le coffre est en cours d'utilisation"] call AlysiaClient_fnc_error;
};

if (([(_vehicle getVariable ["Trunk", []]), "fishingpoles"] call AlysiaClient_fnc_itemTrunk) isEqualTo 0) exitWith {
	["Vous devez avoir un filet de pêche dans le coffre du bateau"] call AlysiaClient_fnc_error;
};

_vehicle setVariable ["fishing", true];
_vehicle setVariable ["trunk_in_use_ID", "FISHING", true];

["Déploiement du filet de pêche..."] call AlysiaClient_fnc_info;

while {(_vehicle getVariable ["fishing", false])} do
{
	scopeName "loop";

	_lastPos = getPos (vehicle player);
	
	sleep 2;

	if ((_vehicle distance (getMarkerPos "fish_1")) > 100) exitWith {
		[format["Pêche annulée<br/>Trop loin de %1", (markerText "fish_1")]] call AlysiaClient_fnc_error;
	};
	if ((driver _vehicle) != player) exitWith {
		["Pêche annulée<br/>Vous devez rester à la place de conducteur"] call AlysiaClient_fnc_error;
	};
	if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "FISHING") exitWith {
		["Pêche terminée<br/>Quelqu'un fouille le coffre"] call AlysiaClient_fnc_error;
	};

	if (_vehicle getVariable ["fishingpoles", false]) then
	{
		if (((getPos (vehicle player)) distance _lastPos) > 2) then
		{
			if (random(100) <= 30) then
			{
				_fish = ["daurade", "sardine", "merlu", "maquereau", "bar", "anchois"] call BIS_fnc_selectRandom;
				if (random(100) <= 4) then
				{
					[false, _vehicle, "Trunk", "fishingpoles", 1, false] call AlysiaClient_fnc_handleTrunk;
					if (([(_vehicle getVariable ["Trunk", []]), "fishingpoles"] call AlysiaClient_fnc_itemTrunk) isEqualTo 0) then
					{
						["Pêche annulée<br/>Le filet s'est fissuré et vous n'en avez pas d'autre dans le coffre du bateau"] call AlysiaClient_fnc_error;
						breakOut "loop";
					};
				} else {
					if (!([true, _vehicle, "Trunk", _fish, 1, false] call AlysiaClient_fnc_handleTrunk)) then
					{
						["Pêche annulée<br/>L'inventaire du véhicule est plein"] call AlysiaClient_fnc_error;
						breakOut "loop";
					};
				};
			};
		};
	};
};

_vehicle setVariable ["Trunk", (_vehicle getVariable ["Trunk", []]), true];
if ((_vehicle getVariable ["trunk_in_use_ID", ""]) isEqualTo "FISHING") then {
	_vehicle setVariable ["trunk_in_use_ID", "", true];
};

_vehicle setVariable ["fishing", false];
