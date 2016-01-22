


FU =
{
	createDialog "DEV";
	
	disableSerialization;
	_display = findDisplay 6968;
	
	_old = _display displayCtrl 6969;
	_old ctrlShow false;


	_header = _display ctrlCreate ["RscText", 6971];
	_header ctrlSetText "Informations";
	_header ctrlSetBackgroundColor [0, 0, 0, 0.8];
	_header ctrlSetPosition [-0.7, 0.48, 0.2, 0.04];
	_header ctrlCommit 0; 

	_new = _display ctrlCreate ["RscStructuredText", 6970];
	_new ctrlSetBackgroundColor [0, 0, 0, 0.6];
	_new ctrlSetPosition [-0.7, 0.52, 0.625, 0.26];
	_new ctrlCommit 0;

	_new ctrlSetStructuredText parseText _this;
	
	_new ctrlSetPosition [(ctrlPosition _new) select 0, (ctrlPosition _new) select 1, (ctrlPosition _new) select 2, ctrlTextHeight _new];
	_new ctrlCommit 0;
};


	x = -0.7;
	y = 0.52;
	w = 0.625;
	h = 0.26;

"<t font='EtelkaMonospacePro' size='0.8'>Vous avez reçu votre salaire et vos factures<br/>+ <t color='#8cff9b'>%1</t>kn<br/>- <t color='#ff8c8c'>%2</t>kn<br/>Pour plus d'informations rendez-vous dans l'application <t color='#00FF80'>solde</t> de votre tablette</t>" spawn FU;


////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Jeremy Cookie, v1.063, #Jopeza)
////////////////////////////////////////////////////////

class RscStructuredText_1100: RscStructuredText
{
	idc = 6969;

	x = -28 * GUI_GRID_W + GUI_GRID_X;
	y = 13 * GUI_GRID_H + GUI_GRID_Y;
	w = 25 * GUI_GRID_W;
	h = 6.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.6};
};
class RscText_1000: RscText
{
	idc = 1000;
	text = "Informations"; //--- ToDo: Localize;
	x = -0.7;
	y = 0.48;
	w = 0.2;
	h = 0.04;
	colorBackground[] = {0,0,0,0.8};
};


{diag_log str _x} forEach diag_activeSQFScripts;

https://community.bistudio.com/wiki/setFlagTexture
https://community.bistudio.com/wiki/getResolution
https://community.bistudio.com/wiki/diag_activeSQFScripts
https://community.bistudio.com/wiki/setFaceAnimation
https://community.bistudio.com/wiki/setAperture
https://community.bistudio.com/wiki/inGameUISetEventHandler
https://community.bistudio.com/wiki/limitSpeed
https://community.bistudio.com/wiki/openYoutubeVideo

["radio_search_1"] remoteExecCall ["public_fnc_border_south_sounds", -2];
["light_south_3"] remoteExec ["public_fnc_lightBug", -2];

xcam_Loudspeakers_F
// ((getPos player) nearestObject 507979) hideObject true;

border_plot_north_north_1
border_plot_north_north_2
border_plot_north_north_3
border_plot_north_north_4

border_plot_north_south_1
border_plot_north_south_2
border_plot_north_south_3
border_plot_north_south_4

border_sign_north_north
border_sign_north_south
border_sign_north_middle

border_gate_north_north
border_gate_north_south

// SOUTH
border_plot_south_north_1
border_plot_south_north_2
border_plot_south_north_3
border_plot_south_north_4

border_plot_south_south_1
border_plot_south_south_2
border_plot_south_south_3
border_plot_south_south_4

border_sign_south_south
border_sign_south_north
border_sign_south_middle_1
border_sign_south_middle_2

border_control_south_1
border_control_south_2
border_control_south_3

border_gate_south_south
border_gate_south_north

["weapon", cursorTarget, player, "ABCED"] remoteExec ["TON_fnc_company_insert", 2];

[player] spawn public_fnc_interactions_player_to_player_basics;

Titan_AA
launch_B_Titan_F

RscMiniMap

arifle_SDAR_F
30Rnd_556x45_Stanag

