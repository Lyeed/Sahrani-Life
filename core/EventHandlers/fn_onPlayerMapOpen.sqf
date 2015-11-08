/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

/*
private["_markers"];

_markers = [];

waitUntil {visibleMap};
if (vehicle player == player) then { 
	player playAction "Gear"; 
};

if ((getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_marker_on_map")) == 1) then 
{
	private["_faction", "_color", "_type"];
	
	_faction = [];
	{
		if ((side _x == playerSide) && ("ItemGPS") in (assignedItems _x)) then {
			_faction pushBack _x;
		};
	} foreach (playableUnits);
	if (!(_faction isEqualTo [])) then
	{
		_color = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_marker_color");
		_type = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_marker_type");

		{
			_marker = createMarkerLocal [format["%1_faction_marker", (name _x)], (visiblePosition _x)];
			_marker setMarkerColorLocal _type;
			_marker setMarkerTypeLocal _color;
			_marker setMarkerTextLocal format
			[
				"%1. %2",
				([playerSide, (_x getVariable["rank", 0]), true] call public_fnc_rankToStr),
				(_x getVariable["realname", (name _x)])
			];

			_markers pushBack [_marker, _x, "faction"];
		} forEach (_faction);
	};
};

if (missionNamespace getVariable["license_doc", false]) then
{
	private["_units"];
	_units = [];
	{
		private["_name", "_down"];
		_name = _x getVariable "realname";
		_down = _x getVariable["is_coma", false];
		if (!(isNil "_name") && _down) then {
			_units pushBack _x;
		};
	} forEach (PlayableUnits);

	{
		private["_marker"];
		_marker = createMarkerLocal [format["%1_dead_marker", (name _x)], (visiblePosition _x)];
		_marker setMarkerColorLocal "ColorRed";
		_marker setMarkerTypeLocal "loc_Hospital";
		_marker setMarkerTextLocal format["%1", (name _x)];
		_markers pushBack [_marker, _x, "doc"];
	} forEach (_units);
};

if ((call g_adminlevel) > 0) then
{
	if (g_markers) then
	{
		private["_players"];
		_players = [];
		{
			if ((isPlayer _x) && (alive _x)) then {
				_players pushBack _x;
			};
		} foreach (playableUnits);

		{
			private["_marker"];
			_marker = createMarkerLocal [format["%1_admin_marker", (name _x)], (visiblePosition _x)];
			_marker setMarkerColorLocal "ColorRed";
			_marker setMarkerTypeLocal "Mil_dot";
			_marker setMarkerTextLocal format["%1", (_x getVariable["realname", (name _x)])];
			_markers pushBack [_marker, _x, "admin"];
		} forEach (_players);
	};
};

if ((count _markers) == 0) exitWith {};
while {visibleMap} do
{
	{
		private["_marker", "_unit"];
		_marker = _x select 0;
		_unit = _x select 1;
		
		if (!isNil "_unit") then 
		{
			if(!(isNull _unit)) then 
			{
				if ((_x select 2 in ["admin", "doc"]) || (("ItemGPS") in (assignedItems _unit))) then {
					_marker setMarkerPosLocal (visiblePosition _unit); 
				} else {
					deleteMarkerLocal _marker; 
				};
			};
		};
	} forEach (_markers);
	if (!visibleMap) exitWith {};
	sleep 0.05;
};

{
	deleteMarkerLocal (_x select 0);
} forEach (_markers);*/