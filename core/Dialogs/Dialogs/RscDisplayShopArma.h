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
			idc = -1;
			text = "\lyeed_IMG\data\shops\background.jpg";

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
			w = 0.336556 * safezoneW;
			h = 0.044 * safezoneH;
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
			idc = 38402;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "[_this select 1] call public_fnc_shop_arma_update;";
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.352 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 38403;
			colorText[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.253 * safezoneH;
		};

		class SELECT_INFO_HEADER: RscStructuredText
		{
			idc = 38404;
			colorBackground[] = {0,0,0,0.8};
			text = "<t align='center'>Informations</t>";

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INFO_TEXT: RscStructuredText
		{
			idc = 38405;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.099 * safezoneH;
		};

		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 38406;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 38407;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_SCOPE_BACKGROUND: RscStructuredText
		{
			idc = 38421;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class SELECT_SCOPE_HEADER: RscStructuredText
		{
			idc = 38408;
			text = "<t align='center'>Viseurs compatibles</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_SCOPE_LIST: RscCombo
		{
			idc = 38409;

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_MAGAZINE_BACKGROUND: RscStructuredText
		{
			idc = 38422;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class SELECT_MAGAZINE_HEADER: RscStructuredText
		{
			idc = 38410;
			text = "<t align='center'>Chargeurs compatibles</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_MAGAZINE_LIST: RscCombo
		{
			idc = 38411;

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_BUY_BACKGROUND: RscText
		{
			idc = 38412;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 38413;
			colorText[] = {0,0,0,0.8};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 38414;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 38415;
			text = "\lyeed_IMG\data\shops\actions\action_buy.paa";
			
			x = 0.497162 * safezoneW + safezoneX;
			y = 0.65887 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 38416;
			action = "[] call public_fnc_shop_arma_buy;";
			onMouseEnter = "\
			ctrlSetText[38415,""\lyeed_IMG\data\shops\actions\action_buy_select.paa""];\
			ctrlShow[38413, false];\
			((findDisplay 38400) displayCtrl 38412) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 38400) displayCtrl 38414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Acheter</t>"";";
			onMouseExit = "\
			ctrlSetText[38415,""\lyeed_IMG\data\shops\actions\action_buy.paa""];\
			if (ctrlVisible 38415) then {\
				ctrlShow[38413, true];\
			};\
			((findDisplay 38400) displayCtrl 38412) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 38400) displayCtrl 38414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>"";";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 38417;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 38418;
			colorText[] = {0,0,0,0.8};
			
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 38419;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 38420;
			text = "\lyeed_IMG\data\shops\actions\action_exit.paa";
			
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[38420,""\lyeed_IMG\data\shops\actions\action_exit_select.paa""];\
			ctrlShow[38418, false];\
			((findDisplay 38400) displayCtrl 38417) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 38400) displayCtrl 38419) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[38420,""\lyeed_IMG\data\shops\actions\action_exit.paa""];\
			ctrlShow[38418, true];\
			((findDisplay 38400) displayCtrl 38417) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 38400) displayCtrl 38419) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
