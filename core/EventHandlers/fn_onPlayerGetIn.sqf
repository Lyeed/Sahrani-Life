/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_type", "_seatBelt_on_id", "_seatBelt_off_id"];
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _veh) || (_type isEqualTo "")) exitWith {};

g_seatbelt = false;

_seatBelt_on_id = player addAction
[
	"<img image='\lyeed_IMG\data\actions_menu\seatbelt_on.paa'/> Mettre sa <t color='#74DF00'>ceinture</t>", 
	{
		g_seatbelt = true;
		playSound "seatbelt_on";
	}, "", 0, false, false, "", '!g_action_inUse && (vehicle player) != player && !g_seatbelt'
];

_seatBelt_off_id = player addAction
[
	"<img image='\lyeed_IMG\data\actions_menu\seatbelt_off.paa'/> Enlever sa <t color='#FE642E'>ceinture</t>",
	{
		g_seatbelt = false;
		playSound "seatbelt_off";
	}, "", 0, false, false, "", '!g_action_inUse && (vehicle player) != player && g_seatbelt'
];

while {((vehicle player) isEqualTo _veh)} do
{
	if (((driver _veh) isEqualTo player) && (isEngineOn _veh)) then {
		_veh setFuel ((fuel _veh) - (((speed _veh) / 10000) + (([_veh getVariable ["Trunk", []]] call public_fnc_weightGenerate) / 100000)));
	};
	sleep 2;
};

player removeAction _seatBelt_on_id;
player removeAction _seatBelt_off_id;
