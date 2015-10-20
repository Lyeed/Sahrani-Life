/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_name", "_position", "_message", "_seconds", "_marker"];
_name = [_this, 0, "", [""]] call BIS_fnc_param;
_position = [_this, 1, [], []] call BIS_fnc_param;
_message = [_this, 2, "URGENCE", ["URGENCE"]] call BIS_fnc_param;
_seconds = [_this, 3, 300, [300]] call BIS_fnc_param;

if ((_name isEqualTo "") || (_position isEqualTo [])) exitWith {};

deleteMarkerLocal _name;

_marker = createMarkerLocal [_name, _position];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "mil_dot";
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerTextLocal (format["%2 %1", _name, _message]);

sleep _seconds;
deleteMarkerLocal _name;
