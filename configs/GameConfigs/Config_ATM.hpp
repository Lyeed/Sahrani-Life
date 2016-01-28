class ALYSIA_ATM
{
	class Land_Atm_01_F
	{
		money_stock = 50000;
		money_faction = 0;
		withdraw_max = 5000;
		withdraw_min = 50;
		withdraw_tax = 1;
		deposit_max = 5000;
		deposit_min = 50;
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
	};
};
