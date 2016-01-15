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

#define G_RESPAWN_GENERAL\
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
	{16611.4,9454.08,0.00144005} \
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
		positions[] = G_RESPAWN_GENERAL;
	};
};

#undef G_RESPAWN_FIELD
#undef G_RESPAWN_GENERAL
#undef G_RESPAWN_NORTH
