class ALYSIA_COMPANIES
{
	/*

	Entreprise :
		




	-Explotation & Transport 
		-> Fuel
			Batiment : ?
			Vehicles : camion fuel
		-> Agricol
			Batiment : Land_d_Windmill01_F
			Vehicles : tracteur
		-> Ciment
			Batiment : Land_WIP_F
			Vehicles : ?
			Role     : construction de batiment d'entreprise
		-> Métaux lourds
			Batiment : Land_Factory_Main_F
			Vehicles : Aucun
			Role     : platine enrichi, souffre hydraté
		-> Armement
			Batiment : Land_i_Shed_Ind_F
			Vehicles : aycyb
			Role     : Faire des armes

	-Service
		-> Concesionnaire
			Batiment : ?
			Vehicles : Aucun
		-> Taxi
			Batiment : Land_Hangar_F
			Vehicles : taxi + bus
		-> Transport de fond
			Vehicles : fourgon blindé
			Role     : remplir ATM + banque
		-> Sécurité
			Batiment : Land_Cargo_HQ_V1_F
			Vehicles : ?
		-> Avocat
			Batiment : Land_i_House_Small_03_V1_F
			Vehicles : Aucun
		-> Journaliste
			Batiment : Land_i_House_Small_03_V1_F
			Vehicles : (hélico + caméra) ?
		-> Boutique
			Batiment : Land_i_Shop_01_V1_F
			Vehicles : Aucun
			Role     : possède un panneau
		-> Dépannage
			Batiment : Land_CarService_F
			Vehicles : dépaneuse
			Role     : fourriere
	*/

	class weapon
	{
		name = "Industrie d'armement";
		construction_building = "Land_u_Shed_Ind_F";
		construction_needed[] = {{"woodp", 3}, {"cement", 5}};
		building = "Land_i_Shed_Ind_F";
		license = "company_weapon";
	};
};