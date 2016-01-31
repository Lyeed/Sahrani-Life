/*
	Batiments disponibles :
		Land_tovarna2
		Land_hangar_2
		Land_A_Office01_ep1
		Land_a_stationhouse
		Land_i_Shop_01_V1_F
		Land_i_House_Small_03_V1_F
	
	Types d'entreprises :
		-> Fuel
		-> Agricol bio
		-> Agricol industriel
		-> Construction - batiment (ciment)
		-> Fonderie (Métaux lourds)
		-> Armement
		-> Transport en commun (taxi/bus)
		-> Sécurité
		-> Service
		-> dépannage
		-> Transport de fond
		-> Concesionnaire
		-> Boutique
		-> Journaliste

	+ tard :
		-> Assurance
		-> Agence immobilière
		-> Restauration
*/

class ALYSIA_COMPANIES
{
	giver_license_needed = "gov_company";
	characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè?!,.ù_à ";
	characters_max = 30;
	class types
	{
		class weapon
		{
			name = "Industrie d'armement";
			building = "Land_Ind_vysypka";
			license = "company_weapon";
			image = "lyeed_IMG\data\companies\types\weapon.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class farming_bio
		{
			name = "Ferme bio";
			building = "Land_i_Windmill01_F";
			license = "company_farming_bio";
			image = "lyeed_IMG\data\companies\types\farming_bio.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class farming_industrial
		{
			name = "Industrie agricole";
			building = "Land_Shed_Ind02";
			license = "company_farming_industrial";
			image = "lyeed_IMG\data\companies\types\farming_industrial.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class garagist
		{
			name = "Garagiste";
			building = "Land_CarService_F";
			license = "company_garagist";
			image = "lyeed_IMG\data\companies\types\garagist.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class money_transfer
		{
			name = "Transport de fonds";
			building = "Land_i_Shed_Ind_F";
			license = "company_money_tranfer";
			image = "lyeed_IMG\data\companies\types\money_transfer.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class foundry
		{
			name = "Fonderie";
			building = "Land_Factory_Main_F";
			license = "company_foundry";
			image = "lyeed_IMG\data\companies\types\foundry.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class fuel
		{
			name = "Exploitation du pétrole";
			building = "";//?
			license = "company_fuel";
			image = "lyeed_IMG\data\companies\types\fuel.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class construction
		{
			name = "Construction";
			building = "Land_WIP_F";
			license = "company_construction";
			image = "lyeed_IMG\data\companies\types\construction.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class transport
		{
			name = "Transport de personnes";
			building = "Land_Hangar_F";
			license = "company_transport";
			image = "lyeed_IMG\data\companies\types\transport.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class security
		{
			name = "Sécurité";
			building = "Land_Cargo_HQ_V1_F";
			license = "company_security";
			image = "lyeed_IMG\data\companies\types\security.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class service
		{
			name = "Service";
			building = "Land_Entreprise01_F";
			license = "company_service";
			image = "lyeed_IMG\data\companies\types\service.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class car_dealer
		{
			name = "Concesionnaire";
			building = "";
			license = "company_car_dealer";
			image = "lyeed_IMG\data\companies\types\car_dealer.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class shop
		{
			name = "Magasin";
			building = "Land_A_GeneralStore_01";
			license = "company_shop";
			image = "lyeed_IMG\data\companies\types\shop.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};

		class news
		{
			name = "Journaliste";
			building = "";//?
			license = "company_news";
			image = "lyeed_IMG\data\companies\types\news.paa";
			process[] = {};
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 80}, {"ciment", 150}, {"goldbar", 5}, {"furniture", 10}, {"ironp", 75}, {"sand", 50}, {"glass", 90}, {"copperp", 30}, {"alu", 25}, {"pierre", 50}};
				price = 10000;
			};
			class marker
			{
				type = "Fett_canteen";
				color = "ColorWhite";
				shape = "ICON";
				size = 0.4;
			};
			class tax
			{
				price_per_employee = 100;
				price_building = 100;
			};
		};
	};
};
