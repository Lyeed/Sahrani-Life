/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_new";
_new = [_this, 0 , "none", [""]] call BIS_fnc_param;

if (g_phone_forfait != "none") then
{
	_maxSMS = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "sms_max");
	if (_maxSMS < (count(g_phone_messages) - 1)) then
	{
		g_phone_messages deleteRange [_maxSMS, count((g_phone_messages) - 1)];
	};

	_maxContacts = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "contacts_max");
	if (_maxContacts < (count(g_phone_contacts) - 1)) then
	{
		g_phone_contacts deleteRange [_maxContacts, count((g_phone_contacts) - 1)];	
	};

	_maxBlacklist = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> _new >> "backlist_max");
	if (_maxBlacklist < (count(g_phone_blacklist) - 1)) then
	{
		g_phone_blacklist deleteRange [_maxBlacklist, count((g_phone_blacklist) - 1)];
	};
} else {
	[] call AlysiaClient_fnc_phone_numberChange;
};

if ((count g_phone_messages) >= getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "sms_max")) then {
	g_phone_messages deleteAt 0;
};

g_phone_forfait = _new;
