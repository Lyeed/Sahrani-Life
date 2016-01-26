NightVision 
1er personne

if (typeOf(_target) in ["Land_FuelStation_Build_F", "Land_FuelStation_Shed_F", "Land_FuelStation_Feed_F"]) then

{diag_log str _x} forEach diag_activeSQFScripts;

https://community.bistudio.com/wiki/setFlagTexture
https://community.bistudio.com/wiki/getResolution
https://community.bistudio.com/wiki/diag_activeSQFScripts
https://community.bistudio.com/wiki/setFaceAnimation
https://community.bistudio.com/wiki/setAperture
https://community.bistudio.com/wiki/inGameUISetEventHandler
https://community.bistudio.com/wiki/limitSpeed
https://community.bistudio.com/wiki/openYoutubeVideo

[player] spawn public_fnc_interactions_player_to_player_basics;

RscMiniMap

gServer_AH_NORTH_stock_virtual = [["handcuffs", 500, (getPlayerUID player)]];
publicVariable "gServer_AH_NORTH_stock_virtual";
["","","",["NORTH", 0]] call public_fnc_auctionHouse_menu_open

gServer_AH_NORTH_stock_virtual = [["handcuffs", 500, "123"]];
publicVariable "gServer_AH_NORTH_stock_virtual";
["","","",["NORTH", 0]] call public_fnc_auctionHouse_menu_open

profileNamespace setVariable ["cba_keybinding_registry", []]; saveProfileNamespace;

// random near area
"C_Offroad_01_F" createVehicle ((position cursorTarget) findEmptyPosition [0, 20, "C_Offroad_01_F"]);

/*
**				VIDEO
*/
[] spawn
{
	_video = ["lyeed\tablette_alysia.ogv", [0.0625,0.22,0.8625,0.62]] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};

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
