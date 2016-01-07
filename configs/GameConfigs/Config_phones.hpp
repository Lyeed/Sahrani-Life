class ALYSIA_PHONE
{
	class CONTACTS
	{
		characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè?!,.ù_ ";
		characters_max = 25;
	};

	class SMS
	{
		characters_allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè?!,.ù_ ";
		characters_max = 100;
		send_max = 5;
	};

	class FORFAITS
	{
		class lite
		{
			name = "Lite";
			bill = 0;
			sms_price = 35;
			sms_max = 0;
			contacts_max = 5;
			backlist_max = 0;
		};

		class classic
		{
			name = "Classique";
			bill = 200;
			sms_price = 8;
			sms_max = 10;
			contacts_max = 20;
			backlist_max = 5;
		};

		class luxe
		{
			name = "Illimité";
			bill = 500;
			sms_price = 0;
			sms_max = 20;
			contacts_max = 45;
			backlist_max = 10;
		};
	};
};
