/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_new", "_maxSMS", "_maxContacts", "_maxBlacklist"];
_new = [_this, 0, "none", [""]] call BIS_fnc_param;

if (g_phone_forfait != "none") then
{
	_maxSMS = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "sms_max");
	if (count(g_phone_messages) > _maxSMS) then
	{
		g_phone_messages = [];
	};

	_maxContacts = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "contacts_max");
	if (count(g_phone_contacts) > _maxContacts) then
	{
		g_phone_contacts = [];
	};

	_maxBlacklist = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "backlist_max");
	if (count(g_phone_blacklist) > _maxBlacklist) then
	{
		g_phone_blacklist = [];
	};
} else {
	[] call AlysiaClient_fnc_phone_number_change;
};

g_phone_forfait = _new;
