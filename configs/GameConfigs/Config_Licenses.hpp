/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_LICENSES
{
	class driver
	{
		name = "Permis de conduire";
		price = 1000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class pilot
	{
		name = "Permis de pilotage";
		price = 500000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class boat
	{
		name = "Permis de bateau";
		price = 10000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class truck
	{
		name = "Permis poids lourd";
		price = 60000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class home
	{
		name = "Licence de propriété";
		price = 500000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class secu
	{
		name = "Licence de sécurité";
		price = 175000;
		illegal = 0;
		required = "((group player) getVariable[""gang_name"", """"]) in gServer_secu_gangs)";
		pad_store = 0;
	};

	class doc
	{
		name = "Doctorat de médecine";
		price = 100000;
		illegal = 0;
		required = "((call g_MEDICLevel) > 0)";
		pad_store = 0;
	};

	class depan
	{
		name = "Licence de dépanneur";
		price = 80000;
		illegal = 0;
		required = "((group player) getVariable[""gang_name"", """"]) in gServer_depan_gangs)";
		pad_store = 0;
	};

	class dive
	{
		name = "Licence de plongée";
		price = 6000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class gun
	{
		name = "Licence d'armes à feu";
		price = 75000;
		illegal = 0;
		required = "";
		pad_store = 0;
	};

	class rebel
	{
		name = "Entrainement rebel";
		price = 150000;
		illegal = 1;
		required = "((call g_REBLevel) > 0)";
		pad_store = 0;
	};

	class rebel2
	{
		name = "Entrainement rebel supérieur";
		price = 300000;
		illegal = 1;
		required = "((call g_REBLevel) == 2)";
		pad_store = 0;
	};

	class marijuana
	{
		name = "Traitement de la marijuana";
		price = 45000;
		illegal = 1;
		required = "";
		pad_store = 0;
	};

	class archeologie
	{
		name = "Licence d'archéologie";
		price = 50000;
		illegal = 1;
		required = "";
		pad_store = 0;
	};

	class platine
	{
		name = "Traitement du platine";
		price = 95000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class wood
	{
		name = "Traitement du bois";
		price = 8000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class oil
	{
		name = "Traitement du pétrole";
		price = 50000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class iron
	{
		name = "Traitement du fer";
		price = 25000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class sand
	{
		name = "Traitement de sable";
		price = 10000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};

	class tabac
	{
		name = "Traitement du tabac";
		price = 35000;
		illegal = 0;
		required = "";
		pad_store = 1;
	};
};
