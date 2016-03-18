/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

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
		[[13832.8,9476.01,0.00143623], 502286],
		[[9686.914063,11031.15625,0.51776], 319006],
		[[7573.927734,6317.308594,0.496634], 111784],
		[[12769.731445,8091.696289,0],538173],
		[[12983.632813,9030.0751953,0.491583], 499736],
		[[10499.327148,9579.145508,0.288719], 474996],
		[[10499.327148,9579.145508,0.288719], 474758],
		[[9788.851563,8670.263672,0], 512557],
		[[10499.327148,9579.145508,0.288719], 474791],
		[[10499.327148,9579.145508,0.288719], 475032],
		[[10372.78418,9400.652344,0.541245], 477031],
		[[12807,8808.44,0.00143814], 500165],
		[[10565.4,9603.47,0.00144196], 475104],
		[[10541.8,9568.64,0.120613], 474997],
		[[10541.8,9568.64,0.120613], 474810],
		[[10541.8,9568.64,0.120613], 474733],
		[[10541.8,9568.64,0.120613], 475352],
		[[10541.8,9568.64,0.120613], 475368],
		[[10541.8,9568.64,0.120613], 475660],
		[[10541.8,9568.64,0.120613], 475659],
		[[10541.8,9568.64,0.120613], 475004],
		[[10541.8,9568.64,0.120613], 475003],
		[[10541.8,9568.64,0.120613], 475000],
		[[10541.8,9568.64,0.120613], 475001],
		[[10541.8,9568.64,0.120613], 475002],
		[[10541.8,9568.64,0.120613], 474761],
		[[10541.8,9568.64,0.120613], 474760],
		[[10541.8,9568.64,0.120613], 474759],
		[[10541.8,9568.64,0.120613], 474790],
		[[10541.8,9568.64,0.120613], 475029],
		[[10541.8,9568.64,0.120613], 475028],
		[[10541.8,9568.64,0.120613], 475030],
		[[10541.8,9568.64,0.120613], 475027],
		[[10541.8,9568.64,0.120613], 475026],
		[[10541.8,9568.64,0.120613], 475012],
		[[10541.8,9568.64,0.120613], 475010],
		[[10541.8,9568.64,0.120613], 475006],
		[[10541.8,9568.64,0.120613], 475009],
		[[10541.8,9568.64,0.120613], 475011],
		[[10541.8,9568.64,0.120613], 475007],
		[[10541.8,9568.64,0.120613], 474764],
		[[10541.8,9568.64,0.120613], 474763],
		[[10541.8,9568.64,0.120613], 474762],
		[[10541.8,9568.64,0.120613], 475008],
		[[10541.8,9568.64,0.120613], 474781],
		[[10541.8,9568.64,0.120613], 474672],
		[[10541.8,9568.64,0.120613], 474648],
		[[10541.8,9568.64,0.120613], 474643],
		[[14205.6,12529.2,0.00143814], 313806],
		[[14205.6,12529.2,0.00143814], 312837],
		[[14205.6,12529.2,0.00143814], 312841],
		[[14205.6,12529.2,0.00143814], 312842],
		[[14088.8,12505.1,0.00143814], 313514],
		[[14088.8,12505.1,0.00143814], 313510],
		[[14088.8,12505.1,0.00143814], 313512],
		[[14171,12472.4,0.00143814], 314008],
		[[14273.6,12524.1,0.00143814], 312892],
		[[14273.6,12524.1,0.00143814], 313164],
		[[14273.6,12524.1,0.00143814], 313193],
		[[14273.6,12524.1,0.00143814], 313194],
		[[14273.6,12524.1,0.00143814], 313195],
		[[14273.6,12524.1,0.00143814], 313196],
		[[14273.6,12524.1,0.00143814], 313812],
		[[14273.6,12524.1,0.00143814], 313192],
		[[14273.6,12524.1,0.00143814], 313191],
		[[14273.6,12524.1,0.00143814], 312919],
		[[14273.6,12524.1,0.00143814], 312897],
		[[14273.6,12524.1,0.00143814], 312909],
		[[14273.6,12524.1,0.00143814], 312912],
		[[14273.6,12524.1,0.00143814], 312911],
		[[14273.6,12524.1,0.00143814], 312910],
		[[14273.6,12524.1,0.00143814], 312899],
		[[14273.6,12524.1,0.00143814], 312900],
		[[14273.6,12524.1,0.00143814], 313187],
		[[14273.6,12524.1,0.00143814], 313931],
		[[14273.6,12524.1,0.00143814], 313813],
		[[14273.6,12524.1,0.00143814], 313792],
		[[14273.6,12524.1,0.00143814], 313794],
		[[14273.6,12524.1,0.00143814], 314537],
		[[14273.6,12524.1,0.00143814], 314429],
		[[14273.6,12524.1,0.00143814], 314416],
		[[14273.6,12524.1,0.00143814], 313789],
		[[14273.6,12524.1,0.00143814], 313790],
		[[12132.1,17769.4,0.00143814], 128965],
		[[13591.5,10481.1,0.00143814], 490115],
		[[10580.5,9605.62,2.15124], 475634],
		[[10580.5,9605.62,2.15124], 475686],
		[[10580.5,9605.62,2.15124], 475635],
		[[10580.5,9605.62,2.15124], 475620],
		[[10580.5,9605.62,2.15124], 475669],
		[[10580.5,9605.62,2.15124], 475671],
		[[10580.5,9605.62,2.15124], 475616],
		[[10580.5,9605.62,2.15124], 475619],
		[[10580.5,9605.62,2.15124], 475667],
		[[10580.5,9605.62,2.15124], 475617],
		[[10580.5,9605.62,2.15124], 475618],
		[[10580.5,9605.62,2.15124], 475668],
		[[10580.5,9605.62,2.15124], 475297],
		[[10580.5,9605.62,2.15124], 475295],
		[[10580.5,9605.62,2.15124], 475296],
		[[10580.5,9605.62,2.15124], 475362],
		[[10580.5,9605.62,2.15124], 475364],
		[[10580.5,9605.62,2.15124], 475292],
		[[10580.5,9605.62,2.15124], 475291],
		[[10580.5,9605.62,2.15124], 475349],
		[[10580.5,9605.62,2.15124], 375278],
		[[10580.5,9605.62,2.15124], 475280],
		[[10580.5,9605.62,2.15124], 475281],
		[[10580.5,9605.62,2.15124], 475277],
		[[10580.5,9605.62,2.15124], 475300],
		[[10580.5,9605.62,2.15124], 475353],
		[[10580.5,9605.62,2.15124], 475301],
		[[10580.5,9605.62,2.15124], 475302],
		[[10580.5,9605.62,2.15124], 475593],
		[[10580.5,9605.62,2.15124], 475595],
		[[10580.5,9605.62,2.15124], 475594],
		[[10580.5,9605.62,2.15124], 475596],
		[[10580.5,9605.62,2.15124], 475597],
		[[10580.5,9605.62,2.15124], 475683],
		[[10580.5,9605.62,2.15124], 475679],
		[[10580.5,9605.62,2.15124], 475640],
		[[10580.5,9605.62,2.15124], 475652],
		[[10580.5,9605.62,2.15124], 475615],
		[[10580.5,9605.62,2.15124], 475647],
		[[10580.5,9605.62,2.15124], 475592],
		[[10580.5,9605.62,2.15124], 475613],
		[[10580.5,9605.62,2.15124], 475612],
		[[10580.5,9605.62,2.15124], 475611],
		[[10580.5,9605.62,2.15124], 475454],
		[[10580.5,9605.62,2.15124], 475290],
		[[10580.5,9605.62,2.15124], 475289],
		[[10580.5,9605.62,2.15124], 475288],
		[[10580.5,9605.62,2.15124], 475287],
		[[10580.5,9605.62,2.15124], 475641],
		[[10580.5,9605.62,2.15124], 475648],
		[[10580.5,9605.62,2.15124], 475670],
		[[10580.5,9605.62,2.15124], 475633],
		[[10580.5,9605.62,2.15124], 475614],
		[[10580.5,9605.62,2.15124], 475655],
		[[10580.5,9605.62,2.15124], 475642],
		[[10580.5,9605.62,2.15124], 475643],
		[[10580.5,9605.62,2.15124], 475654],
		[[10580.5,9605.62,2.15124], 475338],
		[[10580.5,9605.62,2.15124], 475284],
		[[10580.5,9605.62,2.15124], 475279],
		[[10580.5,9605.62,2.15124], 475278],
		[[10580.5,9605.62,2.15124], 475632],
		[[10580.5,9605.62,2.15124], 475588],
		[[10580.5,9605.62,2.15124], 475361],
		[[10580.5,9605.62,2.15124], 475286],
		[[10580.5,9605.62,2.15124], 475310],
		[[10580.5,9605.62,2.15124], 475285],
		[[10580.5,9605.62,2.15124], 475298],
		[[10580.5,9605.62,2.15124], 475294],
		[[10580.5,9605.62,2.15124], 475293],
		[[10580.5,9605.62,2.15124], 475363],
		[[10580.5,9605.62,2.15124], 475359],
		[[10580.5,9605.62,2.15124], 475344],
		[[10580.5,9605.62,2.15124], 475276],
		[[10580.5,9605.62,2.15124], 475664],
		[[10580.5,9605.62,2.15124], 475685],
		[[10580.5,9605.62,2.15124], 475605],
		[[10580.5,9605.62,2.15124], 475607],
		[[10528.3,9572.36,0.00144196], 475079],
		[[10528.3,9572.36,0.00144196], 475084],
		[[10528.3,9572.36,0.00144196], 475080],
		[[10528.3,9572.36,0.00144196], 475081],
		[[10528.3,9572.36,0.00144196], 475082],
		[[10528.3,9572.36,0.00144196], 475083],
		[[10528.3,9572.36,0.00144196], 475072],
		[[10528.3,9572.36,0.00144196], 475663],
		[[10528.3,9572.36,0.00144196], 475090],
		[[10528.3,9572.36,0.00144196], 475088],
		[[10528.3,9572.36,0.00144196], 474770],
		[[10528.3,9572.36,0.00144196], 474771],
		[[10528.3,9572.36,0.00144196], 475073],
		[[10528.3,9572.36,0.00144196], 475077],
		[[10528.3,9572.36,0.00144196], 475357],
		[[10528.3,9572.36,0.00144196], 474772],
		[[10528.3,9572.36,0.00144196], 475087],
		[[10528.3,9572.36,0.00144196], 475086],
		[[10528.3,9572.36,0.00144196], 475664],
		[[10528.3,9572.36,0.00144196], 475662],
		[[10528.3,9572.36,0.00144196], 475091],
		[[10528.3,9572.36,0.00144196], 475076],
		[[10528.3,9572.36,0.00144196], 475074],
		[[10528.3,9572.36,0.00144196], 474768],
		[[10528.3,9572.36,0.00144196], 474767],
		[[10528.3,9572.36,0.00144196], 475661],
		[[10528.3,9572.36,0.00144196], 475089],
		[[10528.3,9572.36,0.00144196], 475085],
		[[10528.3,9572.36,0.00144196], 475358],
		[[10528.3,9572.36,0.00144196], 475355],
		[[10528.3,9572.36,0.00144196], 474773],
		[[10528.3,9572.36,0.00144196], 474776],
		[[10528.3,9572.36,0.00144196], 475095],
		[[10528.3,9572.36,0.00144196], 475665],
		[[10528.3,9572.36,0.00144196], 475094],
		[[10528.3,9572.36,0.00144196], 475078],
		[[10528.3,9572.36,0.00144196], 475098],
		[[10528.3,9572.36,0.00144196], 475075],
		[[10528.3,9572.36,0.00144196], 475356],
		[[10528.3,9572.36,0.00144196], 475097],
		[[10528.3,9572.36,0.00144196], 475093],
		[[10528.3,9572.36,0.00144196], 474769],
		[[10528.3,9572.36,0.00144196], 474766],
		[[10528.3,9572.36,0.00144196], 474765],
		[[10528.3,9572.36,0.00144196], 475096],
		[[10528.3,9572.36,0.00144196], 475354],
		[[10528.3,9572.36,0.00144196], 474777],
		[[10528.3,9572.36,0.00144196], 475079],
		[[10528.3,9572.36,0.00144196], 475666],
		[[10528.3,9572.36,0.00144196], 475075],
		[[10528.3,9572.36,0.00144196], 475075],
		[[10528.3,9572.36,0.00144196], 475681],
		[[10528.3,9572.36,0.00144196], 475680],
		[[10528.3,9572.36,0.00144196], 475681],
		[[10528.3,9572.36,0.00144196], 475630],
		[[10528.3,9572.36,0.00144196], 475629],
		[[10528.3,9572.36,0.00144196], 475628],
		[[10528.3,9572.36,0.00144196], 475627],
		[[10528.3,9572.36,0.00144196], 475626],
		[[10528.3,9572.36,0.00144196], 475622],
		[[10528.3,9572.36,0.00144196], 475609],
		[[10528.3,9572.36,0.00144196], 475650],
		[[10528.3,9572.36,0.00144196], 475651],
		[[10528.3,9572.36,0.00144196], 475604],
		[[10528.3,9572.36,0.00144196], 475636],
		[[10528.3,9572.36,0.00144196], 475603],
		[[10528.3,9572.36,0.00144196], 475601],
		[[10528.3,9572.36,0.00144196], 475621],
		[[10528.3,9572.36,0.00144196], 475871],
		[[10528.3,9572.36,0.00144196], 475872],
		[[10528.3,9572.36,0.00144196], 475585],
		[[10528.3,9572.36,0.00144196], 475584],
		[[10528.3,9572.36,0.00144196], 475587],
		[[10528.3,9572.36,0.00144196], 475474],
		[[10528.3,9572.36,0.00144196], 475608],
		[[10528.3,9572.36,0.00144196], 475600],
		[[10528.3,9572.36,0.00144196], 475602],
		[[10528.3,9572.36,0.00144196], 475625],
		[[10528.3,9572.36,0.00144196], 475623],
		[[10528.3,9572.36,0.00144196], 475624],
		[[10528.3,9572.36,0.00144196], 475312],
		[[10528.3,9572.36,0.00144196], 475303],
		[[10528.3,9572.36,0.00144196], 475313],
		[[10528.3,9572.36,0.00144196], 475318],
		[[10528.3,9572.36,0.00144196], 475311],
		[[10528.3,9572.36,0.00144196], 475586],
		[[10528.3,9572.36,0.00144196], 475632],
		[[10528.3,9572.36,0.00144196], 475317],
		[[10528.3,9572.36,0.00144196], 475598],
		[[10528.3,9572.36,0.00144196], 475599],
		[[10528.3,9572.36,0.00144196], 475367],
		[[10528.3,9572.36,0.00144196], 475360],
		[[10528.3,9572.36,0.00144196], 475366],
		[[10528.3,9572.36,0.00144196], 475365],
		[[10528.3,9572.36,0.00144196], 475283],
		[[10528.3,9572.36,0.00144196], 475282],
		[[10528.3,9572.36,0.00144196], 475333],
		[[10528.3,9572.36,0.00144196], 475335],
		[[10528.3,9572.36,0.00144196], 475336],
		[[10528.3,9572.36,0.00144196], 475334],
		[[10528.3,9572.36,0.00144196], 475606],
		[[10528.3,9572.36,0.00144196], 475682],
		[[10528.3,9572.36,0.00144196], 475045],
		[[10528.3,9572.36,0.00144196], 475644],
		[[10166,6422.14,0.00144196], 577343],
		[[10583,9587.13,0.00144196], 475031],
		[[10583,9587.13,0.00144196], 475033],
		[[10583,9587.13,0.00144196], 475040],
		[[10583,9587.13,0.00144196], 475127],
		[[10583,9587.13,0.00144196], 475122],
		[[10583,9587.13,0.00144196], 475123],
		[[10583,9587.13,0.00144196], 475070],
		[[10583,9587.13,0.00144196], 475065],
		[[10583,9587.13,0.00144196], 475071],
		[[10583,9587.13,0.00144196], 475049],
		[[8072.58,8893.14,0.00142956], 69433],
		[[8072.58,8893.14,0.00142956], 64196],
		[[8072.58,8893.14,0.00142956], 64197],
		[[8072.58,8893.14,0.00142956], 64211],
		[[8072.58,8893.14,0.00142956], 64189],
		[[8072.58,8893.14,0.00142956], 64210],
		[[14451.5,10898.4,0.00143814], 344639],
		[[14451.5,10898.4,0.00143814], 344633],
		[[14451.5,10898.4,0.00143814], 344635],
		[[14451.5,10898.4,0.00143814], 344631],
		[[14451.5,10898.4,0.00143814], 344634],
		[[14451.5,10898.4,0.00143814], 344642],
		[[15617.9,8815.79,0.00145721], 573865],
		[[15617.9,8815.79,0.00145721], 564577],
		[[15617.9,8815.79,0.00145721], 564565],
		[[15617.9,8815.79,0.00145721], 564576],
		[[15617.9,8815.79,0.00145721], 564583],
		[[15617.9,8815.79,0.00145721], 564581],
		[[15617.9,8815.79,0.00145721], 282201],
		[[15617.9,8815.79,0.00145721], 282199],
		[[15617.9,8815.79,0.00145721], 282198]
	]
);
