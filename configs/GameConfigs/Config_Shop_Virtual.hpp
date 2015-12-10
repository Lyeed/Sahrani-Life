class ALYSIA_SHOPS_VIRTUAL
{
	/* GLOBAL MARKET */
	class fishmarket
	{
		name = "Poissonnerie";
		side = "CIV";
		items[] = {{"fishingpoles"}, {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine"}};
	};

	class farmingmarket
	{
		name = "Commerçant agricole";
		side = "CIV";
		items[] = {{"corn_seed", "bean_seed", "cotton_seed", "wheatseed", "patate_seed", "engrais"}, {"cotton", "bean", "corn", "wheat", "patate"}};
	};
	
	class market
	{
		name = "Marché";
		side = "";
		// items[]= {{"water", "banane", "mangue", "fishingpoles", "storage", "fuelF"}, {"banane", "mangue"}};
		items[]= {{"raisin","illegal_money","engrais","goldbar","water","lockpick","handcuffs","handcuffkeys","patch","nitro","storage","barriere",
"cone","bip","spikeStrip","tabac","tabac_seed","cigare","cigarette","objvaleur","artefact","artefact_R","artefact_exrare","artefact_rare",
"artefact_common","wood","woodp","furniture","iron","ironp","soufre","platine","platinep","cocaine_seed","cocaine","cocainep","cocainepc",
"heroin_seed","heroin","heroinp","seringue","heroinps","meth_seed","hsoufre","meth","methp","cannabis_seed","cannabis","marijuana",
"oilu","oilp","fishingpoles","bean_seed","bean","corn_seed","corn","cotton_seed","cotton","sand","glass","cerealbar","sparklingwater",
"prune","sandwich","donut","soda","ragout","kefir","copper","copperp","clay","pottery","baux","alu","moule","palourde","saintjacques",
"bigorneau","crabe","bulot","anchois","bar","daurade","maquereau","Merlu","sardine","salt","saltp","goldnuggets","patate","wheat",
"wheatseed","cottonp","grozdova","slivovica","coal","opium"}, {"raisin", "prune"}};
	};
	
	class hopital
	{
		name = "Hopital";
		side = "";
		items[] = {{"patch", "seringue", "cerealbar", "sparklingwater"}, {}};
	};

	/* FACTIONS MARKET */
	class rebel
	{
		name = "Marché illégal";
		side = "CIV";
		items[]= {{"water", "banane", "mangue", "lockpick", "handcuffs", "handcuffkeys", "baillon", "bandeau", "blastingcharge", "lab_small", "lab_medium", "lab_large"}, {"banane", "mangue"}};
	};

	class west 
	{
		name = "Milice";
		side = "WEST";
		items[] = {{"defusekit", "cone", "barriere", "donut", "soda", "handcuffkeys", "handcuffs", "kit_destru", "spikeStrip", "bip", "sifflet"}, {}};
	};

	class east
	{
		name = "Garde";
		side = "EAST";
		items[] = {{"ragout", "kefir", "sifflet", "handcuffs", "handcuffkeys", "barriere", "cone", "bip"}, {}};
	};

	class guer
	{
		name = "Hopital";
		side = "GUER";
		items[] = {{}, {}};
	};

	/* RESSOURCES */
	class dealer
	{
		name = "Dealer";
		side = "CIV";
		items[] = {{}, {"cocainep", "heroinps", "marijuana", "cocainepc", "methp"}};
	};

	class oil
	{
		name = "Commerçant de pétrole";
		side = "CIV";
		items[] = {{}, {"oilp", "fuelF"}};
	};

	class glass
	{
		name = "Commerçant de verre";
		side = "CIV";
		items[] = {{}, {"glass"}};
	};

	class iron
	{
		name = "Commerçant de fer";
		side = "CIV";
		items[] = {{}, {"ironp", "soufre"}};
	};

	class bijoutier
	{
		name = "Bijoutier";
		side = "CIV";
		items[] = {{}, {"goldbar", "platinep"}};
	};

	class black_market
	{
		name = "Marché noir";
		side = "CIV";
		items[] = {{"cannabis_seed", "heroin_seed", "cocaine_seed", "meth_seed", "nitro"}, {"artefact", "artefact_R", "artefact_exrare", "artefact_rare", "artefact_common", "objvaleur"}};
	};

	class platine
	{
		name = "Commerçant de platine";
		side = "CIV";
		items[] = {{}, {"platinep", "platinepa"}};
	};

	class tabac
	{
		name = "Buraliste";
		side = "CIV";
		items[] = {{}, {"cigarette", "tabac_seed"}};
	};

	class furniture
	{
		name = "Commerçant de meuble";
		side = "CIV";
		items[] = {{}, {"furniture"}};
	};

	class copper
	{
		name = "Commerçant de cuivre";
		side = "CIV";
		items[] = {{}, {"copperp"}};
	};

	class textile
	{
		name = "Usine de textile";
		side = "CIV";
		items[] = {{}, {"cottonp"}};
	};

	class woodp
	{
		name = "Commerçant de planche";
		side = "CIV";
		items[] = {{}, {"woodp"}};
	};

	class salt
	{
		name = "Commerçant de sel";
		side = "CIV";
		items[] = {{}, {"saltp"}};
	};

	class baux
	{
		name = "Commerçant d'aluminium";
		side = "CIV";
		items[] = {{}, {"alu"}};
	};
	
	class coal
	{
		name = "Commerçant de charbon";
		side = "CIV";
		items[] = {{}, {"coal"}};
	};
	
	class alcool
	{
		name = "Commerçant d'alcool";
		side = "CIV";
		items[] = {{}, {"grozdova","slivovica"}};
	};
	
	class poterie
	{
		name = "Commerçant de poterie";
		side = "CIV";
		items[] = {{}, {"pottery"}};
	};
};
