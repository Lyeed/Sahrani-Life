class ALYSIA_ATM
{
	class Land_Atm_01_F
	{
		money_stock = 100000;
		money_faction = 0;
		withdraw_max = 5000;
		withdraw_min = 50;
		withdraw_tax = 3;
		deposit_max = 5000;
		deposit_min = 50;
		launder_transfer = 0;
		company = 0;
	};
	
	class Land_Atm_02_F: Land_Atm_01_F {};
	class xcam_Atm_01_F: Land_Atm_01_F {};
	class xcam_Atm_02_F: Land_Atm_01_F {};

	class ATM_Sarhani
	{
		money_stock = 900000000;
		money_faction = 1;
		withdraw_max = 1000000;
		withdraw_min = 10;
		withdraw_tax = 0;
		deposit_max = 1000000;
		deposit_min = 10;
		launder_transfer = 1;
		company = 1;
	};
};
