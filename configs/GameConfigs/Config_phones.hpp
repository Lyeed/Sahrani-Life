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
				distance = 15;
			};
			class message_rcv_2: message_rcv_1 {
				name = "Alerte 2";
			};
			class message_rcv_3: message_rcv_1 {
				name = "Alerte 3";
			};
			class message_rcv_4: message_rcv_1 {
				name = "Alerte 4";
			};
			class message_rcv_5: message_rcv_1 {
				name = "Alerte 5";
			};
			class message_rcv_6: message_rcv_1 {
				name = "Alerte 6";
			};
			class message_rcv_7: message_rcv_1 {
				name = "Alerte 7";
			};
			class message_rcv_8: message_rcv_1 {
				name = "Alerte 8";
			};
			class message_rcv_9: message_rcv_1 {
				name = "Alerte 9";
			};
			class message_rcv_10: message_rcv_1 {
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
				name = "Classique (1)";
				distance = 15;
				sleep = 3.4;
				duration = 1.4;
			};
			class call_rcv_2: call_rcv_1
			{
				name = "Rétro";
				sleep = 3.5;
				duration = 1.3;
			};
			class call_rcv_3: call_rcv_1
			{
				name = "Bureau (1)";
				sleep = 3;
				duration = 1.2;
			};
			class call_rcv_4: call_rcv_1
			{
				name = "Bureau (2)";
				sleep = 3;
				duration = 0.9;
			};
			class call_rcv_5: call_rcv_1
			{
				name = "Classique (2)";
				sleep = 4.1;
				duration = 2.2;
			};
			class call_rcv_6: call_rcv_1
			{
				name = "Décroche putain";
				sleep = 1.6;
				duration = 2.7;
			};
			class call_rcv_7: call_rcv_1
			{
				name = "Brajva le cul-térré";
				sleep = 2;
				duration = 2.85;
			};
			class call_rcv_8: call_rcv_1
			{
				name = "Hmm Césarion";
				sleep = 2;
				duration = 3.90;
			};
			class call_rcv_9: call_rcv_1
			{
				name = "La Puissante Garde";
				sleep = 1.8;
				duration = 4.30;
			};
			class call_rcv_10: call_rcv_1
			{
				name = "Vive le Colonel (1)";
				sleep = 1.5;
				duration = 3.6;
			};
			class call_rcv_11: call_rcv_1
			{
				name = "Vive le Colonel (2)";
				sleep = 1.5;
				duration = 3.2;
			};
			class call_rcv_12: call_rcv_1
			{
				name = "La corruption du Nord";
				sleep = 1.5;
				duration = 3.2;
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
			contacts_max = 50;
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
