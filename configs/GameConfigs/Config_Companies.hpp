/*
	BATIMENTS DISPONIBLES:
		"Land_a_stationhouse"
		"Land_i_Shop_01_V1_F"
		"Land_i_House_Small_03_V1_F"
	FINI:
		"Industrie d'armement"
		"Ferme agricole"
		"Garagiste"
		"Transport de fonds"
		"Fonderie"
		"Construction"
		"Transport de personnes"
		"Transport de matériaux"
		"Sécurité"
		"Service"
	PAS FINI:
		"Concesionnaire"
		"Magasin"
		"Journaliste"
		"Exploitation du pétrole"
	PREVU:
		"Assurance"
		"Agence immobilière"
		"Restauration"
		"Trader"
		"Usine de textile"
*/

class ALYSIA_COMPANIES
{
	characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-éè?!,.ù_à ";
	characters_max = 30;
	class types
	{
		class weapon
		{
			name = "Industrie d'armement";
			building = "Land_Ind_vysypka";
			license = "company_weapon";
			image = "lyeed_IMG\data\companies\types\weapon.paa";
			process[] =
			{
				"bullet",
				"buckshot",
				"magazine",
				"barillet",
				"canon",
				"crosse_wood",
				"crosse_steel",
				"garde_main_wood",
				"garde_main_steel",
				"poignee",
				"detente",
				"percuteur",
				"carcasse",
				"bloc_culasse",
				"marteau",
				"culasse",
				"weapon_b95",
				"magazine_b95",
				"weapon_cz75",
				"magazine_cz75",
				"weapon_p226",
				"magazine_p226",
				"weapon_gsh18",
				"magazine_gsh18",
				"weapon_sdar",
				"magazine_sdar",
				"weapon_vermin",
				"magazine_vermin",
				"bulletproofvest_news",
				"bulletproofvest_security",
				"bulletproofvest_transfer"
			};
			members_max = 8;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 150}, {"ciment", 300}, {"goldbar", 15}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}, {"steel", 300}, {"brique", 150}};
				price = 980000;
			};
			class marker
			{
				type = "Fett_company_weapon";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 150;
				price_building = 450;
			};
			class storage
			{
				inventory = 220;
			};
		};

		class farming
		{
			name = "Ferme agricole";
			building = "Land_i_Windmill01_F";
			license = "company_farming";
			image = "lyeed_IMG\data\companies\types\farming.paa";
			process[] = {"huile","huile_bottle"};
			members_max = 12;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 200}, {"ciment", 100}, {"goldbar", 20}, {"furniture", 4}, {"ironp", 50}, {"sand", 80}, {"glass", 4}, {"copperp", 50}, {"alu", 20}, {"pierre", 200}, {"steel", 40}, {"brique", 200}};
				price = 275000;
			};
			class marker
			{
				type = "Fett_company_farming_bio";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 90;
				price_building = 50;
			};
			class storage
			{
				inventory = 175;
			};
		};

		class garagist
		{
			name = "Garagiste";
			building = "Land_CarService_F";
			license = "company_garagist";
			image = "lyeed_IMG\data\companies\types\garagist.paa";
			process[] = {};
			members_max = 8;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 40}, {"ciment", 250}, {"goldbar", 15}, {"furniture", 5}, {"ironp", 80}, {"sand", 40}, {"glass", 50}, {"copperp", 20}, {"alu", 20}, {"pierre", 200}, {"steel", 20}};
				price = 295000;
			};
			class marker
			{
				type = "Fett_company_garagist";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};

		class money_transfer
		{
			name = "Transport de fonds";
			building = "Land_i_Shed_Ind_F";
			license = "company_money_tranfer";
			image = "lyeed_IMG\data\companies\types\money_transfer.paa";
			process[] = {};
			members_max = 11;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 20}, {"ciment", 100}, {"goldbar", 20}, {"furniture", 20}, {"ironp", 150}, {"sand", 50}, {"glass", 50}, {"copperp", 50}, {"alu", 20}, {"pierre", 100}, {"steel", 220}};
				price = 875000;
			};
			class marker
			{
				type = "Fett_company_money_transfer";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 138;
				price_building = 230;
			};
			class storage
			{
				inventory = 150;
			};
		};

		class foundry
		{
			name = "Fonderie";
			building = "xcam_Ind_Pec_01";
			license = "company_foundry";
			image = "lyeed_IMG\data\companies\types\foundry.paa";
			process[] = {"steel", "soufre"};
			members_max = 9;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 350}, {"goldbar", 50}, {"furniture", 10}, {"ironp", 50}, {"sand", 100}, {"glass", 80}, {"copperp", 20}, {"alu", 20}, {"pierre", 50}, {"steel", 150}, {"brique", 400}};
				price = 650000;
			};
			class marker
			{
				type = "Fett_company_foundry";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 125;
				price_building = 190;
			};
			class storage
			{
				inventory = 250;
			};
		};

		class construction
		{
			name = "Construction";
			building = "Land_WIP_F";
			license = "company_construction";
			image = "lyeed_IMG\data\companies\types\construction.paa";
			process[] = {"brique", "Cimenttr"};
			members_max = 15;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 150}, {"ciment", 800}, {"goldbar", 35}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}, {"steel", 150}, {"brique", 200}};
				price = 382000;
			};
			class marker
			{
				type = "Fett_company_construction";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 30;
				price_building = 225;
			};
			class storage
			{
				inventory = 250;
			};
		};

		class transport_people
		{
			name = "Transport de personnes";
			building = "Land_Hangar_F";
			license = "company_transport_people";
			image = "lyeed_IMG\data\companies\types\transport_people.paa";
			process[] = {};
			members_max = 9;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 140}, {"ciment", 150}, {"goldbar", 20}, {"furniture", 30}, {"ironp", 250}, {"sand", 50}, {"glass", 20}, {"copperp", 20}, {"alu", 100}, {"pierre", 50}, {"steel", 300}};
				price = 375000;
			};
			class marker
			{
				type = "Fett_company_transport";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 250;
			};
		};

		class transport_goods
		{
			name = "Transport de matériaux";
			building = "Land_A_Office01_ep1";
			license = "company_transport_goods";
			image = "lyeed_IMG\data\companies\types\transport_goods.paa";
			process[] = {};
			members_max = 8;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 20}, {"ciment", 300}, {"goldbar", 20}, {"furniture", 10}, {"ironp", 150}, {"sand", 75}, {"glass", 20}, {"copperp", 20}, {"alu", 90}, {"pierre", 250}, {"steel", 300}};
				price = 470000;
			};
			class marker
			{
				type = "Fett_company_transport";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 250;
			};
		};

		class security
		{
			name = "Sécurité";
			building = "Land_Cargo_HQ_V1_F";
			license = "company_security";
			image = "lyeed_IMG\data\companies\types\security.paa";
			process[] = {};
			members_max = 8;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 10}, {"ciment", 100}, {"goldbar", 40}, {"furniture", 10}, {"ironp", 50}, {"sand", 50}, {"glass", 20}, {"copperp", 10}, {"alu", 20}, {"pierre", 20}, {"steel", 300}};
				price = 495000;
			};
			class marker
			{
				type = "Fett_company_security";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};

		class service
		{
			name = "Service";
			building = "Land_Entreprise01_F";
			license = "company_service";
			image = "lyeed_IMG\data\companies\types\service.paa";
			process[] = {};
			members_max = 8;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 20}, {"ciment", 380}, {"goldbar", 10}, {"furniture", 50}, {"ironp", 50}, {"sand", 50}, {"glass", 90}, {"copperp", 20}, {"alu", 20}, {"pierre", 200}, {"steel", 100}};
				price = 150000;
			};
			class marker
			{
				type = "Fett_company_service";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 80;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};
	};
};

