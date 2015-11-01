class ALYSIA_BANK
{
	class doors
	{
		class LeftSlideDoor
		{
			name = "Porte d'entrée Gauche";
			item = "Alysia_Lockpick";
			time = 15;
			open = "SlidingL";
		};
		
		class RightSlideDoor
		{
			name = "Porte d'entrée Droite";
			item = "Alysia_Lockpick";
			time = 15;
			open = "SlidingR";
		};
		
		class Door_1
		{
			name = "Porte Comptoirs";
			item = "Alysia_Lockpick";
			time = 15;
			open = "Simple";
		};
		
		class Door_2
		{
			name = "Porte Partie Interne";
			item = "Alysia_Hacker";
			time = 60;
			open = "Simple";
		};
		
		class Door_3
		{
			name = "Porte Bureau Directeur";
			item = "Alysia_Lockpick";
			time = 30;
			open = "Simple";
		};
		
		class Door_4
		{
			name = "Porte Interne Coffre";
			item = "Alysia_Foreuse";
			time = 120;
			open = "Simple";
		};

		class Door_5
		{
			name = "Porte Poste Surveillance";
			item = "Alysia_Hacker";
			time = 60;
			open = "Simple";
		};
		
		class Door_6
		{
			name = "Porte Toit Gauche";
			item = "Alysia_Lockpick";
			time = 15;
			open = "Simple";
		};

		class Door_7
		{
			name = "Porte Toit Droite";
			item = "Alysia_Lockpick";
			time = 15;
			open = "Simple";
		};			
		
		class Vault_Door
		{
			name = "Porte Coffre Fort";
			item = "Alysia_Bombe";
			time = 10;
			open = "Vault";			
		};

		class Security
		{
			name = "Système de sécurité";
			item = "Alysia_Hacker";
			time = 60;
			open = "Security";
		};
	};
};