gServer_AH_NORTH_stock_virtual = [["handcuffs", 500, (getPlayerUID player)]];
publicVariable "gServer_AH_NORTH_stock_virtual";
["","","",["NORTH", 0]] call public_fnc_auctionHouse_menu_open

gServer_AH_NORTH_stock_virtual = [["handcuffs", 500, "123"]];
publicVariable "gServer_AH_NORTH_stock_virtual";
["","","",["NORTH", 0]] call public_fnc_auctionHouse_menu_open

profileNamespace setVariable ["cba_keybinding_registry", []]; saveProfileNamespace;

/*
================INIT======================
this enableSimulation false; (pas de dégat et enléve les interraction)
this allowDamage false; (pas de dégat)
this addAction[""Dealer"",life_fnc_virt_menu,""dealer"",0,false,false,"""",' vehicle player == player && player distance _target < 4 && playerSide == civilian '];
==========================================

this addAction["Nom de l'action dans le menu",nom_de_la_fonction,"Argument de la fonction",0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == independent'];
Explication:
- "NOM_DE_LA_CLASSE"
- ou ["NOM_DE_LA_CLASSE", ["NOM_DE_LA_CLASSE_1","NOM_DE_LA_CLASSE_2"]]

Nom des fonctions :
public_fnc_shop_dynamicMarkers_open; (position des lieux illégaux dynamique)
-pas d'argument ("")

this addAction["Supérette",public_fnc_shop_virtual_open,"market",0,false,false,"",'vehicle player == player && player distance _target < 4'];
public_fnc_shop_virtual_open (shop d'items virtuels)
-Argument : nom de la classe défini dans config ALYSIA_SHOPS_VIRTUAL
-Fichier : Config_Shop_Virtual.hpp

this addAction["Armurerie",public_fnc_shop_virtual_open,"gun",0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == civilian'];
public_fnc_shop_arma_open (shop item arma)
-Argument : nom de la classe défini dans config ALYSIA_SHOPS_ARMA
-Fichier : Config_Shop_Arma.hpp

this addAction["Friperie de luxe",public_fnc_shop_virtual_open,"CIV_luxe",0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == civilian'];
public_fnc_shop_clothing_open (shop vêtement)
-Argument : nom de la classe défini dans config ALYSIA_SHOPS_CLOTHING
-Fichier : Config_Shop_Clothing.hpp

this addAction["Concessionnaire de luxe",public_fnc_shop_vehicles_open,["CIV_land_luxe", ["CIV_land_luxe_marker_1", "CIV_land_luxe_marker_2"]],0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == civilian'];
public_fnc_shop_vehicles_open (concessionnaire)
-Argument : nom de la classe défini dans config ALYSIA_SHOPS_VEHICLES
-Fichier : Config_Shop_Vehicles.hpp

this addAction["Garage",public_fnc_garageGet,"NORD_prefecture",0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == civilian'];
public_fnc_garageGet (garage)
-Argument : nom de la classe défini dans config Cfg_Garages
-Fichier : Config_Garages.hpp


this addAction["Ranger son véhicule",public_fnc_garageVehicleStore,["Car"],0,false,false,"",'vehicle player == player && player distance _target < 4 && playerSide == civilian'];
public_fnc_garageVehicleStore (ranger son véhicule)
-Argument : types de véhicule pouvant être ranger dans ce garage
Types :
- "Car"
- "Truck"
- "Air"
- "Tank"
- "Ship"
*/

a3\characters_f\common\coveralls.p3d
a3\air_f\heli_light_01\heli_light_01_f.p3d

/*
**				CBA
*/
Requiring CBA for a mission
In the editor, place a Game Logics\CBA\Require CBA object anywhere in your mission. 
The only effect of this is that it will force any player to have CBA running as a mod before they can join the mission. 
CBA will start itself in any mission anyway, regardless of whether that logic has been placed.

/*
**				VEHICLES
*/

["","","",["CIV_vehicles_sea", ["cocaine_1"]]] call public_fnc_shop_vehicles_open;

// picture
"\A3\soft_f\Offroad_01\Data\UI\Offroad_01_base_CA.paa"

// random near area
"C_Offroad_01_F" createVehicle ((position cursorTarget) findEmptyPosition [0, 20, "C_Offroad_01_F"]);

