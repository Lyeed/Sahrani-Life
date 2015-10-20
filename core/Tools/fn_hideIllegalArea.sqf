/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

{
	deleteMarkerLocal _x; 
} forEach 
([
	/* LAUNDER */
	"launder_1_marker",
	"launder_2_marker",
	/* PILLAGE */
	"pillage_1_ELIPSE",
	"pillage_2_ELIPSE",
	/* BANK SELLER */
	"gold_bar_dealer",
	/* CAR ILLEGAL SELLERS */
	"chop_shop_1",
	"chop_shop_2",
	/* DEALERS */
	"dealer_1_marker",
	"dealer_2_marker",
	/* DRUGS */
	"process_marijuana_marker",
	"cocaine_1",
	"cocaine_1_zone",
	"cannabis_1",
	"cannabis_1_zone",
	"meth_1",
	"meth_1_zone",
	"heroin_1",
	"heroin_1_zone",
	/* ARCHEOLOGIE */
	"collectionneur_1_marker"
]);

"pillage_1" setMarkerTextLocal "Epave";
"pillage_1" setMarkerColorLocal "ColorBlack";

"pillage_2" setMarkerTextLocal "Epave";
"pillage_2" setMarkerColorLocal "ColorBlack";

"archeologie_1" setMarkerTextLocal "Ruines";
"archeologie_1" setMarkerColorLocal "ColorBlack";

"archeologie_2" setMarkerTextLocal "Ruines";
"archeologie_2" setMarkerColorLocal "ColorBlack";