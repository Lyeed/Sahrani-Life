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

#define G_RESPAWN_BLACKMARKET \
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

class ALYSIA_DYN_MARKERS
{
	//- DRUGS FIELDS
	class cocaine_1
	{
		text        = "Champ de coca";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		shop_appear = 1;
		shop_price  = 4000;
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_FIELD;
			global_message = "La faction %1 a brulée un %2";
			message        = "Vous êtes sur le point de bruler <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};
	class cannabis_1
	{
		text        = "Champ de cannabis";
		type        = "Fett_canteen";
		color       = "ColorRed";
		shape       = "ICON";
		shop_appear = 1;
		shop_price  = 1500;
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_FIELD;
			global_message = "La faction %1 a brulée un %2";
			message        = "Vous êtes sur le point de bruler <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};
	class meth_1
	{
		text         = "Champ d'ephedra";
		type         = "Fett_canteen";
		color        = "ColorRed";
		shape        = "ICON";
		shop_appear  = 1;
		shop_price   = 15000;
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_FIELD;
			global_message = "La faction %1 a brulée un %2";
			message        = "Vous êtes sur le point de bruler <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};
	class heroin_1
	{
		text         = "Champ de pavot";
		type         = "Fett_canteen";
		color        = "ColorRed";
		shape        = "ICON";
		shop_appear  = 1;
		shop_price   = 8000;
		discover[]  = {"CIV", "GUER"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_FIELD;
			global_message = "La faction %1 a brulée un %2";
			message        = "Vous êtes sur le point de bruler <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};

	//- BLACKMARKETS
	class black_market_1_marker
	{
		text        = "Marché noir";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "black_market_1";
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_BLACKMARKET;
			global_message = "La faction %1 a démantelé un %2";
			message        = "Vous êtes sur le point de démanteler un <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};
	class black_market_2_marker
	{
		text        = "Marché noir";
		type        = "Fett_campingsite";
		color       = "ColorRed";
		shape       = "ICON";
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "black_market_2";
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_BLACKMARKET;
			global_message = "La faction %1 a démantelé un %2";
			message        = "Vous êtes sur le point de démanteler un <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};

	//- ALCOOL
	class dealer_alcool_marker
	{
		text        = "Commerçant d'alcool";
		type        = "Fett_hardpoint";
		color       = "ColorRed";
		shape       = "ICON";
		shop_appear = 1;
		shop_price  = 1000;
		linked      = "dealer_alcool";
		discover[]  = {"CIV"};
		shown[]     = {};
		class destroy
		{
			respawn[]      = G_RESPAWN_BLACKMARKET;// CHANGER POUR DES POSITIONS AU NOOOOOOOOOOOOOORD
			global_message = "La faction %1 a arrêté un %2";
			message        = "Vous êtes sur le point d'arrêter un <t color='#74DF00'>%1</t><br/>";
			factions[]     = {"WEST", "EAST"};
		};
	};
};

#undef G_RESPAWN_FIELD
#undef G_RESPAWN_BLACKMARKET
