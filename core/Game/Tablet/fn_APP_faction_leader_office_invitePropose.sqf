/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_faction", "_action"];
_from = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if ((isNull _from) || (playerSide != civilian)) exitWith {};

_faction = [(side _from)] call public_fnc_sideToStr;
_action = 
[
	format
	[
		"<t align='center'>Le %1 <t color='#31B404'>%2</t> vous invite à rejoindre sa faction : %3.<br/>Acceptez-vous de vous engager ?</t>",
		([(side _from), (_from getVariable["rank", 0])] call public_fnc_rankToStr),
		(_from getVariable["realname", (name _from)]),
		_faction
	],
	"Recrutement",
	"Accepter",
	"Refuser"
] call BIS_fnc_guiMessage;
if (_action) then
{
	["Vous avez <t color='#01DF01'>accepté</t> l'invitation<br/>Vous pouvez d'ores et déjà vous reconnecter dans votre nouvelle faction"] call public_fnc_info;
	[(getPlayerUID player), 1, (side _from)] remoteExec ["TON_fnc_factionMemberModify", 2, false];
	[format["%1 a <t color='#01DF01'>accepté</t> votre invitation", player getVariable["realname", profileName]]] remoteExecCall ["public_fnc_info", _from, false];
	[0, format["%1 a rejoint votre faction !", (player getVariable["realname", profileName])]] remoteExecCall ["public_fnc_broadcast", (side _from), false];
} else {
	["Vous avez <t color='#DF0101'>refusé</t> l'invitation"] call public_fnc_info;
	[format["%1 a <t color='#01DF01'>refusé</t> votre invitation", player getVariable["realname", profileName]]] remoteExecCall ["public_fnc_info", _from, false];
};