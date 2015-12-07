class RscDisplayShopVehicles: default_base_dialog
{
	idd = 2300;
	name = "RscDisplayShopVehicles";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.386719 * safezoneW;
			h = 0.473 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shops\background.jpg";

			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.355781 * safezoneW;
			h = 0.429 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 2301;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.356881 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class VEHICLES_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class VEHICLES_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Véhicules</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLES_LIST: RscListbox
		{
			idc = 2302;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "_this call public_fnc_shop_vehicles_update;";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.286 * safezoneH;
		};

		class VEHICLES_COLOR_HEADER: RscStructuredText
		{
			idc = 2321;
			colorBackground[] = {0,0,0,0.8};
			text = "<t align='center'>Couleurs</t>";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLES_COLOR_LIST: RscCombo
		{
			idc = 2303;

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 2304;
			colorText[] = {0,0,0,0.8};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class SELECT_BACKGROUND: RscStructuredText
		{
			idc = 2305;
			colorBackground[] = {0,0,0,0.6};

			x = 0.608281 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.198 * safezoneH;
		};
		class SELECT_TITLE: RscStructuredText
		{
			idc = 2306;
			colorBackground[] = {0,0,0,0.9};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class SELECT_DESC_HEADER: RscStructuredText
		{
			idc = 2307;
			text = "<t align='center'>Description</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_DESC_INFO: RscStructuredText
		{
			idc = 2308;
			colorBackground[] = {0,0,0,0.6};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.22 * safezoneH;
		};

		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 2309;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.608281 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 2310;
			colorBackground[] = {0,0,0,0.6};

			x = 0.608281 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_BUY_BACKGROUND: RscText
		{
			idc = 2311;
			colorBackground[] = {0,0,0,0.6};

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 2312;
			colorText[] = {0,0,0,0.8};

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 2313;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.503542 * safezoneW + safezoneX;
			y = 0.651963 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 2314;
			text = "\lyeed_IMG\data\shops\actions\action_buy.paa";

			x = 0.480312 * safezoneW + safezoneX;
			y = 0.645778 * safezoneH + safezoneY;
			w = 0.0257291 * safezoneW;
			h = 0.0466667 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 2315;
			action = "[] call public_fnc_shop_vehicles_buy;";
			onMouseEnter = "\
			ctrlSetText[2314,""\lyeed_IMG\data\shops\actions\action_buy_select.paa""];\
			ctrlShow[2312, false];\
			((findDisplay 2300) displayCtrl 2311) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 2300) displayCtrl 2313) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Acheter</t>"";";
			onMouseExit = "\
			ctrlSetText[2314,""\lyeed_IMG\data\shops\actions\action_buy.paa""];\
			if (ctrlVisible 2314) then {\
				ctrlShow[2312, true];\
			};\
			((findDisplay 2300) displayCtrl 2311) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 2300) displayCtrl 2313) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>"";";

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 2316;
			colorBackground[] = {0,0,0,0.6};

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 2317;
			colorText[] = {0,0,0,0.8};

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 2318;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.608281 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 2319;
			text = "\lyeed_IMG\data\shops\actions\action_exit.paa";

			x = 0.585417 * safezoneW + safezoneX;
			y = 0.651852 * safezoneH + safezoneY;
			w = 0.0220833 * safezoneW;
			h = 0.0383333 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = 2320;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[2319,""\lyeed_IMG\data\shops\actions\action_exit_select.paa""];\
			ctrlShow[2317, false];\
			((findDisplay 2300) displayCtrl 2316) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 2300) displayCtrl 2318) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[2319,""\lyeed_IMG\data\shops\actions\action_exit.paa""];\
			ctrlShow[2317, true];\
			((findDisplay 2300) displayCtrl 2316) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 2300) displayCtrl 2318) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};