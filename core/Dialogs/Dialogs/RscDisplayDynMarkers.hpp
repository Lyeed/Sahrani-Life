class RscDisplayDynMarkers: default_base_dialog
{
	idd = 21000;
	name = "RscDisplayDynMarkers";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.386719 * safezoneW;
			h = 0.385 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\dynMarkers\background.jpg";

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.356823 * safezoneW;
			h = 0.342741 * safezoneH;
		};
		class SELECT_BACKGROUND: RscText
		{
			idc = 21006;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.077 * safezoneH;
		};
	};
	
	class controls
	{
		class EXIT_IMAGE: RscPicture
		{
			idc = 21001;
			text = "\lyeed_IMG\data\dynMarkers\action_exit.paa";

			x = 0.618594 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "ctrlSetText[21001,""\lyeed_IMG\data\dynMarkers\action_exit_select.paa""];";
			onMouseExit = "ctrlSetText[21001,""\lyeed_IMG\data\dynMarkers\action_exit.paa""];";
			tooltip = "Fermer";

			x = 0.618594 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TITLE: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' size='1.8'>Acheter une coordonnée</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.34512 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.044926 * safezoneH;
		};

		class STOCK_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class STOCK_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Disponible</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_LIST: RscListbox
		{
			idc = 21002;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "[_this select 1] call public_fnc_dynamicMarkers_menu_update_info;";
			
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.253 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 21003;
			colorText[] = {0,0,0,0.8};

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 21004;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 21005;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_BUY_IMAGE: RscPicture
		{
			idc = 21007;
			text = "\lyeed_IMG\data\dynMarkers\action_buy.paa";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SELECT_BUY_BUTTON: RscButtonSilent
		{
			idc = 21008;
			action = "[] call public_fnc_dynamicMarkers_menu_buy;";
			onMouseEnter = "ctrlSetText[21007,""\lyeed_IMG\data\dynMarkers\action_buy_select.paa""];";
			onMouseExit = "ctrlSetText[21007,""\lyeed_IMG\data\dynMarkers\action_buy.paa""];";
			tooltip = "Acheter";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
