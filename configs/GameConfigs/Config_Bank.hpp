class ALYSIA_BANK
{
	class doors
	{
		class LeftSlideDoor
		{
			name = "Porte d'entrée Gauche";
			item = "Alysia_Lockpick";
			time = 10;
			open = "SlidingL";
		};
		
		class RightSlideDoor
		{
			name = "Porte d'entrée Droite";
			item = "Alysia_Lockpick";
			time = 10;
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
			item = "Bank_Hacker";
			time = 45;
			open = "Simple";
		};
		
		class Door_3
		{
			name = "Porte Bureau Directeur";
			item = "Alysia_Lockpick";
			time = 10;
			open = "Simple";
		};
		
		class Door_4
		{
			name = "Porte Interne Coffre";
			item = "Bank_Drill";
			time = 60;
			open = "Drill";
		};

		class Door_5
		{
			name = "Porte Poste Surveillance";
			item = "Bank_Hacker";
			time = 45;
			open = "Simple";
		};
		
		class Door_6
		{
			name = "Porte Toit Gauche";
			item = "Alysia_Lockpick";
			time = 30;
			open = "Simple";
		};

		class Door_7
		{
			name = "Porte Toit Droite";
			item = "Alysia_Lockpick";
			time = 30;
			open = "Simple";
		};			
		
		class Vault_Door
		{
			name = "Porte Coffre Fort";
			item = "Bank_Bomb";
			time = 10;
			open = "Vault";			
		};

		class Security
		{
			name = "Système de sécurité";
			item = "Bank_Hacker";
			time = 45;
			open = "Security";
		};
	};

	class Bank_Bomb
	{
		display = "Charge de C4";
		item = "Bank_Bomb";
		time = 60;
		pos = "[0,0,0]";
		explosion = true;
	};

	class Bank_Drill
	{
		display = "Foreuse";
		item = "Bank_Drill";
		time = 300;
		pos = "[0,0,0]";
		explosion = true;
	};

	class Bank_Sahrani_N
	{
		owner = "WEST";
		required = 5;
	};

	class Bank_Sahrani_S
	{
		owner = "EAST";
		required = 5;
	};
};