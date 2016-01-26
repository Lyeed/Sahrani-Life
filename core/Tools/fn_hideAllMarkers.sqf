/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_markers"];
_markers = [];

{
	if ((markerAlpha _x) isEqualTo 1) then
	{
		_markers pushBack _x;
		_x setMarkerAlphaLocal 0;
	};
} forEach allMapMarkers;

missionNamespace setVariable ["deleted_markers", _markers];
