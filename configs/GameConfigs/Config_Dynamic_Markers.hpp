class ALYSIA_DYN_MARKERS
{
	//- DRUGS FIELDS
	class cocaine_1
	{
		text        = "Champ de coca";
		type        = "Maels_illegal_field";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 24000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field_north";
	};
	class cannabis_1
	{
		text        = "Champ de cannabis";
		type        = "Maels_illegal_field";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 21000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field_south";
	};
	class meth_1
	{
		text        = "Champ d'ephedra";
		type        = "Maels_illegal_field";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 35000;
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field_south";
	};
	class heroin_1
	{
		text        = "Champ de pavot";
		type        = "Maels_illegal_field";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 26000;
		discover[]  = {"CIV", "GUER"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_field";
		positions = "field_north";
	};

	//- BLACKMARKETS
	class black_market_1_marker
	{
		text        = "Marché noir";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 35000;
		linked      = "black_market_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};
	class black_market_2_marker
	{
		text        = "Marché noir";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 35000;
		linked      = "black_market_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};

	//- ALCOOL
	class dealer_alcool_marker
	{
		text        = "Commerçant d'alcool";
		type        = "Maels_shop";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 25000;
		linked      = "dealer_alcool";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_north";
	};

	//- RECELEURS
	class cardealer_1_marker
	{
		text        = "Receleur de véhicules";
		type        = "Maels_luxe_car";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 32500;
		linked      = "cardealer_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};
	class cardealer_2_marker
	{
		text        = "Receleur de véhicules";
		type        = "Maels_luxe_car";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 32500;
		linked      = "cardealer_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};

	//- DEALERS
	class drugs_dealer_north_marker
	{
		text        = "Dealeur";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 33000;
		linked      = "drugs_dealer_north";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_north";
	};
	class drugs_dealer_south_marker
	{
		text        = "Dealeur";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 33000;
		linked      = "drugs_dealer_south";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_south";
	};

	class archeologie_1
	{
		text        = "Site archéologique";
		type        = "Maels_archeo";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
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
		type        = "Maels_archeo";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 17500;
		discover[]  = {"CIV"};
		positions = "pillage";
	};

	class renovation_marker
	{
		text        = "Rénovation d'artefacts";
		type        = "Maels_archeo_renove";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 20000;
		linked      = "renovation";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};

	class hydration_soufre_marker
	{
		text        = "Hydratation du soufre";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 17500;
		linked      = "hydration_soufre";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_general";
	};

	class dealer_tabac_marker
	{
		text        = "Commerçant de tabac";
		type        = "Maels_sell";
		color       = "ColorRed";
		shape       = "ICON";
		size        = 0.55;
		shop_appear = 1;
		shop_price  = 9000;
		linked      = "dealer_tabac";
		discover[]  = {"CIV"};
		shown[]     = {};
		destroy[]   = {"WEST", "EAST"};
		destroy_item = "destroy_stand";
		positions = "stands_north";
	};
};
