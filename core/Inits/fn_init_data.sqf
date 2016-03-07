/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_basic"];
_basic = [_this, 0, [], [[]]] call BIS_fnc_param;

// firstName
g_firstName = _basic select 2;
// lastName
g_lastName = _basic select 3;
// birth
g_birth = _basic select 4;
// nationality
g_nationality = _basic select 5;
// sexe
g_sexe = _basic select 6;
// dynamicMarkers
{
	if (((getMarkerPos (_x select 0)) distance (_x select 1)) < 10) then
	{
		g_dynamic_markers_discovered pushBack _x;
		(_x select 0) setMarkerAlphaLocal 1;
	};
} forEach (_basic select 7);
// blood/bleed/coma
[(_basic select 9), (_basic select 10), (_basic select 11)] spawn
{
	waitUntil {g_connected};
	if (_this select 2) then {
		[] spawn AlysiaClient_fnc_handleComa;
	} else {
		[((4000 - (_this select 0)) * -1)] call AlysiaClient_fnc_handleBlood;
		[(_this select 1)] call AlysiaClient_fnc_handleBleed;
	};
};
// alive
g_is_alive = _basic select 15;
// drugs
{
	missionNamespace setVariable [format["drug_stats_%1", (_x select 0)], (_x select 1)];
} forEach (_basic select 16);
// hunger
g_hunger = _basic select 17;
// thirst
g_thirst = _basic select 18;
// Prison
g_arrest_Prison = _basic select 23;
g_arrest_Cellule = _basic select 24;
g_arrest_Time = _basic select 25;
g_arrest_Caution = _basic select 26;
g_arrest_Reason = _basic select 27;
g_arrest_Escape = _basic select 28;
g_arrest_Gear = _basic select 29;
if (g_arrest_Time > 0) then {
	if (g_arrest_Time isEqualTo -1) then {
		g_arrest_Escape = true;
	} else {
		player setVariable ["arrested", true, true];
	};
};

// Phone
if ((_basic select 30) != "") then {
	player setVariable ["number", (_basic select 30), true];
};
g_phone_contacts = _basic select 31;
[g_phone_messages, (_basic select 32)] call BIS_fnc_arrayPushStack;
g_phone_forfait = _basic select 33;
g_phone_blacklist = _basic select 34;
g_apps = _basic select 35;
g_choice = _basic select 36;
// Licenses
{
	missionNamespace setVariable [format["license_%1", _x], true];
} forEach (_basic select 38);
// cash
g_cash = _basic select 39;
// atm
g_atm = _basic select 40;
// inventory
g_maxWeight = 100;
{
    [true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
} forEach (_basic select 41);
g_maxWeight = 24;
// gear
[(_basic select 42)] spawn AlysiaClient_fnc_loadGear;
switch (playerSide) do
{
	case west: 
	{
		if ((call g_WESTLevel) > 0) then {player setVariable ["rank", (call g_WESTLevel), true]};
	};
	
	case east:
	{
		if ((call g_EASTLevel) > 0) then {player setVariable ["rank", (call g_EASTLevel), true]};
	};

	case civilian:
	{
		if ((call g_CIVLevel) > 0) then {player setVariable ["rank", (call g_CIVLevel), true]};
		g_launder = _basic select 43;
		if (g_launder > 0) then
		{
			[] spawn
			{
				waitUntil {missionNamespace getVariable ["g_connected", false]};
				uiSleep ((round(random(15)) + 3) * 60);
				[] call AlysiaClient_fnc_launderReceive;
			};
		};
	};

	case independent:
	{
		if ((call g_GUERLevel) > 0) then {player setVariable ["rank", (call g_GUERLevel), true]};
	};
};

g_nextPay = time + (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_timer") * 60);

[] call AlysiaClient_fnc_init_loops;
[[(_basic select 12), (_basic select 13), (_basic select 14)]] call AlysiaClient_fnc_init_position;
true;
