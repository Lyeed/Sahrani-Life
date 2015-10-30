class RscDisplayShopDynMarkers: default_base_dialog
{
	idd = 21000;
	name = "RscDisplayShopDynMarkers";
	
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
			text = "\lyeed_IMG\data\shops\background.jpg";

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.356823 * safezoneW;
			h = 0.342741 * safezoneH;
		};
	};
	
	class controls
	{
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
			idc = 21001;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "[_this select 1] call public_fnc_dynamicMarkers_menu_update_info;";
			
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.253 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 21002;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 21003;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 21004;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_BUY_BACKGROUND: RscText
		{
			idc = 21005;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 21006;
			colorText[] = {0,0,0,0.8};
			
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 21007;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 21008;
			text = "\lyeed_IMG\data\shops\actions\action_buy.paa";
			
			x = 0.4665 * safezoneW + safezoneX;
			y = 0.583465 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 21009;
			action = "[] call public_fnc_shop_virtual_buy;";
			onMouseEnter = "\
			ctrlSetText[21008,""\lyeed_IMG\data\shops\actions\action_buy_select.paa""];\
			ctrlShow[21006, false];\
			((findDisplay 21000) displayCtrl 21005) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 21000) displayCtrl 21007) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Acheter</t>"";";
			onMouseExit = "\
			ctrlSetText[21008,""\lyeed_IMG\data\shops\actions\action_buy.paa""];\
			if (ctrlVisible 21008) then {\
				ctrlShow[21006, true];\
			};\
			((findDisplay 21000) displayCtrl 21005) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 21000) displayCtrl 21007) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>"";";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 21010;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 21011;
			colorText[] = {0,0,0,0.8};
			
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 21012;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 21013;
			text = "\lyeed_IMG\data\shops\actions\action_exit.paa";
			
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = 21014;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[21013,""\lyeed_IMG\data\shops\actions\action_exit_select.paa""];\
			ctrlShow[21011, false];\
			((findDisplay 21000) displayCtrl 21010) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 21000) displayCtrl 21012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[21013,""\lyeed_IMG\data\shops\actions\action_exit.paa""];\
			ctrlShow[21011, true];\
			((findDisplay 21000) displayCtrl 21010) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 21000) displayCtrl 21012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};