/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_SHOPS_VIRTUAL
{
	/* GLOBAL MARKET */
	class fishmarket
	{
		name = "Poissonnerie";
		side = "civilian";
		items[] = {{"fishingpoles"}, {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine"}};
		background = "\lyeed_IMG\data\shop\back_fishmarket.jpg";
	};

	class farmingmarket
	{
		name = "Commerçant agricol";
		side = "civilian";
		items[] = {{"corn_seed", "bean_seed", "cotton_seed", "engrais"}, {"cotton", "bean", "corn"}};
		background = "\lyeed_IMG\data\shop\back_farmingmarket.jpg";
	};
	
	class market
	{
		name = "Marché";
		side = "sideUnknown";
		// items[]= {{"water", "banane", "mangue", "fishingpoles", "storage", "fuelF"}, {"banane", "mangue"}};
		items[]= {{"raisin", "prune", "water", "sandwich"}, {"raisin", "prune"}};
	};
	
	class hopital
	{
		name = "Hopital";
		side = "sideUnknown";
		items[] = {{"patch", "seringue", "cerealbar", "sparklingwater"}, {}};
		background = "\lyeed_IMG\data\shop\back_hopital.jpg";
	};

	/* FACTIONS MARKET */
	class rebel
	{
		name = "Marché illégal";
		side = "civilian";
		items[]= {{"water", "banane", "mangue", "lockpick", "handcuffs", "handcuffkeys", "baillon", "bandeau", "blastingcharge", "lab_small", "lab_medium", "lab_large"}, {"banane", "mangue"}};
		background = "\lyeed_IMG\data\shop\back_rebel.jpg";
	};

	class west 
	{
		name = "Milice";
		side = "west";
		items[] = {{"defusekit", "salive", "cone", "barriere", "murbetonarme", "bunkersable", "mursable", "couloirsable", 
			"grandmurescalier", "gueritesable", "grandmur", "coinsable", "adn", "donut", "soda", "handcuffkeys", "handcuffs", 
			"kit_destru", "spikeStrip", "bip", "storage"}, {}};
		background = "\lyeed_IMG\data\shop\back_west.jpg";
	};

	class east
	{
		name = "Garde";
		side = "east";
		items[] = {{"ragout", "kefir"}, {}};
		background = "\lyeed_IMG\data\shop\back_east.jpg";
	};

	class guer
	{
		name = "Hopital";
		side = "independent";
		items[] = {{}, {}};
		background = "\lyeed_IMG\data\shop\back_guer.jpg";
	};

	/* RESSOURCES */
	class dealer
	{
		name = "Dealer";
		side = "civilian";
		items[] = {{}, {"cocainep", "heroinps", "marijuana", "cocainepc", "methp"}};
		background = "\lyeed_IMG\data\shop\back_dealer.jpg";
	};

	class oil
	{
		name = "Commerçant de pétrole";
		side = "civilian";
		items[] = {{}, {"oilp", "fuelF"}};
		background = "\lyeed_IMG\data\shop\back_oil.jpg";
	};

	class glass
	{
		name = "Commerçant de verre";
		side = "civilian";
		items[] = {{}, {"glass"}};
		background = "\lyeed_IMG\data\shop\back_glass.jpg";
	};

	class iron
	{
		name = "Commerçant de fer";
		side = "civilian";
		items[] = {{}, {"ironp", "soufre"}};
		background = "\lyeed_IMG\data\shop\back_iron.jpg";
	};

	class wood
	{
		name = "Commerçant de bois";
		side = "civilian";
		items[] = {{}, {"woodp"}};
		background = "\lyeed_IMG\data\shop\back_wood.jpg";
	};

	class gold
	{
		name = "Commerçant d'or";
		side = "civilian";
		items[] = {{}, {"goldbar"}};
		background = "\lyeed_IMG\data\shop\back_gold.jpg";
	};

	class black_market
	{
		name = "Marché noir";
		side = "civilian";
		items[] = {{"cannabis_seed", "heroin_seed", "cocaine_seed", "meth_seed", "nitro"}, {"artefact", "artefact_R", "artefact_exrare", "artefact_rare", "artefact_common", "objvaleur"}};
		background = "\lyeed_IMG\data\shop\back_black_market.jpg";
	};

	class platine
	{
		name = "Commerçant de platine";
		side = "civilian";
		items[] = {{}, {"platinep", "platinepa"}};
		background = "\lyeed_IMG\data\shop\back_platine.jpg";
	};

	class tabac
	{
		name = "Buraliste";
		side = "civilian";
		items[] = {{}, {"cigarette", "tabac_seed"}};
		background = "\lyeed_IMG\data\shop\back_tabac.jpg";
	};

	class furniture
	{
		name = "Commerçant de meuble";
		side = "civilian";
		items[] = {{}, {"furniture"}};
		background = "\lyeed_IMG\data\shop\back_tabac.jpg";
	};

	class tabac
	{
		name = "Commerçant de cuivre";
		side = "civilian";
		items[] = {{}, {"copperp"}};
		background = "\lyeed_IMG\data\shop\back_tabac.jpg";
	};

	class textile
	{
		name = "Commerçant de cuivre";
		side = "civilian";
		items[] = {{}, {"cottonp"}};
		background = "\lyeed_IMG\data\shop\back_tabac.jpg";
	};
};
