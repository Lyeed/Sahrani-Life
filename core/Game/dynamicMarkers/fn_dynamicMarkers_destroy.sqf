/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker", "_message", "_item"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if ((player distance (getMarkerPos _marker)) < 20) then
{
	_item = getText(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _marker >> "destroy_item");
	if ((_item isEqualTo "") || (([_item] call public_fnc_itemCount) > 0)) then
	{
		if ([format["Vous êtes sur le point de détruire <t color='#74DF00'>%1</t><br/>.", (markerText _marker)], "Validation", "Valider", "Annuler"] call BIS_fnc_guiMessage) then
		{
			if ((player distance (getMarkerPos _marker)) < 20) then
			{
				if (_item != "") then {
					[false, _item, 1] call public_fnc_handleInv;
				};
				(format["La faction %1 a détruit : %2", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), (markerText _marker)]) remoteExecCall ["systemChat", -2];
				[_marker] remoteExecCall ["public_fnc_dynamicMarkers_update", -2];
				[_marker] remoteExec ["TON_fnc_dynamicMarkers_update", 2];
			} else {
				["Vous êtes trop loin."] call public_fnc_error;
			};
		};
	} else {
		[format["Vous avez besoin de <t color='#FF8000'>%1</t> pour détruire <t color='#DF0101'>%2</t>.", [_item] call public_fnc_itemGetName, (markerText _marker)]] call public_fnc_error;
	};
};
