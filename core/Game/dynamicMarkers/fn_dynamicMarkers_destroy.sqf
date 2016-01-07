/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker", "_message"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if ((player distance (getMarkerPos _marker)) < 20) then
{
	if ([format["Vous êtes sur le point de détruire <t color='#74DF00'>%1</t><br/>", (markerText _marker)], "Validation", "Valider", "Annuler"] call BIS_fnc_guiMessage) then
	{
		if ((player distance (getMarkerPos _marker)) < 20) then
		{
			_message = getText(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> "destroy" >> "global_message");
			if (_message != "") then {
				(format["La faction %1 a détruit : %2", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), (markerText _marker)]) remoteExecCall ["systemChat", -2];
			};
			
			[_marker] remoteExecCall ["public_fnc_dynamicMarkers_update", -2];
			[_marker] remoteExec ["TON_fnc_dynamicMarkers_update", 2];
		} else {
			["Vous n'êtes pas à porté"] call public_fnc_error;
		};
	};
};
