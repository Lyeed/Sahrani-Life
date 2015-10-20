/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
		["_license", "", [""]],
		["_from", objNull, [objNull]]
	]) exitWith {};

if (isNull _from) exitWith {};

if (missionNamespace getVariable [format["license_%1", _license], false]) then
{
	missionNamespace setVariable [format["license_%1", _license], false];
	[
		format
		[
			"<t align='center'>Votre licence<br/><t color='#DF7401'>%1</t><br/>vous a été retiré par<br/>%<t color='#2E64FE'>%2 %3</t></t>",
			([_license] call public_fnc_licenseGetName),
			([(side _from), (_from getVariable["rank", 0])] call public_fnc_rankToStr),
			(_from getVariable ["realname", (name _from)])
		]
	] call public_fnc_info;
};