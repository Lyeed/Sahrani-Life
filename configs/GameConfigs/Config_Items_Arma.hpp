class ALYSIA_ITEMS_ARMA
{
	/*
	**    ITEMS
	*/
	class ToolKit
	{
		name = "";
		price = 2500;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = 0;
			};
			class EAST
			{
				level = 0;
			};
			class WEST
			{
				level = 0;
			};
		};
	};

	/*
	**       UNIFORMS
	*/
	class U_C_Poloshirt_blue
	{
		name = "";
		price = 250;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = -1;
			};
			class EAST
			{
				level = -1;
			};
			class WEST
			{
				level = -1;
			};
		};
	};
	class U_C_Poloshirt_burgundy : U_C_Poloshirt_blue {};
	class U_C_Poloshirt_tricolour : U_C_Poloshirt_blue {};

	/*
	**       VESTS
	*/
	class V_Rangemaster_belt
	{
		name = "";
		price = 500;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = 0;
			};
			class EAST
			{
				level = 0;
			};
			class WEST
			{
				level = 0;
			};
		};
	};
	class V_BandollierB_khk : V_Rangemaster_belt
	{
		price = 650;
	};

	/*
	**       HEAD
	*/
	class H_HelmetB
	{
		name = "";
		price = 650;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = 0;
			};
			class EAST
			{
				level = 0;
			};
			class WEST
			{
				level = 0;
			};
		};
	};
	class H_HelmetB_camo : H_HelmetB {};

	/*
	**     BACKPACK
	*/
	class B_Kitbag_Base
	{
		name = "";
		price = 1000;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = 0;
			};
			class EAST
			{
				level = 0;
			};
			class WEST
			{
				level = 0;
			};
		};
	};
	class B_AssaultPack_Base : B_Kitbag_Base 
	{
		price = 900;
	};

	/*
	**     GOGGLES
	*/
	class G_Sport_Blackred
	{
		name = "";
		price = 1000;
		class conditions
		{
			class CIV
			{
				license = "";
			};
			class GUER
			{
				level = 0;
			};
			class EAST
			{
				level = 0;
			};
			class WEST
			{
				level = 0;
			};
		};
	};
	class G_Squares_Tinted : G_Sport_Blackred {};
};