/*

		class car_dealer
		{
			ready = 0;
			name = "Concesionnaire";
			building = "";
			license = "company_car_dealer";
			image = "lyeed_IMG\data\companies\types\car_dealer.paa";
			process[] = {};
			members_max = 8;
			ticket = 1;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 425000;
			};
			class marker
			{
				type = "Fett_company_car_dealer";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};

		class shop
		{
			ready = 0;
			name = "Magasin";
			building = "Land_A_GeneralStore_01";
			license = "company_shop";
			image = "lyeed_IMG\data\companies\types\shop.paa";
			process[] = {};
			members_max = 8;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 20}, {"ciment", 380}, {"goldbar", 10}, {"furniture", 80}, {"ironp", 80}, {"sand", 50}, {"glass", 50}, {"copperp", 20}, {"alu", 20}, {"pierre", 200}, {"steel", 100}, {"brique", 100}};
				price = 215000;
			};
			class marker
			{
				type = "Fett_company_shop";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};

		class news
		{
			ready = 0;
			name = "Journaliste";
			building = "";//?
			license = "company_news";
			image = "lyeed_IMG\data\companies\types\news.paa";
			process[] = {};
			members_max = 8;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 128000;
			};
			class marker
			{
				type = "Fett_company_news";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 50;
			};
		};


		class fuel
		{
			ready = 0;
			name = "Exploitation du pétrole";
			building = "xcam_Ind_Oil_Tower_EP1";
			license = "company_fuel";
			image = "lyeed_IMG\data\companies\types\fuel.paa";
			process[] = {"oil"};
			members_max = 8;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 649000;
			};
			class marker
			{
				type = "Fett_company_fuel";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 250;
			};
		};

		class clothing
		{
			name = "Industrie textile";
			building = "Land_tovarna2";
			license = "company_clothing";
			image = "lyeed_IMG\data\companies\types\fuel.paa";
			process[] = {"tissue"};
			members_max = 8;
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 40}, {"ciment", 250}, {"goldbar", 2}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 400}, {"copperp", 30}, {"alu", 25}, {"pierre", 150}};
				price = 490000;
			};
			class marker
			{
				type = "Fett_company_clothing";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
			class storage
			{
				inventory = 250;
			};
		};
*/