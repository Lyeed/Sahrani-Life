class RscDisplayHousingBuy: default_base_dialog
{
	idd = 45000;
	name = "RscDisplayHousingBuy";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.365937 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\housing_buy\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscStructuredText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.400074 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_BUY_BACKGROUND: RscStructuredText
		{
			idc = 45001;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 45002;
			colorText[] = {0,0,0,0.8};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' size='1.3'>Acheter un bâtiment</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2477 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class GARAGE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GARAGE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Peut servir de garage</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GARAGE_INFO: RscStructuredText
		{
			idc = 45003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PRICE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PRICE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_INFO: RscStructuredText
		{
			idc = 45004;
			colorBackground[] = {0,0,0,0.6};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class REQUIRE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class REQUIRE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Requis</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REQUIRE_INFO: RscStructuredText
		{
			idc = 45005;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CHEST_FRAME: RscFrame
		{
			idc = -1;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class CHEST_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Peut contenir un coffre</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHEST_INFO: RscStructuredText
		{
			idc = 45006;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 45007;
			text = "\lyeed_IMG\data\housing_buy\action_buy.paa";

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.054074 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 45008;
			action = "[] spawn public_fnc_house_menu_buy_action;";
			onMouseEnter = "ctrlSetText[45007,""\lyeed_IMG\data\housing_buy\action_buy_select.paa""];";
			onMouseExit = "ctrlSetText[45007,""\lyeed_IMG\data\housing_buy\action_buy.paa""];";
			tooltip = "Acheter";

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.054074 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 45010;
			text = "<t align='left' size='1.3'>Acheter</t>";
			colorBackground[] = {0,0,0,0};
			
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 45011;
			text = "\lyeed_IMG\data\housing_buy\action_exit.paa";

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "ctrlSetText[45011,""\lyeed_IMG\data\housing_buy\action_exit_select.paa""];";
			onMouseExit = "ctrlSetText[45011,""\lyeed_IMG\data\housing_buy\action_exit.paa""];";
			tooltip = "Fermer";

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = -1;
			text = "<t align='left' size='1.3'>Quitter</t>";
			colorBackground[] = {0,0,0,0};
			
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};