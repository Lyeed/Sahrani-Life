class ALYSIA_LICENSES
{
	class driver
	{
		name = "Permis de conduire";
		class factions
		{
			class CIV
			{
				price = 900;
				pad_store = 1;
				illegal = 0;
			};
			class EAST: CIV {};
			class WEST: CIV {};
			class GUER: CIV {};
		};
	};
	class moto
	{
		name = "Permis moto";
		class factions
		{
			class CIV
			{
				price = 12000;
				pad_store = 1;
				illegal = 0;
			};
			class EAST: CIV {};
			class WEST: CIV {};
			class GUER: CIV {};
		};
	};
	class pilot
	{
		name = "Permis de pilotage";
		class factions
		{
			class CIV
			{
				price = 250000;
				pad_store = 1;
				illegal = 0;
			};
			class EAST
			{
				price = 0;
				pad_store = 0;
				illegal = 0;
			};
			class WEST: EAST {};
			class GUER: EAST {};
		};
	};
	class boat
	{
		name = "Permis bateau";
		class factions
		{
			class CIV
			{
				price = 1000;
				pad_store = 1;
				illegal = 0;
			};
			class EAST: CIV {};
			class WEST: CIV {};
			class GUER: CIV {};
		};
	};
	class truck
	{
		name = "Permis poids lourd";
		class factions
		{
			class CIV
			{
				price = 50000;
				pad_store = 1;
				illegal = 0;
			};
			class EAST: CIV {};
			class WEST: CIV {};
			class GUER: CIV {};
		};
	};
	class dive
	{
		name = "Licence de plongée";
		class factions
		{
			class CIV
			{
				price = 400;
				pad_store = 1;
				illegal = 0;
			};
			class EAST: CIV {};
			class WEST: CIV {};
			class GUER: CIV {};
		};
	};

	class home
	{
		name = "Licence de propriété";
		class factions
		{
			class CIV
			{
				price = 150000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};

	class gun
	{
		name = "Licence d'armes à feu";
		class factions
		{
			class CIV
			{
				price = 75000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};

	class archeologie
	{
		name = "Licence d'archéologie";
		class factions
		{
			class CIV
			{
				price = 35000;
				pad_store = 0;
				illegal = 1;
			};
		};
	};
	class platine
	{
		name = "Traitement du platine";
		class factions
		{
			class CIV
			{
				price = 20000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class copper
	{
		name = "Traitement du cuivre";
		class factions
		{
			class CIV
			{
				price = 6500;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class wood
	{
		name = "Traitement du bois";
		class factions
		{
			class CIV
			{
				price = 2000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class furniture
	{
		name = "Traitement des planches";
		class factions
		{
			class CIV
			{
				price = 11000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class iron
	{
		name = "Traitement du fer";
		class factions
		{
			class CIV
			{
				price = 8000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class sand
	{
		name = "Traitement du sable";
		class factions
		{
			class CIV
			{
				price = 5000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class tabac
	{
		name = "Traitement du tabac";
		class factions
		{
			class CIV
			{
				price = 15000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class gold
	{
		name = "Fonte de l'or";
		class factions
		{
			class CIV
			{
				price = 25000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class salt
	{
		name = "Traitement du sel";
		class factions
		{
			class CIV
			{
				price = 6000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};
	class bauxite
	{
		name = "Traitement du bauxite";
		class factions
		{
			class CIV
			{
				price = 5000;
				pad_store = 1;
				illegal = 0;
			};
		};
	};

	class gov_company
	{
		name = "Député chargé du travail";
		class factions
		{
			class CIV {};
		};
	};
	class gov_money
	{
		name = "Député chargé des finances";
		class factions
		{
			class CIV {};
		};
	};
	class gov_justice
	{
		name = "Député chargé de la Justice";
		class factions
		{
			class CIV {};
		};
	};

	class company_weapon
	{
		name = "Licence de manufacture d'armes";
		class factions
		{
			class CIV
			{
				price = 65000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_farming
	{
		name = "Licence d'Agriculture";
		class factions
		{
			class CIV
			{
				price = 9000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_garagist
	{
		name = "Licence de garagiste";
		class factions
		{
			class CIV
			{
				price = 13000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_money_tranfer
	{
		name = "Licence de convoyeur de fonds";
		class factions
		{
			class CIV
			{
				price = 41000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_foundry
	{
		name = "Licence de fondeur";
		class factions
		{
			class CIV
			{
				price = 39000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_fuel
	{
		name = "Licence d'exploitation pétroliére";
		class factions
		{
			class CIV
			{
				price = 28500;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_construction
	{
		name = "Licence de BTP";
		class factions
		{
			class CIV
			{
				price = 16900;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_transport_goods
	{
		name = "Licence de transporteur";
		class factions
		{
			class CIV
			{
				price = 13500;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_transport_people
	{
		name = "Licence de chauffeur";
		class factions
		{
			class CIV
			{
				price = 7500;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_security
	{
		name = "Licence de sécurité";
		class factions
		{
			class CIV
			{
				price = 23500;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_service
	{
		name = "Licence de service";
		class factions
		{
			class CIV
			{
				price = 13500;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_car_dealer
	{
		name = "Licence de concessionnaire";
		class factions
		{
			class CIV
			{
				price = 15000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_shop
	{
		name = "Licence commerciale";
		class factions
		{
			class CIV
			{
				price = 9800;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
	class company_news
	{
		name = "Licence de journalisme";
		class factions
		{
			class CIV
			{
				price = 11000;
				pad_store = 0;
				illegal = 0;
			};
		};
	};
};
