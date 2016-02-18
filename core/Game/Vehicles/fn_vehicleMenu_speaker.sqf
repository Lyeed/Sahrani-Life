/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ids", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

closeDialog 0;

if (isNull _target) exitWith {};

if (_target getVariable ["speaker_active", false]) exitWith
{
	_target setVariable ["speaker_active", false];
	["Haut parleurs éteints"] call AlysiaClient_fnc_info;
};

_ids = [];

{
	_ids pushBack (player addAction [format["Son : <t color='#FFFF33'>%1</t>", (_x select 0)],
		{
			_data = [_this, 3, [], [[]]] call BIS_fnc_param;
			[(_data select 1), (_data select 0)] call CBA_fnc_globalSay3d;
			(_data select 1) setVariable ["speaker_active", false];
		}, [(_x select 1), _target], 5000, true, true, "", ""]);
} forEach 
([
	["Annonce (coopérer)", "EAST_announce_cooperate"],
	["Annonce (drogues)", "EAST_announce_drugs"],
	["Annonce (comportement hostile)", "EAST_announce_hostile_behavior"],
	["Annonce (parti central)", "EAST_announce_join"],
	["Annonce (vitesse)", "EAST_announce_speed"],
	["Annonce (comportement suspect)", "EAST_announce_suspect_behavior"],
	["Annonce (armes)", "EAST_announce_weapons"],
	["Annonce du parti", "radio_siovet"],
	["Musique (red alert)", "radio_music_1"],
	["Musique (Casta Diva Maria)", "Casta_Diva_Maria"],
	["Musique (Craonne)", "Craonne"],
	["Musique (Erika)", "Erika"],
	["Musique (Katiousha)", "Katiousha"],
	["Musique (Liy Marlene)", "Liy_Marlene"],
	["Musique (Wagner crepuscule)", "Wagner_crepuscule"],
	["Musique (chemin)", "chemin"],
	["Musique (farewell)", "farewell"],
	["Musique (guerre civile)", "guerre_civile"],
	["Musique (marche militaire)", "marche_militaire"],
	["Musique (plaine)", "plaine"],
	["Musique (reve passe)", "reve_passe"]
]);

_target setVariable ["speaker_active", true];

waitUntil {(!(_target getVariable ["speaker_active", false]) || ((vehicle player) != _target) || ((driver (vehicle player)) != player))};

{
	player removeAction _x;
} forEach _ids;
