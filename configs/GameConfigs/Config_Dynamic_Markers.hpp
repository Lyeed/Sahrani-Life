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
		shop_price  = 24000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field";
	};
	class cannabis_1
	{
		text        = "Champ de cannabis";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 21000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field";
	};
	class meth_1
	{
		text        = "Champ d'ephedra";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 35000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field";
	};
	class heroin_1
	{
		text        = "Champ de pavot";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 26000;
		discover[]  = {"CIV", "GUER"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field";
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
		shop_price  = 35000;
		linked      = "black_market_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};
	class black_market_2_marker
	{
		text        = "Marché noir";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 35000;
		linked      = "black_market_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
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
		shop_price  = 25000;
		linked      = "dealer_alcool";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "north";
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
		shop_price  = 50000;
		linked      = "launder";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
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
		shop_price  = 32500;
		linked      = "cardealer_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};
	class cardealer_2_marker
	{
		text        = "Receleur de véhicules";
		type        = "Fett_bicycle";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 32500;
		linked      = "cardealer_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
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
		shop_price  = 33000;
		linked      = "drugs_dealer_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};
	class drugs_dealer_2_marker
	{
		text        = "Dealeur";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 33000;
		linked      = "drugs_dealer_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};

	class archeologie_1
	{
		text        = "Site archéologique";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 22500;
		linked      = "";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_archeo";
		positions = "archeologie";
	};

	class pillage_1
	{
		text        = "Pillage";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 17500;
		discover[]  = {"CIV"};
		positions = "pillage";
	};

	class renovation_marker
	{
		text        = "Rénovation d'artefacts";
		type        = "Fett_ruins";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 20000;
		linked      = "renovation";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};

	class hydration_soufre_marker
	{
		text        = "Hydratation du soufre";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 17500;
		linked      = "hydration_soufre";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "general";
	};

	class dealer_tabac_marker
	{
		text        = "Commerçant de tabac";
		type        = "Fett_hardpoint";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.5;
		shop_appear = 1;
		shop_price  = 9000;
		linked      = "dealer_tabac";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "north";
	};
};
