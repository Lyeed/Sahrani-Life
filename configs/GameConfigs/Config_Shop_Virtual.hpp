class ALYSIA_SHOPS_VIRTUAL
{
	/* GLOBAL MARKET */
	class fishmarket
	{
		name = "Poissonnerie";
		side = "CIV";
		items[] =
		{
			{
				"fishingpoles"
			},{
				"moule",
				"palourde",
				"saintjacques",
				"bigorneau",
				"crabe",
				"bulot",
				"anchois",
				"bar",
				"daurade",
				"maquereau",
				"merlu",
				"sardine"
			}
		};
	};

	class farmingmarket
	{
		name = "Commerçant agricole";
		side = "CIV";
		items[] =
		{
			{
				"corn_seed",
				"bean_seed",
				"cotton_seed",
				"wheatseed",
				"patate_seed",
				"engrais"
			},{
				"pumpkin",
				"sunflower",
				"houblon"
			}
		};
	};

	class station_service
	{
		name = "Station service";
		side = "";
		items[] =
		{
			{
				"chips",
				"chocolat",
				"villagoise",
				"eau50"
			},{

			}
		};
	};

	class market
	{
		name = "Marché";
		side = "";
		items[]=
		{
			{
				"water",
				"petitbeurre",
				"pizza",
				"storage_small",
				"storage_medium",
				"storage_large",
				"sandwich",
				"croissant",
				"kefir",
				"ravioli",
				"raisin",
				"prune"
			},{
				"raisin",
				"prune",
				"cotton",
				"bean",
				"corn",
				"wheat",
				"patate",
				"huile_bottle"
			}
		};
	};
	
	class hopital
	{
		name = "Hopital";
		side = "";
		items[] =
		{
			{
				"patch",
				"seringue",
				"water",
				"sandwich"
			},{
				"seringue"
			}
		};
	};

	/* FACTIONS MARKET */
	class west 
	{
		name = "Milice";
		side = "WEST";
		items[] =
		{
			{
				"cafe",
				"donut",
				"soda",
				"cone",
				"handcuffkeys",
				"handcuffs",
				"barriere",
				"bargate",
				"spikeStrip",
				"sifflet",
				"storage_stock",
				"storage_large",
				"alcool_test",
				"horn_milice_1",
				"horn_milice_2"
			},{

			}
		};
	};
	class east
	{
		name = "Garde";
		side = "EAST";
		items[] =
		{
			{
				"ragout",
				"medova",
				"sifflet",
				"handcuffs",
				"handcuffkeys",
				"barriere",
				"cone",
				"bargate",
				"spikeStrip",
				"storage_stock",
				"storage_large",
				"horn_garde"
			},{

			}
		};
	};
	class guer
	{
		name = "Hopital";
		side = "GUER";
		items[] =
		{
			{
				"cerealbar",
				"sparklingwater",
				"cone",
				"barriere",
				"horn_samu",
				"alcool_test",
				"adn",
				"stethoscope",
				"brancard"
			},{

			}
		};
	};

	/* RESSOURCES */
	class dealer
	{
		name = "Dealer";
		side = "CIV";
		items[] =
		{
			{

			},{
				"cocainep_bag",
				"heroinps",
				"marijuana_bag",
				"cocainepc_bag",
				"meth_bag"
			}
		};
	};

	class oil
	{
		name = "Commerçant de pétrole";
		side = "CIV";
		items[] = {{},{"oilp","fuelF"}};
	};

	class glass
	{
		name = "Commerçant de verre";
		side = "CIV";
		items[] = {{},{"glass"}};
	};

	class iron
	{
		name = "Commerçant de fer";
		side = "CIV";
		items[] = {{},{"ironp","soufre"}};
	};

	class bijoutier
	{
		name = "Bijoutier";
		side = "CIV";
		items[] = {{},{"goldbar"}};
	};

	class black_market
	{
		name = "Marché noir";
		side = "CIV";
		items[] = 
		{
			{
				"lockpick",
				"handcuffs",
				"handcuffkeys",
				"cannabis_seed",
				"heroin_seed",
				"cocaine_seed",
				"meth_seed",
				"lab_marijuana",
				"lab_meth",
				"lab_cocaine",
				"lab_heroin",
				"lab_weapon",
				"lab_clothing",
				"lab_cigare",
				"lab_heal",
				"lab_construction",
				"lab_steel",
				"lab_tissue",
				"patron_AKM",
				"patron_M21",
				"patron_AK74",
				"patron_mosin",
				"patron_CZ",
				"patron_sawed",
				"patron_NVG",
				"patron_deagle"
			},{
				"artefact_R",
				"artefact",
				"objvaleur",
				"turtle"
			}
		};
	};

	class platine
	{
		name = "Commerçant de platine";
		side = "CIV";
		items[] = {{},{"platinep"}};
	};

	class tabac
	{
		name = "Commerçant de tabac";
		side = "CIV";
		items[] = {{},{"cigarette","cigare"}};
	};

	class furniture
	{
		name = "Commerçant de meuble";
		side = "CIV";
		items[] = {{},{"furniture"}};
	};

	class copper
	{
		name = "Commerçant de cuivre";
		side = "CIV";
		items[] = {{},{"copperp"}};
	};

	class textile
	{
		name = "Commerçant de textile";
		side = "CIV";
		items[] = {{},{"cottonp"}};
	};

	class woodp
	{
		name = "Commerçant de planche";
		side = "CIV";
		items[] = {{},{"woodp"}};
	};

	class salt
	{
		name = "Commerçant de sel";
		side = "CIV";
		items[] = {{},{"saltp"}};
	};

	class baux
	{
		name = "Commerçant d'aluminium";
		side = "CIV";
		items[] = {{},{"alu"}};
	};
	
	class coal
	{
		name = "Commerçant de charbon";
		side = "CIV";
		items[] = {{},{"coal"}};
	};
	
	class alcool
	{
		name = "Commerçant d'alcool";
		side = "CIV";
		items[] = {{},{"grozdova","slivovica"}};
	};
	
	class tabac_seed
	{
		name = "Marchand de graines";
		side = "CIV";
		items[] = {{"tabac_seed"},{}};
	};

	class companies
	{
		name = "Réserve d'entreprises";
		side = "CIV";
		items[] =
		{
			{
				"money_transfer",
				"serrure",
				"electric_system",
				"sunflower_seed",
				"pumpkin_seed"
			},{
				"ciment",
				"brique",
				"steel",
				"sp98",
				"sp95",
				"gpl",
				"kerosene",
				"gazole"
			}
		};
	};

	class gov_north
	{
		name = "Parlement";
		side = "CIV";
		items[] =
		{
			{
				"perqui_north"
			},{

			}
		};
	};

	class gov_south
	{
		name = "Administration Centrale";
		side = "CIV";
		items[] =
		{
			{
				"perqui_south"
			},{

			}
		};
	};

	class market_prison
	{
		name = "Cantine";
		side = "";
		items[] =
		{
			{
				"prison_food"
			},{

			}
		};
	};
};
