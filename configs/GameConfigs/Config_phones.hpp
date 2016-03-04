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
			sides[] = {"CIV", "EAST", "WEST", "GUER"};
		};

		class classic
		{
			name = "Classique";
			bill = 200;
			sms_price = 8;
			sms_max = 10;
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
			contacts_max = 45;
			backlist_max = 10;
			sides[] = {"CIV"};
		};

		class faction
		{
			name = "Faction";
			bill = 25;
			sms_price = 0;
			sms_max = 10;
			contacts_max = 15;
			backlist_max = 5;
			sides[] = {"GUER", "EAST", "WEST"};
		};
	};
};
