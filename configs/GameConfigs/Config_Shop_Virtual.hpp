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
	};

	class farmingmarket
	{
		name = "Commerçant agricol";
		side = "civilian";
		items[] = {{"corn_seed", "bean_seed", "cotton_seed", "engrais"}, {"cotton", "bean", "corn"}};
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
	};

	/* FACTIONS MARKET */
	class rebel
	{
		name = "Marché illégal";
		side = "civilian";
		items[]= {{"water", "banane", "mangue", "lockpick", "handcuffs", "handcuffkeys", "baillon", "bandeau", "blastingcharge", "lab_small", "lab_medium", "lab_large"}, {"banane", "mangue"}};
	};

	class west 
	{
		name = "Milice";
		side = "west";
		items[] = {{"defusekit", "salive", "cone", "barriere", "murbetonarme", "bunkersable", "mursable", "couloirsable", 
			"grandmurescalier", "gueritesable", "grandmur", "coinsable", "adn", "donut", "soda", "handcuffkeys", "handcuffs", 
			"kit_destru", "spikeStrip", "bip", "storage"}, {}};
	};

	class east
	{
		name = "Garde";
		side = "east";
		items[] = {{"ragout", "kefir"}, {}};
	};

	class guer
	{
		name = "Hopital";
		side = "independent";
		items[] = {{}, {}};
	};

	/* RESSOURCES */
	class dealer
	{
		name = "Dealer";
		side = "civilian";
		items[] = {{}, {"cocainep", "heroinps", "marijuana", "cocainepc", "methp"}};
	};

	class oil
	{
		name = "Commerçant de pétrole";
		side = "civilian";
		items[] = {{}, {"oilp", "fuelF"}};
	};

	class glass
	{
		name = "Commerçant de verre";
		side = "civilian";
		items[] = {{}, {"glass"}};
	};

	class iron
	{
		name = "Commerçant de fer";
		side = "civilian";
		items[] = {{}, {"ironp", "soufre"}};
	};

	class wood
	{
		name = "Commerçant de bois";
		side = "civilian";
		items[] = {{}, {"woodp"}};
	};

	class gold
	{
		name = "Commerçant d'or";
		side = "civilian";
		items[] = {{}, {"goldbar"}};
	};

	class black_market
	{
		name = "Marché noir";
		side = "civilian";
		items[] = {{"cannabis_seed", "heroin_seed", "cocaine_seed", "meth_seed", "nitro"}, {"artefact", "artefact_R", "artefact_exrare", "artefact_rare", "artefact_common", "objvaleur"}};
	};

	class platine
	{
		name = "Commerçant de platine";
		side = "civilian";
		items[] = {{}, {"platinep", "platinepa"}};
	};

	class tabac
	{
		name = "Buraliste";
		side = "civilian";
		items[] = {{}, {"cigarette", "tabac_seed"}};
	};

	class furniture
	{
		name = "Commerçant de meuble";
		side = "civilian";
		items[] = {{}, {"furniture"}};
	};

	class copper
	{
		name = "Commerçant de cuivre";
		side = "civilian";
		items[] = {{}, {"copperp"}};
	};

	class textile
	{
		name = "Usine de textile";
		side = "civilian";
		items[] = {{}, {"cottonp"}};
	};
};
