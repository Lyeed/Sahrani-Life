/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_markers", "_factionMarkers", "_deathsMarkers"];

_factionMarkers = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_on_map");
_deathsMarkers = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_deaths");
_markers = [];

waitUntil {visibleMap};

while {visibleMap} do
{
	_markers = [];
	if (_factionMarkers isEqualTo 1) then 
	{
		_color = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_color");
		_type = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_type");

		{
			if (((side _x) isEqualTo playerSide) && ("ItemGPS" in (assignedItems _x)) && (alive _x)) then
			{
				_marker = createMarkerLocal [format["%1_faction_marker", (getPlayerUID _x)], (visiblePosition _x)];
				_marker setMarkerColorLocal _type;
				_marker setMarkerTypeLocal _color;
				_marker setMarkerTextLocal format
				[
					"%1. %2",
					([playerSide, (_x getVariable ["rank", 0]), true] call public_fnc_rankToStr),
					(_x getVariable ["realname", (name _x)])
				];
				_markers pushBack _marker;
			};
		} forEach allPlayers;
	};

	if (_deathsMarkers isEqualTo 1) then 
	{
		{
			if (alive _x) then
			{
				if (player getVariable ["medic_request", false]) then
				{
					_marker = createMarkerLocal [format["%1_dead_marker", (getPlayerUID _x)], (visiblePosition _x)];
					_marker setMarkerColorLocal "ColorRed";
					_marker setMarkerTypeLocal "loc_Hospital";
					_marker setMarkerTextLocal "SOS: blessé";
					_markers pushBack _marker;
				};
			};
		} forEach allPlayers;
	};

	sleep 0.05;

	{
		deleteMarkerLocal _x;
	} forEach _markers;
};
