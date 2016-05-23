class ALYSIA_BANK
{
	class Bank_Sahrani
	{
		class items
		{
			class Bank_Bomb
			{
				removeOnUse = 1;
				alarm = 0;
			};
			class Bank_Drill
			{
				removeOnUse = 0;
				alarm = 0;
			};
			class Alysia_Lockpick
			{
				removeOnUse = 1;
				alarm = 1;
			};
			class Bank_Hacker
			{
				removeOnUse = 0;
				alarm = 1;
			};
		};

		class doors
		{
			class AutoDoor_trigger
			{
				name = "Porte Coulisante";
				item = "Alysia_Lockpick";
				progress_time = 10;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class LeftSlideDoor {
							value = 0;
						};
						class RightLeftSlideDoor {
							value = 0;
						};
					};
					class close
					{
						class LeftSlideDoor {
							value = 1;
						};
						class RightLeftSlideDoor {
							value = 1;
						};
					};
				};
			};
			class Interact1
			{
				name = "Porte Comptoirs";
				item = "Alysia_Lockpick";
				progress_time = 15;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class Door_1 {
							value = 1;
						};
					};
					class close
					{
						class Door_1 {
							value = 0;
						};
					};
				};
			};
			class Interact2
			{
				name = "Porte Partie Interne";
				item = "Bank_Hacker";
				progress_time = 45;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class Door_2 {
							value = 1;
						};
					};
					class close
					{
						class Door_2 {
							value = 0;
						};
					};
				};
			};
			class Interact3
			{
				name = "Porte Bureau Directeur";
				item = "Alysia_Lockpick";
				progress_time = 10;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class Door_3 {
							value = 1;
						};
					};
					class close
					{
						class Door_3 {
							value = 0;
						};
					};
				};
			};
			class Interact4
			{
				name = "Porte Poste Surveillance";
				item = "Bank_Hacker";
				progress_time = 45;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class Door_4 {
							value = 1;
						};
					};
					class close
					{
						class Door_4 {
							value = 0;
						};
					};
				};
			};
			class Interact5
			{
				name = "Porte Interne Coffre";
				item = "Bank_Drill";
				progress_time = 2;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open {};
					class close
					{
						class Door_5 {
							value = 0;
						};
					};
				};
			};
			class Interact6
			{
				name = "Porte Toit";
				item = "Alysia_Lockpick";
				progress_time = 30;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open
					{
						class Door_6 {
							value = 1;
						};
					};
					class close
					{
						class Door_6 {
							value = 0;
						};
					};
				};
			};
			class Vault_Door
			{
				name = "Porte Coffre Fort";
				item = "Bank_Bomb";
				progress_time = 2;
				progress_anim = "AinvPknlMstpsnonWnonDnon_medic_1";
				progress_sound = "";
				class states
				{
					class open {};
					class close
					{
						class Vault_Door {
							value = 0;
						};
					};
				};
			};
		};
	};

	class Bank_Sahrani_N: Bank_Sahrani
	{
		owners[] = {"WEST"};
		class doors: doors {};
		class items: items {};
	};

	class Bank_Sahrani_S: Bank_Sahrani
	{
		owners[] = {"EAST"};
		class doors: doors {};
		class items: items {};
	};
};
