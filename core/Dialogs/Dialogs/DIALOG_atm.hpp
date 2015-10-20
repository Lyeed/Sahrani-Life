class DIALOG_ATM_NAME : default_base_dialog
{	
	idd = DIALOG_ATM_IDD;
	name= #DIALOG_ATM_NAME;

	class controlsBackground
	{
		class Skyline_ATM_Picture: Life_RscPicture
		{
			text = "Skyline_client\Data\Menu_ATM.paa";
			
			x = 0.300969 * safezoneW + safezoneX;	y = 0.126 * safezoneH + safezoneY;
			w = 0.386719 * safezoneW;				h = 0.671 * safezoneH;
		};
	};

	class Controls
	{
		class CashTitle: Life_RscStructuredText
		{
			idc = 2701;
			text = "";
			
			x = 0.402031 * safezoneW + safezoneX;	y = 0.3614 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;				h = 0.154 * safezoneH;
		};

		class Skyline_ATM_Edit: Life_RscEdit
		{
			idc = 2702;
			text = "1";

			x = 0.484531 * safezoneW + safezoneX;	y = 0.368 * safezoneH + safezoneY;
			w = 0.105188 * safezoneW;				h = 0.022 * safezoneH;
		};
		
		class Skyline_ATM_Retirer: Life_RscButtonMenu
		{
			onButtonClick = "[] call public_fnc_atmWithdraw;";
			soundClick[] = {"Skyline_client\Sound\ATM_Bip_Bouton.ogg", 0.09, 1};
			text = "Retirer";

			x = 0.484531 * safezoneW + safezoneX;	y = 0.401 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;				h = 0.033 * safezoneH;
		};
		
		class Skyline_ATM_Deposer: Life_RscButtonMenu
		{
			onButtonClick = "[] call public_fnc_atmDeposit;";
			soundClick[] = {"Skyline_client\Sound\ATM_Bip_Bouton.ogg", 0.09, 1};
			text = "Deposer";

			x = 0.539188 * safezoneW + safezoneX;	y = 0.401 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;				h = 0.033 * safezoneH;
		};

		class Skyline_ATM_Fermer: Life_RscButtonMenu
		{
			onButtonClick = "closeDialog 0;";
			soundClick[] = {"Skyline_client\Sound\ATM_Stop.ogg", 0.09, 1};
			text = "Fermer";

			x = 0.5495 * safezoneW + safezoneX;		y = 0.577 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;				h = 0.022 * safezoneH;
		};
	};
};