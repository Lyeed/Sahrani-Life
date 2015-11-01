class ALYSIA_ITEMS_ARMA
{
	/*==================
	**      HOW TO
	**==================*/
	class item_className
	{
		name = "Tazer";//        (optional) ingame item display name incase displayname if CfgArma is incorrect
		buy_price = 2000;//                 item buy price
		buy_condition_CIV = "";//(optional) license needed to buy                                         -only for civilian-
		buy_condition_GUER = 0;//(optional) rank needed to buy    (-1 to disable in case of shared menu)  -only for independent-
		buy_condition_EAST = 0;//(optional) rank needed to buy    (-1 to disable in case of shared menu)  -only for opfort-
		buy_condition_WEST = 0;//(optional) rank needed to buy    (-1 to disable in case of shared menu)  -only for bluefor-
	};
	/*==================*/

	/*
	**    ITEMS
	*/
	class ToolKit
	{
		buy_price = 2500;
	};

	/*
	**       UNIFORMS
	*/
	class U_C_Poloshirt_blue
	{
		buy_price = 250;
	};
	class U_C_Poloshirt_burgundy : U_C_Poloshirt_blue {};
	class U_C_Poloshirt_tricolour : U_C_Poloshirt_blue {};

	/*
	**       VESTS
	*/
	class V_Rangemaster_belt
	{
		buy_price = 500;
	};
	class V_BandollierB_khk : V_Rangemaster_belt
	{
		buy_price = 650;
	};

	/*
	**       HEAD
	*/
	class H_HelmetB
	{
		buy_price = 650;
	};
	class H_HelmetB_camo : H_HelmetB {};

	/*
	**     BACKPACK
	*/
	class B_Kitbag_Base
	{
		buy_price = 1000;
	};
	class B_AssaultPack_Base : B_Kitbag_Base 
	{
		buy_price = 900;
	};

	/*
	**     GOGGLES
	*/
	class G_Sport_Blackred
	{
		buy_price = 1000;
	};
	class G_Squares_Tinted : G_Sport_Blackred {};
};