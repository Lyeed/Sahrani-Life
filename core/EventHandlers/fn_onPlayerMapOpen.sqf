/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_factionMarkers";

waitUntil {visibleMap};

_factionMarkers = missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "map_team_markers";
if (isClass _factionMarkers) then
{
	[getText(_factionMarkers >> "shape"), getText(_factionMarkers >> "type"), getText(_factionMarkers >> "color")] spawn
	{
		private "_markers";
		_markers = [];
		while {visibleMap} do
		{
			{
				if (((side _x) isEqualTo playerSide) && ("ItemGPS" in (assignedItems _x)) && (alive _x)) then
				{
					_marker = format["map_%1_faction", (getPlayerUID _x)];
					if (_marker in _markers) then {
						_marker setMarkerPosLocal (getPos _x);
					} else {
						_new = createMarkerLocal [_marker, (getPos _x)];
						_new setMarkerShapeLocal (_this select 0);
						_new setMarkerTypeLocal (_this select 1);
						_new setMarkerColorLocal (_this select 2);
						_new setMarkerTextLocal format["%1. %2", [playerSide, (_x getVariable ["rank", 0]), true] call AlysiaClient_fnc_rankToStr, (_x getVariable ["realname", (name _x)])];
						_markers pushBack _new;
					};
				} else {
					_marker = format["map_%1_faction", (getPlayerUID _x)];
					if (_marker in _markers) then
					{
						_markers deleteAt (_markers find _marker);
						deleteMarkerLocal _marker;
					};
				};
			} forEach allPlayers;
			uiSleep 1;
		};

		{
			deleteMarkerLocal _x;
		} forEach _markers;
	};
};

if (isClass(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "map_coma_markers")) then
{
	[] spawn
	{
		private "_markers";
		_markers = [];
		while {visibleMap} do
		{
			{
				if ((alive _x) && (_x getVariable ["medic_request", false])) then
				{
					_marker = format["%1_dead_marker", (getPlayerUID _x)];
					if (_marker in _markers) then {
						_marker setMarkerPosLocal (getPos _x);
					} else {
						_new = createMarkerLocal [_marker, (getPos _x)];
						_new setMarkerShapeLocal "ICON";
						_new setMarkerColorLocal "ColorRed";
						_new setMarkerTypeLocal "loc_Hospital";
						_new setMarkerTextLocal "SOS: blessé";
						_markers pushBack _new;
					};
				} else {
					_marker = format["%1_dead_marker", (getPlayerUID _x)];
					if (_marker in _markers) then
					{
						_markers deleteAt (_markers find _marker);
						deleteMarkerLocal _marker;
					};
				};
			} forEach allPlayers;
			uiSleep 1;
		};

		{
			deleteMarkerLocal _x;
		} forEach _markers;
	};
};

if (g_staff_markers) then
{
	[] spawn
	{
		private "_markers";
		_markers = [];
		while {visibleMap} do
		{
			{
				_marker = format["%1_admin_marker", (getPlayerUID _x)];
				if (_marker in _markers) then {
					_marker setMarkerPosLocal (getPos _x);
				} else {
					_new = createMarkerLocal [_marker, (getPos _x)];
					_new setMarkerShapeLocal "ICON";
					_new setMarkerColorLocal "ColorRed";
					_new setMarkerTypeLocal "Mil_dot";
					_new setMarkerTextLocal (_x getVariable ["realname", (name _x)]);
					_markers pushBack _new;
				};
			} forEach allPlayers;

			uiSleep 1;
		};

		{
			deleteMarkerLocal _x;
		} forEach _markers;
	};
};
