/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!hasInterface) exitWith {};

{
	_x hideObject true;
	_x enableSimulation false;
} forEach (nearestObjects [[13232.6,8848.81,0.00143814], [], 40]);

{
	_object = (_x select 0) nearestObject (_x select 1);
	if ((isNil "_object") || {(isNull _object)}) then {
		diag_log format ["[ERROR] Object %1 cannot be found", (_x select 1)];
	} else {
		_object hideObject true;
		_object enableSimulation false;
	};
} forEach 
(
	[
		[[13488.6,8859.77,0.00143814], 507975],
		[[13488.6,8859.77,0.00143814], 507979],
		[[10252,9240,128], 476871],
		[[10252,9240,128], 476880],
		[[10252,9240,128], 476881],
		[[10252,9240,128], 476879],
		[[10252,9240,128], 480724],
		[[10252,9240,128], 480722],
		[[10252,9240,128], 480710],
		[[12098,17745,25.9516], 129015],
		[[12098,17745,25.9516], 129014],
		[[12098,17745,25.9516], 129081],
		[[12098,17745,25.9516], 129102],
		[[12098,17745,25.9516], 129101],
		[[12098,17745,25.9516], 129145],
		[[12098,17745,25.9516], 129144],
		[[12098,17745,25.9516], 129143],
		[[12098,17745,25.9516], 129134],
		[[12098,17745,25.9516], 129132],
		[[12098,17745,25.9516], 129344],
		[[12098,17745,25.9516], 129343],
		[[12098,17745,25.9516], 129342],
		[[12098,17745,25.9516], 129133],
		[[12098,17745,25.9516], 129135],
		[[12098,17745,25.9516], 129080],
		[[12098,17745,25.9516], 129334],
		[[12098,17745,25.9516], 129345],
		[[8110,7817,177], 100162],
		[[8110,7817,177], 100161],
		[[8110,7817,177], 100163],
		[[8110,7817,177], 100164],
		[[8110,7817,177], 100286],
		[[8110,7817,177], 100287],
		[[8110,7817,177], 100284],
		[[8110,7817,177], 100285],
		[[8110,7817,177], 100306],
		[[13996,12255,50], 333334],
		[[11930,15330,153], 196242],
		[[11930,15330,153], 198653],
		[[11930,15330,153], 198652],
		[[11930,15330,153], 198691],
		[[11930,15330,153], 198690],
		[[11930,15330,153], 198666],
		[[11930,15330,153], 198665],
		[[11930,15330,153], 198725],
		[[8204,7863,177], 470389],
		[[8204,7863,177], 465016],
		[[8204,7863,177], 117209],
		[[8204,7863,177], 595932],
		[[8204,7863,177], 577341],
		[[8204,7863,177], 584192],
		[[8204,7863,177], 591481],
		[[8204,7863,177], 483266],
		[[8204,7863,177], 65563],
		[[8204,7863,177], 387307],
		[[8204,7863,177], 483273],
		[[8204,7863,177], 117221],
		[[8204,7863,177], 117220],
		[[8204,7863,177], 584196],
		[[8204,7863,177], 402591],
		[[8204,7863,177], 220116],
		[[8204,7863,177], 220115],
		[[8204,7863,177], 220156],
		[[8204,7863,177], 47874],
		[[8204,7863,177], 539911],
		[[8110,7817,177], 128923],
		[[8110,7817,177], 128927],
		[[8110,7817,177], 128926],
		[[8110,7817,177], 128928],
		[[8110,7817,177], 128924],
		[[8110,7817,177], 128945],
		[[8110,7817,177], 129012],
		[[8110,7817,177], 129016],
		[[8110,7817,177], 129197],
		[[8110,7817,177], 129332],
		[[8110,7817,177], 129196],
		[[8110,7817,177], 100134],
		[[8110,7817,177], 89510],
		[[8110,7817,177], 89511],
		[[8110,7817,177], 89512],
		[[8110,7817,177], 89520],
		[[8110,7817,177], 89514],
		[[8110,7817,177], 89515],
		[[8110,7817,177], 89516],
		[[8110,7817,177], 89589],
		[[8110,7817,177], 89590],
		[[8110,7817,177], 100194],
		[[8110,7817,177], 100195],
		[[8110,7817,177], 100198],
		[[8110,7817,177], 100197],
		[[8110,7817,177], 100199],
		[[8110,7817,177], 100193],
		[[8110,7817,177], 100192],
		[[8110,7817,177], 89513],
		[[12098,17745,25.9516], 128972],
		[[12098,17745,25.9516], 128973],
		[[12098,17745,25.9516], 128964],
		[[14272,12421,39.9411], 314100],
		[[14272,12421,39.9411], 314106],
		[[14272,12421,39.9411], 314737],
		[[14272,12421,39.9411], 314655],
		[[14272,12421,39.9411], 315063],
		[[14272,12421,39.9411], 314974],
		[[14272,12421,39.9411], 314975],
		[[14272,12421,39.9411], 314359],
		[[14272,12421,39.9411], 314356],
		[[14272,12421,39.9411], 314357],
		[[14272,12421,39.9411], 314358],
		[[14272,12421,39.9411], 314093],
		[[14272,12421,39.9411], 314657],
		[[14272,12421,39.9411], 314994],
		[[13218.47168,8845.404297,0], 501481],
		[[13218.47168,8845.404297,0], 501648],
		[[13218.47168,8845.404297,0], 501643],
		[[13218.47168,8845.404297,0], 501703],
		[[13218.47168,8845.404297,0], 501606],
		[[13218.47168,8845.404297,0], 501470],
		[[13218.47168,8845.404297,0], 501401],
		[[13218.47168,8845.404297,0], 501587],
		[[13218.47168,8845.404297,0], 5016051],
		[[13218.47168,8845.404297,0], 501548],
		[[13218.47168,8845.404297,0], 501344],
		[[13218.47168,8845.404297,0], 501464],
		[[13218.47168,8845.404297,0], 501457],
		[[13218.47168,8845.404297,0], 501465],
		[[13218.47168,8845.404297,0], 501472],
		[[13218.47168,8845.404297,0], 501471],
		[[13218.47168,8845.404297,0], 501476],
		[[13218.47168,8845.404297,0], 501473],
		[[13218.47168,8845.404297,0], 501466],
		[[13218.47168,8845.404297,0], 501451],
		[[13218.47168,8845.404297,0], 501458],
		[[13218.47168,8845.404297,0], 501454],
		[[13218.47168,8845.404297,0], 501453],
		[[13218.47168,8845.404297,0], 501459],
		[[13218.47168,8845.404297,0], 501462],
		[[13218.47168,8845.404297,0], 501487],
		[[13218.47168,8845.404297,0], 501493],
		[[13218.47168,8845.404297,0], 501429],
		[[13218.47168,8845.404297,0], 501474],
		[[13218.47168,8845.404297,0], 501477],
		[[13218.47168,8845.404297,0], 501467],
		[[13218.47168,8845.404297,0], 501490],
		[[13218.47168,8845.404297,0], 501452],
		[[13218.47168,8845.404297,0], 501491],
		[[13710.248047,9015.952148,0], 506747],
		[[13710.248047,9015.952148,0], 508309],
		[[16514.0683594,9317.165039,0], 566242],
		[[16514.0683594,9317.165039,0], 566267],
		[[7710.517578,15801.783203,0.265272], 47533],
		[[7710.517578,15801.783203,0.265272], 47532],
		[[7710.517578,15801.783203,0.265272], 47531],
		[[7710.517578,15801.783203,0.265272], 47537],
		[[7710.517578,15801.783203,0.265272], 47526],
		[[7710.517578,15801.783203,0.265272], 47525],
		[[14426.961914,12495.945313,0.80724], 314544],
		[[14064.856445,12506.230469,0], 313508],
		[[19127.919922,14008.492188,0], 385124],
		[[19127.919922,14008.492188,0], 385129],
		[[17165.886719,14301.768555,0], 257303],
		[[15359.973633,13885.621094,0.377947], 348392],
		[[12637.962891,14968.456055,0], 220235],
		[[12345.882813,15003.415039,0], 219784],
		[[7714.0532227,15802.962891,-1.90735e-006], 47539],
		[[7714.0532227,15802.962891,-1.90735e-006], 47538],
		[[14411.270508,10792.384766,0], 344969],
		[[13425.6,8841.97,0.00143814], 507894],
		[[13425.6,8841.97,0.00143814], 507895],
		[[13425.6,8841.97,0.00143814], 507896],
		[[13455.7,8843.28,0.00324059], 507901],
		[[13455.7,8843.28,0.00324059], 507902],
		[[13455.7,8843.28,0.00324059], 507903],
		[[13477.7,8847.78,0.00143814], 507960],
		[[13468.6,8855.24,0.00143814], 507948],
		[[14270.2,10478.1,0.00138474], 491023],
		[[13832.8,9476.01,0.00143623], 502286]
		[[9686.914063,11031.15625,0.51776], 319006],
		[[7573.927734,6317.308594,0.496634], 111784],
		[[12769.731445,8091.696289,0],538173],
		[[12983.632813,9030.0751953,0.491583], 499736],
		[[10499.327148,9579.145508,0.288719], 475099],
		[[10499.327148,9579.145508,0.288719], 474996],
		[[10499.327148,9579.145508,0.288719], 474767],
		[[10499.327148,9579.145508,0.288719], 474758],
		[[10499.327148,9579.145508,0.288719], 474765],
		[[9788.851563,8670.263672,0], 512557],
		[[10499.327148,9579.145508,0.288719], 474791],
		[[10499.327148,9579.145508,0.288719], 475100],
		[[10499.327148,9579.145508,0.288719], 475032],
		[[10372.78418,9400.652344,0.541245], 477031],
		[[12807,8808.44,0.00143814], 500165],
		[[10565.4,9603.47,0.00144196], 475104]
	]
);
