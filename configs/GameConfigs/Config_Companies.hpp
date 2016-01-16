/*
	Batiments disponibles :
		Land_tovarna2
		Land_hangar_2
		Land_A_Office01_ep1
		Land_a_stationhouse
		Land_i_Shop_01_V1_F
	
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
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class farming_bio
		{
			name = "Ferme bio";
			building = "Land_d_Windmill01_F";
			license = "company_farming_bio";
			image = "lyeed_IMG\data\companies\types\farming_bio.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class farming_industrial
		{
			name = "Industrie agricole";
			building = "Land_Shed_Ind02";
			license = "company_farming_industrial";
			image = "lyeed_IMG\data\companies\types\farming_industrial.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class garagist
		{
			name = "Garagiste";
			building = "Land_CarService_F";
			license = "company_garagist";
			image = "lyeed_IMG\data\companies\types\garagist.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class money_transfer
		{
			name = "Transport de fonds";
			building = "Land_i_Shed_Ind_F";
			license = "company_money_tranfer";
			image = "lyeed_IMG\data\companies\types\money_transfer.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class foundry
		{
			name = "Fonderie";
			building = "Land_Factory_Main_F";
			license = "company_foundry";
			image = "lyeed_IMG\data\companies\types\foundry.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class fuel
		{
			name = "Exploitation du pétrole";
			building = "";//?
			license = "company_fuel";
			image = "lyeed_IMG\data\companies\types\fuel.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class construction
		{
			name = "Construction";
			building = "Land_WIP_F";
			license = "company_construction";
			image = "lyeed_IMG\data\companies\types\construction.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class transport
		{
			name = "Transport de personnes";
			building = "Land_Hangar_F";
			license = "company_transport";
			image = "lyeed_IMG\data\companies\types\transport.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class security
		{
			name = "Sécurité";
			building = "Land_Cargo_HQ_V1_F";
			license = "company_security";
			image = "lyeed_IMG\data\companies\types\security.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class service
		{
			name = "Service";
			building = "Land_i_House_Small_03_V1_F";
			license = "company_service";
			image = "lyeed_IMG\data\companies\types\service.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class car_dealer
		{
			name = "Concesionnaire";
			building = "";
			license = "company_car_dealer";
			image = "lyeed_IMG\data\companies\types\car_dealer.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class shop
		{
			name = "Magasin";
			building = "Land_A_GeneralStore_01";
			license = "company_shop";
			image = "lyeed_IMG\data\companies\types\shop.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};

		class news
		{
			name = "Journaliste";
			building = "";//?
			license = "company_news";
			image = "lyeed_IMG\data\companies\types\news.paa";
			class construction
			{
				building = "Misc_palletsfoiled_heap";
				require[] = {{"woodp", 3}, {"cement", 5}};
				price = 10000;
			};
		};
	};
};
