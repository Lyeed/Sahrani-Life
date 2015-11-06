class ALYSIA_COMPANIES
{
	/* 

	Entreprise :
		




	-Explotation & Transport 
		-> Fuel (camion fuel)
		-> Agricol (tracteur)
			Batiment : Land_d_Windmill01_F
		-> Ciment (camion? + construction de batiment d'entreprise)
			Batiment : Land_WIP_F
		-> Métaux lourds (platine enrichi, souffre hydraté)
			Batiment : Land_Factory_Main_F
		-> Armement
			Batiment : Land_i_Shed_Ind_F

	-Service
		-> Concesionnaire
			Batiment : ? (-> Dubois)
		-> Taxi (taxi + bus)
			Batiment : Land_Hangar_F
		-> Transport de fond (fourgon blindé)
		-> Sécurité (voiture sécu)
			Batiment : Land_Cargo_HQ_V1_F
		-> Avocat
			Batiment : Land_i_House_Small_03_V1_F
		-> Journaliste (hélico + caméra)
			Batiment : Land_i_House_Small_03_V1_F
		-> Boutique (possède un panneau )
			Batiment : Land_i_Shop_01_V1_F
		-> Dépannage (fourriere + dépaneuse)
			Batiment : Land_CarService_F
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