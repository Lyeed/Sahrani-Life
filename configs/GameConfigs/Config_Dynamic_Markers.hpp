#define G_RESPAWN_FIELD \
{ \
	{9396.87,10084.8,0}, \
	{10213.3,10075.2,0}, \
	{9363.92,10637.4,0}, \
	{17973.2,18135.2,0}, \
	{13195.3,15351.7,0}, \
	{9833.72,9010.51,0}, \
	{6026.2,7379.96,0}, \
	{16433.2,4620.58,0}, \
	{16080.7,9360.87,0}, \
	{3255.72,3283.39,0}, \
	{17723.5,9695.56,0}, \
	{10195.1,16966.5,0} \
}

#define G_RESPAWN_GENERAL \
{ \
	{11678.3,5944.3,0.00143862}, \
	{10807,5009.23,0.00143909}, \
	{9363.37,5271.61,0.00143814}, \
	{9234.82,5907.41,0.00143814}, \
	{7609.26,6381.78,0.00144005}, \
	{10253.6,7388.81,0.00143814}, \
	{10665.1,9677.67,0.00144196}, \
	{19228.1,13654.2,0.00143862}, \
	{17753.1,12382,0.00144196}, \
	{12663.1,15078.2,0.00143433}, \
	{11376.8,14387.5,0.00100708}, \
	{11175.8,14601,0.00143433}, \
	{4428.55,15817.2,0.00144005}, \
	{16611.4,9454.08,0.00144005}, \
	{3274.83,2158.89,0.00111008}, \
	{1568.53,2299.73,0.00154495}, \
	{7493.31,6509.01,0.00146675}, \
	{6404.16,7448.47,0.0015564}, \
	{6254.07,7763.6,0.00162888}, \
	{9749.5,8202.34,0.00170898}, \
	{12045,7042.5,0.00182724}, \
	{13878.9,10292,0.00152016}, \
	{13288.2,10706.5,0.00150299}, \
	{11400.8,14279.2,0.00160217}, \
	{10341.1,14957.9,0.00193787}, \
	{11336.9,16887,0.00160027}, \
	{9854.27,16537.6,0.000976563}, \
	{14021.5,16779.9,0.00154114}, \
	{17877.8,12363.1,0.00143814}, \
	{17245.6,9662.67,0.00164413}, \
	{16652.2,11901.9,0.00123596}, \
	{7549.15,6378.22,0.00144672}, \
	{7745.51,6248.93,0.00143909}, \
	{10617,4640.28,0.0014267}, \
	{11758,5788.91,0.00147629}, \
	{13163.1,6926.49,0.00143814}, \
	{17194.6,14110.9,0.00143909}, \
	{18947.5,13969.4,0.00178528}, \
	{10629.8,16207.1,0.00152588}, \
	{12488.4,10852.4,0.00143814}, \
	{14447.9,8563.14,0.00175476} \
}

#define G_RESPAWN_NORTH \
{ \
	{16610,9435.35,0.00143909}, \
	{15344.2,9872.24,0.00129318}, \
	{13426.5,11049.1,0.00146675}, \
	{14754.3,11186.1,0.00154877}, \
	{13102.4,11295,0.00143814}, \
	{15375.6,13694.5,0.00171661}, \
	{10815.6,12603.9,0.00143814} \
}

#define G_RESPAWN_ARCHEOLOGIE \
{ \
	{16648.9,11888.2,0.0014801}, \
	{7088.14,7800.87,0.0021286}, \
	{14761.4,13977.3,0.00151062} \
}

#define G_RESPAWN_PILLAGE \
{ \
	{7549.46,11309.5,-109.617} \
}

class ALYSIA_DYN_MARKERS
{
	//- DRUGS FIELDS
	class cocaine_1
	{
		text        = "Champ de coca";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 4000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions[] = G_RESPAWN_FIELD;
	};
	class cannabis_1
	{
		text        = "Champ de cannabis";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1500;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions[] = G_RESPAWN_FIELD;
	};
	class meth_1
	{
		text        = "Champ d'ephedra";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 15000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions[] = G_RESPAWN_FIELD;
	};
	class heroin_1
	{
		text        = "Champ de pavot";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 8000;
		discover[]  = {"CIV", "GUER"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions[] = G_RESPAWN_FIELD;
	};

	//- BLACKMARKETS
	class black_market_1_marker
	{
		text        = "Marché noir";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "black_market_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};
	class black_market_2_marker
	{
		text        = "Marché noir";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "black_market_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};

	//- ALCOOL
	class dealer_alcool_marker
	{
		text        = "Commerçant d'alcool";
		type        = "Fett_hardpoint";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "dealer_alcool";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_NORTH;
	};

	//- LAUNDER
	class launder_marker
	{
		text        = "Blanchiment d'argent";
		type        = "Fett_hardpoint";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "launder";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};

	//- RECELEURS
	class cardealer_1_marker
	{
		text        = "Receleur de véhicules";
		type        = "Fett_bicycle";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "cardealer_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};
	class cardealer_2_marker
	{
		text        = "Receleur de véhicules";
		type        = "Fett_bicycle";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "cardealer_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};

	//- DEALERS
	class drugs_dealer_1_marker
	{
		text        = "Dealeur";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "drugs_dealer_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};
	class drugs_dealer_2_marker
	{
		text        = "Dealeur";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "drugs_dealer_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};

	//- ARCHEOLOGIE
	class archeologie_1
	{
		text        = "Site archéologique";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_archeo";
		positions[] = G_RESPAWN_ARCHEOLOGIE;
	};

	//- PILLAGE
	class pillage_1
	{
		text        = "Pillage";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		discover[]  = {"CIV"};
		positions[] = G_RESPAWN_PILLAGE;
	};

	//- RENOVATION
	class renovation_marker
	{
		text        = "Rénovation d'artefacts";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "renovation";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};

	class hydration_soufre_marker
	{
		text        = "Hydratation du soufre";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "hydration_soufre";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions[] = G_RESPAWN_GENERAL;
	};
};

#undef G_RESPAWN_FIELD
#undef G_RESPAWN_GENERAL
#undef G_RESPAWN_NORTH
#undef G_RESPAWN_ARCHEOLOGIE
#undef G_RESPAWN_PILLAGE