// create
_vehicle = "B_Truck_01_box_F" createVehicle (getPos player);
_vehicle setVariable["Trunk", [[["banane", 5],["mangue", 1]], 6], true];
_vehicle setVariable["isInsured", 1, true];
_vehicle setVariable["vehicle_info_owners", [(getPlayerUID player), (player getVariable["realname", profileName])], true];
_vehicle setVariable["dbInfo", [(getPlayerUID player), "815903"], true];
[_vehicle, 20] remoteExecCall ["setFuel", 0];
g_vehicles pushBack _vehicle;


[true, "mangue", 3] call public_fnc_handleInv;

/*
**				EQUIPMENT
*/
player addWeapon "arifle_MXM_F";
player addMagazine "30Rnd_65x39_caseless_mag";

/*
**				VIDEO
*/
[] spawn
{
	_video = ["lyeed\tablette_alysia.ogv", [0.0625,0.22,0.8625,0.62]] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};

DEV = createTrigger ["EmptyDetector", [13280.647,11.97,8827.7236], true];
DEV setTriggerArea [350, 350, 0, false];
DEV setTriggerActivation ["ANY", "PRESENT", false];
DEV setTriggerStatements ["(vehicle player) in thislist", "hint 'activated';", "hint 'desactivated';"];


DEV setTriggerStatements ["this", "[[[""Frontière"", ""<t align='center' size='1'>%1</t><br/>""], ["""", """"], [""5 Decembre 2015"", ""<t align = 'center' size = '0.7'>%1</t><br/>""], ["""", """"], [""20:00"", ""<t align = 'center' size = '0.7'>%1</t>""], ["""", """"], ["""", """"], ["""", """"]]] spawn BIS_fnc_typeText;", "hint 'lol';"];







