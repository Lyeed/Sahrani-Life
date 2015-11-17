/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_BANK
{
	class doors
	{
		class AutoDoor_trigger
		{
			name = "Porte Coulisante";
			item = "Alysia_Lockpick";
			time = 10;
			open = "Sliding";
		};
		
		class Interact1
		{
			name = "Porte Comptoirs";
			item = "Alysia_Lockpick";
			time = 15;
			open = "Simple";
			door = "Door_1";
		};
		
		class Interact2
		{
			name = "Porte Partie Interne";
			item = "Bank_Hacker";
			time = 45;
			open = "Simple";
			door = "Door_2";
		};
		
		class Interact3
		{
			name = "Porte Bureau Directeur";
			item = "Alysia_Lockpick";
			time = 10;
			open = "Simple";
			door = "Door_3";
		};

		class Interact4
		{
			name = "Porte Poste Surveillance";
			item = "Bank_Hacker";
			time = 45;
			open = "Simple";
			door = "Door_4";
		};

		class Interact5
		{
			name = "Porte Interne Coffre";
			item = "Bank_Drill";
			time = 60;
			open = "Drill";
			door = "Door_5";
		};
		
		class Interact6
		{
			name = "Porte Toit";
			item = "Alysia_Lockpick";
			time = 30;
			open = "Simple";
			door = "Door_6";
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
			time = 60;
			open = "Security";
		};
	};

	class Bank_Bomb
	{
		item = "Bank_Bomb";
		defuse = "Bank_DefuseKit";
		anim = "";
		sound = "BombBip";
		finalsound = "Bomb2Bip";
		pos[] = {0, 2.5, 5.2};
		rot = 180;
		time = 60;
		defuseTime = 15;
	};

	class Bank_Drill
	{
		item = "Bank_Drill";
		defuse = "Bank_DefuseKit";
		anim = "Drill_Rotation";
		sound = "Drill";
		finalSound = "DrillOff";
		pos[] = {0, 2.5, 5.2};
		rot = 180;
		time = 300;
		defuseTime = 30;
	};

	class Bank_Sahrani_N
	{
		owner = "WEST";
		required = 0;
	};

	class Bank_Sahrani_S
	{
		owner = "EAST";
		required = 0;
	};
};