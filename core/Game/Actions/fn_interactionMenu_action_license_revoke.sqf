/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_license", "_from"];
_license = [_this, 0, "", [""]] call BIS_fnc_param;
_from = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

if (missionNamespace getVariable [format["license_%1", _license], false]) then
{
	missionNamespace setVariable [format["license_%1", _license], false];
	[
		format
		[
			"Votre licence <t color='#DF7401'>%1</t> vous a été retirée par <t color='#2E64FE'>%2 %3</t>",
			([_license] call public_fnc_licenseGetName),
			([(side _from), (_from getVariable["rank", 0])] call public_fnc_rankToStr),
			(_from getVariable ["realname", (name _from)])
		]
	] call public_fnc_info;
	[format["La licence <t color='#DF7401'>%1</t> a été retirée", ([_license] call public_fnc_licenseGetName)]] remoteExecCall ["public_fnc_info", _from];
};
