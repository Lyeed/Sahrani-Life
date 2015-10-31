class RscDisplayShopClothing: default_base_dialog
{
	idd = 3100;
	name = "RscDisplayShopClothing";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.0875 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.219635 * safezoneW;
			h = 0.511444 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shops\background.jpg";

			x = 0.0925209 * safezoneW + safezoneX;
			y = 0.272593 * safezoneH + safezoneY;
			w = 0.209167 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};
	
	class controls 
	{
		class TITLE: RscStructuredText
		{
			idc = 3101;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.0925209 * safezoneW + safezoneX;
			y = 0.272593 * safezoneH + safezoneY;
			w = 0.209167 * safezoneW;
			h = 0.0430741 * safezoneH;
		};

		class TYPE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.12875 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TYPE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Type</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.12875 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TYPE_LIST: RscCombo
		{
			idc = 3102;
			onLBSelChanged = "_this call public_fnc_shop_clothing_update_list;";

			x = 0.12875 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class STOCK_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.102969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class STOCK_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Stock</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_LIST: RscListbox
		{
			idc = 3103;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "_this call public_fnc_shop_clothing_update_clothe;";

			x = 0.102969 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.253 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 3104;
			colorBackground[] = {0,0,0,0.6};

			x = 0.206094 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 3105;
			colorText[] = {0,0,0,0.8};

			x = 0.206094 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 3106;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {-1,-1,-1,0};

			x = 0.231875 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 3107;
			text = "\lyeed_IMG\data\shops\actions\action_exit.paa";

			x = 0.211094 * safezoneW + safezoneX;
			y = 0.676111 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[3107,""\lyeed_IMG\data\shops\actions\action_exit_select.paa""];\
			ctrlShow[3105, false];\
			((findDisplay 3100) displayCtrl 3104) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 3100) displayCtrl 3106) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[3107,""\lyeed_IMG\data\shops\actions\action_exit.paa""];\
			ctrlShow[3105, true];\
			((findDisplay 3100) displayCtrl 3104) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 3100) displayCtrl 3106) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.206094 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_BUY_BACKGROUND: RscText
		{
			idc = 3108;
			colorBackground[] = {0,0,0,0.6};

			x = 0.108125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 3109;
			colorText[] = {0,0,0,0.8};

			x = 0.108125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 3110;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {-1,-1,-1,0};

			x = 0.133906 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 3111;
			text = "\lyeed_IMG\data\shops\actions\action_buy.paa";

			x = 0.110677 * safezoneW + safezoneX;
			y = 0.670444 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 3112;
			action = "[] call public_fnc_shop_clothing_buy;";
			onMouseEnter = "\
			ctrlSetText[3111,""\lyeed_IMG\data\shops\actions\action_buy_select.paa""];\
			ctrlShow[3109, false];\
			((findDisplay 3100) displayCtrl 3108) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 3100) displayCtrl 3110) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Acheter</t>"";";
			onMouseExit = "\
			ctrlSetText[3111,""\lyeed_IMG\data\shops\actions\action_buy.paa""];\
			if (ctrlVisible 3111) then {\
				ctrlShow[3109, true];\
			};\
			((findDisplay 3100) displayCtrl 3108) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 3100) displayCtrl 3110) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>"";";

			x = 0.108125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
