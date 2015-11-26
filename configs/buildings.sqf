/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_cString";

_cString =
{
	_obj = createVehicle [(_this select 0), call compile (_this select 1), [], 0, "CAN_COLLIDE"];
	if((_this select 4) isEqualTo 0) then {
		_obj enableSimulation false;
	};
	_obj setdir (_this select 2);
	if((_this select 3) isEqualTo -100) then {
		_obj setposATL (call compile (_this select 1));
	} else {
		_obj setposASL [((call compile (_this select 1)) select 0), ((call compile (_this select 1)) select 1), (_this select 3)];
	};

	if((_this select 5) isEqualTo 0) then {
		_obj setVectorUp [0,0,1];
	} else {
		_obj setVectorUp (surfacenormal (getPosATL _obj));
	};

	if (!((_this select 6) isEqualTo [])) then
	{
		{
			call _x;
		} foreach (_this select 6);
	};

	_obj;
};

// Bank North
["Land_boden_250_250_025_clean_cnc","[14304.931641,12588.600586,0.861111]",8.96902,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14302.0595703,12577.895508,-0.0892258]",8.96902,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14294.185547,12579.157227,-0.103535]",8.96902,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14289.0839844,12579.986328,-0.107742]",8.96902,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14285.898438,12584.306641,-0.113636]",278.24,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14286.868164,12590.600586,-0.109428]",278.745,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14291.183594,12593.777344,-0.098484]",8.7449,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14299.0966797,12592.527344,-0.10606]",8.7449,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14304.330078,12591.724609,-0.112793]",8.7449,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14307.553711,12587.439453,-0.115318]",278.745,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[14306.540039,12580.984375,-0.0942764]",278.745,-100,0,0,[]] call _cString;
["xcam_GH_Stairs_F","[14309.558594,12583.0693359,-3.38216]",98.7449,-100,0,0,[]] call _cString;
_bank_computer_NORTH = ["xcam_Laptop_unfolded_F","[14290.65332,12592.374023,4.62458]",188.388,-100,0,0,[]] call _cString;

// Bank South
["Land_boden_250_250_025_clean_cnc","[10764.0869141,9323.0751953,0.803879]",341.62,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10758.0605469,9318.302734,-0.133835]",341.62,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10764.00585938,9320.295898,-0.00588989]",341.62,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10766.332031,9325.0820313,0.0286255]",251.178,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10763.779297,9332.638672,-0.167511]",251.178,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10762.109375,9337.5,-0.313126]",251.178,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10757.345703,9339.821289,-0.0841675]",161.178,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10751.522461,9337.826172,0.691925]",161.43,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10749.172852,9333.0449219,1.06903]",71.5566,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10751.692383,9325.493164,0.527771]",71.7462,-100,0,0,[]] call _cString;
["xcam_Concrete_SmallWall_8m_F","[10753.280273,9320.654297,0]",70.9882,-100,0,0,[]] call _cString;
["xcam_GH_Stairs_F","[10761.261719,9316.643555,-3.36195]",160.988,-100,0,0,[]] call _cString;
_bank_computer_SOUTH = ["xcam_Laptop_unfolded_F","[10760.750977,9337.464844,4.20779]",251.614,-100,0,0,[]] call _cString;

//Coquillage
["xcam_StoneSharp_small","[14963.336914,7430.0458984,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_big","[14976.415039,7420.0302734,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_medium","[14959.420898,7415.436523,-1.90735e-006]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_big","[14960.294922,7445.500488,-1.90735e-006]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_Wall","[14982.322266,7435.808105,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_medium","[14970.515625,7427.859375,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_small","[14954.558594,7435.658203,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_small","[14968.420898,7411.90625,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_small","[14953.25293,7409.495117,0]",0,-100,0,0,[]] call _cString;
["xcam_StoneSharp_medium","[14970.724609,7443.232422,0]",0,-100,0,0,[]] call _cString;
["xcam_BluntStones_erosion","[14951.235352,7425.539551,0]",0,-100,0,0,[]] call _cString;
["xcam_BluntStones_erosion","[14963.188477,7422.708496,0]",0,-100,0,0,[]] call _cString;
["xcam_BluntStones_erosion","[14965.558594,7434.940918,0]",0,-100,0,0,[]] call _cString;
["xcam_W_sharpStones_erosion","[14980.12207,7444.740723,0]",0,-100,0,0,[]] call _cString;
["xcam_W_sharpStones_erosion","[14985.194336,7428.162598,0]",0,-100,0,0,[]] call _cString;
["xcam_W_sharpStones_erosion","[14975.649414,7414.941406,0]",0,-100,0,0,[]] call _cString;
["xcam_W_sharpStones_erosion","[14968.568359,7411.347656,0]",0,-100,0,0,[]] call _cString;
["xcam_W_sharpStones_erosion","[14957.985352,7410.351563,0]",0,-100,0,0,[]] call _cString;
["Land_UWreck_FishingBoat_F","[14961.930664,7438.669922,0]",0,-100,0,0,[]] call _cString;

_lamp = "Land_LampHalogen_F" createVehicleLocal [0, 0, 0];
_lamp setposATL [13213.299805,8841.537109,-6.76977];
_lamp setDir 145;
_lamp setVectorUp [0, 0, 1];
_lamp allowDamage false;

_radio = "xcam_FMradio_F" createVehicleLocal [0, 0, 0];
_radio setPosATL [13240.370117,8858.248047,0.827742];
_radio setDir -35;
_radio setVectorUp [0, 0, 1];
_radio allowDamage false;

[_lamp, _radio] spawn
{
	while {true} do
	{
		if ((floor(serverTime) % 7) isEqualTo 0) then
		{
			[_this select 0] call public_fnc_lightBug;
		};
		if ((floor(serverTime) % 2) isEqualTo 0) then
		{
			(_this select 1) say3D "south_radio_music_1";
		};
		sleep 90;
	};
};
