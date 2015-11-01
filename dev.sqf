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
	_video = ["\lyeed\tablette_alysia.ogv", [0.0625,0.22,0.8625,0.62]] spawn BIS_fnc_playVideo;
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
onMapSingleClick "player setPos _pos";
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

