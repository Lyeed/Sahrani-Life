class RscDisplayShopArma: default_base_dialog
{
	idd = 38400;
	name = "RscDisplayShopArma";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.319531 * safezoneW + safezoneX;
			y = 0.272704 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.502296 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = 38411;
			text = "";

			x = 0.335 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.451 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 38401;
			colorBackground[] = {0,0,0,0.8};

			x = 0.335 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.340312 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class EXIT_IMAGE: RscPicture
		{
			idc = 38414;
			text = "\lyeed_IMG\data\shops\action_exit.paa";

			x = 0.645406 * safezoneW + safezoneX;
			y = 0.33962 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "ctrlSetText[38414,""\lyeed_IMG\data\shops\action_exit_select.paa""];";
			onMouseExit = "ctrlSetText[38414,""\lyeed_IMG\data\shops\action_exit.paa""];";
			tooltip = "Fermer";

			x = 0.645406 * safezoneW + safezoneX;
			y = 0.33962 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class STOCK_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.374 * safezoneH;
		};
		class STOCK_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Stock</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_LIST: RscListbox
		{
			idc = 38405;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "[_this select 1] call public_fnc_weaponShopSelection;";
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.352 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.352 * safezoneH;
		};

		class SELECT_INFO_HEADER: RscStructuredText
		{
			idc = 38413;
			colorBackground[] = {0,0,0,0.8};
			text = "<t align='center'>Informations</t>";

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INFO_TEXT: RscStructuredText
		{
			idc = 38406;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 38412;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0670311 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 38402;
			colorBackground[] = {0,0,0,0.6};

			x = 0.546406 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0670311 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_SCOPE_HEADER: RscStructuredText
		{
			idc = 38407;
			text = "<t align='center'>Viseurs compatibles</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_SCOPE_LIST: RscCombo
		{
			idc = 38408;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_MAGAZINE_HEADER: RscStructuredText
		{
			idc = 38409;
			text = "<t align='center'>Chargeurs compatibles</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_MAGAZINE_LIST: RscCombo
		{
			idc = 38410;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_BUY_IMAGE: RscPicture
		{
			idc = 38403;
			text = "\lyeed_IMG\data\shops\action_buy.paa";

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SELECT_BUY_BUTTON: RscButtonSilent
		{
			idc = 38404;
			action = "[] call public_fnc_shop_arma_buy;";
			onMouseEnter = "ctrlSetText[38414,""\lyeed_IMG\data\shops\action_buy_select.paa""];";
			onMouseExit = "ctrlSetText[38414,""\lyeed_IMG\data\shops\action_buy.paa""];";
			tooltip = "Acheter";

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};