DEV = createTrigger ["EmptyDetector", (getPos cursorTarget), true];
DEV setTriggerArea [3, 3, 0, false];
DEV setTriggerActivation ["ANY", "PRESENT", true];
DEV setTriggerStatements ["(vehicle player) in thislist", "[[[""Frontière"", ""<t align='center' size='1'>%1</t><br/>""], ["""", """"], [""5 Decembre 2015"", ""<t align = 'center' size = '0.7'>%1</t><br/>""], ["""", """"], [""20:00"", ""<t align = 'center' size = '0.7'>%1</t>""], ["""", """"], ["""", """"], ["""", """"]]] spawn BIS_fnc_typeText;", "hint 'desactivated';"];

	



		{
			position[]={8983.6826,78.759819,6553.4883};
			a=3900;
			b=3900;
			angle=50.6343;
			rectangular=1;
			activationBy="ANY";
			interruptable=1;
			age="UNKNOWN";
			name="SOUTH";
			expActiv="hint ""salut"";";
			class Effects
			{


	[[["Sahrani SUD", "<t align='center' size='1'>%1</t><br/>"], ["", ""],["5 Decembre 2015", "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],["20:00", "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""], ["", ""]]] spawn BIS_fnc_typeText;

/*
**				PLANE ANIMATION
*/
[] spawn
{
	gServer_arrive_group = [[7950, 9667, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
	gServer_arrive_plane = CreateVehicle ["b737", [10124.8,13.9484,500], [], 0, "FLY"];
	gServer_arrive_pilot = (units gServer_arrive_group) select 0;
	gServer_arrive_pilot moveInDriver gServer_arrive_plane;
	gServer_arrive_pilot setBehaviour "SAFE";
	gServer_arrive_pilot action ["lightOn", (vehicle gServer_arrive_pilot)];
	gServer_arrive_pilot addEventHandler ["LandedStopped",
	{
		deleteVehicle (vehicle (_this select 0));
	}];
	gServer_arrive_plane action ["Land", gServer_arrive_plane];
	sleep 10;
	showCinemaBorder true;
	showHUD false;
	
	1 fadeSound 0.1;
	
	[
		[
			["En direction de Santa Marina", "<t align='center' size='1'>%1</t><br/>"], ["", ""],
			["5 Decembre 2015", "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
			["20:00", "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""], ["", ""]
		]
	] spawn BIS_fnc_typeText;
	gServer_arrive_plane switchCamera "EXTERNAL";
	cutText ["", "BLACK IN", 10, false];
	playMusic "welcome";
	
	waitUntil {(speed gServer_arrive_plane) < 1};

	1 fadeSound 1;
	player setPos [4342.6 + random 7,3846.4 + random 7,0.00143909];
	player setDir 203.154;
	showHUD true;
	playMusic "";
	player switchCamera "INTERNAL";
	showCinemaBorder false;
};

/*
**				POSITION
*/
onMapSingleClick "copyToClipboard str(_pos)";
onMapSingleClick "player setPos _pos";²&
copyToClipboard(typeOf cursorTarget);


/// g_vehicle_target action ["useWeapon", g_vehicle_target, g_vehicle_target, 0];




{
	if (isPlayer _x) then
	{
		[player, "message_rcv_10"] remoteExecCall ["say3D", -2, false];
	};
} forEach ((position player) nearEntities [["Man"], 200]);


tatane :
CtsDoktor_Vojak_uder3

repair vehicle:
InBaseMoves_repairVehicleKnl
InBaseMoves_repairVehiclePne

cuff :
Acts_AidlPsitMstpSsurWnonDnon01
Acts_AidlPsitMstpSsurWnonDnon_out

knockout
AmelPercMstpSlowWrflDnon_StrokeGun = give
AmelPercMstpSnonWnonDnon_amaterUder3 = give
AmelPercMstpSnonWnonDnon_zasah2 = receive

player playMove 

sit
ohara_c0start

signal to check
Acts_SignalToCheck


HEAL TARGET
se baisser pour soigner Acts_TreatingWounded_in
massage cardiaque Acts_TreatingWounded01 5
piqure Acts_TreatingWounded02 8
compresser plai + appliquer Acts_TreatingWounded03 8
soupoudrer Acts_TreatingWounded04 5
appliquer / retirer qq chose Acts_TreatingWounded05 10
se lever Acts_TreatingWounded_Out

COMA
AdthPercMstpSlowWrf_beating = debut

Acts_InjuredLyingRifle01
Acts_InjuredLyingRifle02
acts_InjuredLookingRifle01
acts_InjuredLookingRifle02
acts_InjuredLookingRifle03
acts_InjuredLookingRifle04
acts_InjuredLookingRifle05



MILICE

passer :
Acts_ShowingTheRightWay_in
Acts_ShowingTheRightWay_loop
Acts_ShowingTheRightWay_out

check:
Acts_SignalToCheck

signal en lair
Acts_PercMstpSlowWrflDnon_handup1

stop
Acts_PercMstpSlowWrflDnon_handup2b

approchez:
Acts_NavigatingChopper_In
Acts_NavigatingChopper_Loop
Acts_NavigatingChopper_Out

dance :
ActsPercMstpSnonWnonDnon_DancingDuoIvan
ActsPercMstpSnonWnonDnon_DancingDuoStefan
ActsPercMstpSnonWnonDnon_DancingStefan

DEV =
{
	private["_anim"];
	_anim = _this;
	while {alive player} do
	{
		player switchMove _anim;
		waitUntil {(animationState player) != _anim};
	};
};

DEV =
{
	player switchMove _this;
	player playMoveNow _this;
};

DEV =
{
	private["_unit", "_anim"];
	_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
	_anim = [_this, 1, "", [""]] call BIS_fnc_param;

	if ((isNull _unit) || (_anim isEqualTo "")) exitWith {};

	_unit switchMove _anim;
	_unit playMove _anim;
};
publicVariable "DEV";

[[player, "AmelPercMstpSlowWrflDnon_StrokeGun"], "DEV", nil] call BIS_fnc_MP;

AmelPercMstpSlowWrflDnon_StrokeGun = give
AmelPercMstpSnonWnonDnon_amaterUder3 = give
AmelPercMstpSnonWnonDnon_zasah2 = receive


DEV2 =
{
	[[player, "AmelPercMstpSnonWnonDnon_amaterUder3"], "DEV", nil] call BIS_fnc_MP;
	sleep 2;
	[[cursorTarget, "AmelPercMstpSnonWnonDnon_zasah2"], "DEV", nil] call BIS_fnc_MP;
};

[[cursorTarget, "Acts_TreatingWounded01"], "DEV", nil] call BIS_fnc_MP;

CtsDoktor_Vojak_uder3

HEAL TARGET
se baisser pour soigner Acts_TreatingWounded_in
massage cardiaque Acts_TreatingWounded01 5
piqure Acts_TreatingWounded02 8
compresser plai + appliquer Acts_TreatingWounded03 8
soupoudrer Acts_TreatingWounded04 5
appliquer / retirer qq chose Acts_TreatingWounded05 10
se lever Acts_TreatingWounded_Out

OFF =
{
	{
		_x setHit ["light_1_hitpoint", 0.97];
		_x setHit ["light_2_hitpoint", 0.97];
		_x setHit ["light_3_hitpoint", 0.97];
		_x setHit ["light_4_hitpoint", 0.97];
	} forEach nearestObjects [player, [
		"Lamps_base_F",
		"PowerLines_base_F",
		"PowerLines_Small_base_F",
		"lamphalogen_f",
		"portablelight_single_f"
	], 500];
};

ON =
{
	{
		_x setHit ["light_1_hitpoint", 0];
		_x setHit ["light_2_hitpoint", 0];
		_x setHit ["light_3_hitpoint", 0];
		_x setHit ["light_4_hitpoint", 0];
	} forEach nearestObjects [player, [
		"Lamps_base_F",
		"PowerLines_base_F",
		"PowerLines_Small_base_F",
		"lamphalogen_f",
		"portablelight_single_f"
	], 500];
};

publicVariable "ON";
publicVariable "OFF";




{   _x setHit ["light_1_hitpoint", 0.97];   _x setHit ["light_2_hitpoint", 0];   _x setHit ["light_3_hitpoint", 0];   _x setHit ["light_4_hitpoint", 0];  } forEach nearestObjects [player, [   "Lamps_base_F",   "PowerLines_base_F",   "PowerLines_Small_base_F",  "lamphalogen_f"], 500];


"Fin" createUnit [ position player, group player ];moveTo 


"Fin" createUnit [(position player), (group player),"", 1.0, "private"];
cursorTarget domove (position player);

"B_Soldier_02_f" createUnit [(position player), (group player),"", 1.0, "private"];

"Sheep_random_F" createUnit ["Sheep_random_F", (position player), (group player), [], 0, "FORM"];


sheep_1 = (group player) createUnit ["Sheep_random_F", (getPos player), [], 100, "FORM"];
sheep_2 = (group player) createUnit ["Sheep_random_F", (getPos player), [], 100, "FORM"];
sheep_3 = (group player) createUnit ["Sheep_random_F", (getPos player), [], 100, "FORM"];

sheep_1 doFollow player;
sheep_2 doFollow player;
sheep_3 doFollow player;



g_sheeps = [];
buy_sheep = 
{
	private["_sheep_1", "_sheep_2", "_sheep3"];

	_sheep_1 = 	(group player) createUnit ["Sheep_random_F", (getPos player), [], 3, "FORM"];
	_sheep_2 = 	(group player) createUnit ["Sheep_random_F", (getPos player), [], 3, "FORM"];
	_sheep_3 = 	(group player) createUnit ["Sheep_random_F", (getPos player), [], 3, "FORM"];

	g_sheeps pushBack _sheep_1;
	g_sheeps pushBack _sheep_2;
	g_sheeps pushBack _sheep_3;

	while {!(g_sheeps isEqualTo [])} do
	{
		{
			if (alive _x) then {
				_x move (position player);
			} else {
				g_sheeps deleteAt _forEachIndex;
			};
		} forEach (g_sheeps);
		sleep 1;
	};
};

end_sheep =
{
	_error = false;
	{
		if ((player distance _x) > 10) then {
			_error = true;
		};
	} forEach (g_sheeps);
	if (_error) exitWith {
		hint "Tous vos moutons ne sont pas encore arrivés";
	};

	hint format["Vous avez rapporté %1 moutons", count g_sheeps];
	{
		deleteVehicle _x;
	} forEach (g_sheeps);
};


sheep_1 move (position player);
sheep_2 move (position player);
sheep_3 move (position player);

sheep_2 doFollow player;
sheep_3 doFollow player;
