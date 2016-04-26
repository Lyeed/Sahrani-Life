class ALYSIA_PHONE
{
	class CONTACTS
	{
		characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-éèùà ";
		characters_max = 25;
	};

	class SMS
	{
		characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-*éè?!,.ù_à ";
		characters_max = 125;
		send_max = 5;
		class sounds
		{
			class message_rcv_1
			{
				name = "Alerte 1";
				distance = 20;
			};
			class message_rcv_2: message_rcv_1
			{
				name = "Alerte 2";
			};
			class message_rcv_3: message_rcv_1
			{
				name = "Alerte 3";
				donator = 1;
			};
			class message_rcv_4: message_rcv_3
			{
				name = "Alerte 4";
			};
			class message_rcv_5: message_rcv_3
			{
				name = "Alerte 5";
			};
			class message_rcv_6: message_rcv_3
			{
				name = "Alerte 6";
			};
			class message_rcv_7: message_rcv_3
			{
				name = "Alerte 7";
			};
			class message_rcv_8: message_rcv_3
			{
				name = "Alerte 8";
			};
			class message_rcv_9: message_rcv_3
			{
				name = "Alerte 9";
			};
			class message_rcv_10: message_rcv_3
			{
				name = "Alerte 10";
			};
		};
	};

	class CALL
	{
		class sounds
		{
			class call_rcv_1
			{
				name = "Sonnerie 1";
				distance = 15;
				sleep = 3.4;
			};
			class call_rcv_2: call_rcv_1
			{
				name = "Sonnerie 2";
				donator = 1;
				sleep = 3.5;
			};
			class call_rcv_3: call_rcv_2
			{
				name = "Sonnerie 3";
				sleep = 3;
			};
			class call_rcv_4: call_rcv_2
			{
				name = "Sonnerie 4";
				sleep = 3;
			};
		};
	};

	class FORFAITS
	{
		class lite
		{
			name = "Lite";
			bill = 0;
			sms_price = 25;
			sms_max = 3;
			contacts_max = 5;
			backlist_max = 0;
			hide_number = 0;
			sides[] = {"CIV", "EAST", "WEST", "GUER"};
		};

		class classic
		{
			name = "Classique";
			bill = 200;
			sms_price = 8;
			sms_max = 10;
			hide_number = 1;
			contacts_max = 20;
			backlist_max = 5;
			sides[] = {"CIV"};
		};

		class luxe
		{
			name = "Illimité";
			bill = 500;
			sms_price = 0;
			sms_max = 20;
			hide_number = 1;
			contacts_max = 45;
			backlist_max = 10;
			sides[] = {"CIV"};
		};

		class faction
		{
			name = "Faction";
			bill = 25;
			sms_price = 0;
			hide_number = 1;
			sms_max = 10;
			contacts_max = 15;
			backlist_max = 5;
			sides[] = {"GUER", "EAST", "WEST"};
		};
	};
};
