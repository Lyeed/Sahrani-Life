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
			text = "\lyeed_IMG\data\housing\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.264 * safezoneH;
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
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 45007;
			text = "\lyeed_IMG\data\housing\actions\action_buy.paa";

			x = 0.513922 * safezoneW + safezoneX;
			y = 0.47162 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
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
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 45008;
			action = "[] spawn public_fnc_house_menu_action_buy;";
			onMouseEnter = "\
			ctrlSetText[45007,""\lyeed_IMG\data\housing\actions\action_buy_select.paa""];\
			ctrlShow[45002, false];\
			((findDisplay 45000) displayCtrl 45001) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45000) displayCtrl 45010) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[45007,""\lyeed_IMG\data\housing\actions\action_buy.paa""];\
			ctrlShow[45002, true];\
			((findDisplay 45000) displayCtrl 45001) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45000) displayCtrl 45010) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscStructuredText
		{
			idc = 45014;
			colorBackground[] = {0,0,0,0.6};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 45013;
			colorText[] = {0,0,0,0.8};

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 45011;
			text = "\lyeed_IMG\data\housing\actions\action_exit.paa";

			x = 0.514334 * safezoneW + safezoneX;
			y = 0.40936 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 45012;
			text = "<t align='left' size='1.3'>Quitter</t>";
			colorBackground[] = {0,0,0,0};
			
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[45011,""\lyeed_IMG\data\housing\actions\action_exit_select.paa""];\
			ctrlShow[45013, false];\
			((findDisplay 45000) displayCtrl 45014) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45000) displayCtrl 45012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[45011,""\lyeed_IMG\data\housing\actions\action_exit.paa""];\
			ctrlShow[45013, true];\
			((findDisplay 45000) displayCtrl 45014) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45000) displayCtrl 45012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};

class RscDisplayHousingInteraction: default_base_dialog
{
	idd = 46000;
	name = "RscDisplayHousingInteraction";
	
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
			text = "\lyeed_IMG\data\housing\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.264 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 46001;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2477 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ACTION_1_FRAME: RscFrame
		{
			idc = 46010;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_1_BACKGROUND: RscStructuredText
		{
			idc = 46011;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_1_IMAGE: RscPicture
		{
			idc = 46012;

			x = 0.389063 * safezoneW + safezoneX;
			y = 0.416667 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_1_TITLE: RscStructuredText
		{
			idc = 46013;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_1_BUTTON: RscButtonSilent
		{
			idc = 46014;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_2_FRAME: RscFrame
		{
			idc = 46015;
			colorText[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_2_BACKGROUND: RscStructuredText
		{
			idc = 46016;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_2_IMAGE: RscPicture
		{
			idc = 46017;

			x = 0.508802 * safezoneW + safezoneX;
			y = 0.416519 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_2_TITLE: RscStructuredText
		{
			idc = 46018;
			colorBackground[] = {0,0,0,0};
			
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_2_BUTTON: RscButtonSilent
		{
			idc = 46019;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_3_FRAME: RscFrame
		{
			idc = 46020;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_3_BACKGROUND: RscStructuredText
		{
			idc = 46021;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_3_IMAGE: RscPicture
		{
			idc = 46022;

			x = 0.389062 * safezoneW + safezoneX;
			y = 0.483333 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_3_TITLE: RscStructuredText
		{
			idc = 46023;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_3_BUTTON: RscButtonSilent
		{
			idc = 46024;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_4_FRAME: RscFrame
		{
			idc = 46025;
			colorText[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_4_BACKGROUND: RscStructuredText
		{
			idc = 46026;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_4_IMAGE: RscPicture
		{
			idc = 46027;

			x = 0.507812 * safezoneW + safezoneX;
			y = 0.484259 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_4_TITLE: RscStructuredText
		{
			idc = 46028;
			colorBackground[] = {0,0,0,0};
			
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_4_BUTTON: RscButtonSilent
		{
			idc = 46029;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_5_FRAME: RscFrame
		{
			idc = 46030;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_5_BACKGROUND: RscStructuredText
		{
			idc = 46031;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_5_IMAGE: RscPicture
		{
			idc = 46032;

			x = 0.388541 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_5_TITLE: RscStructuredText
		{
			idc = 46033;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_5_BUTTON: RscButtonSilent
		{
			idc = 46034;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_6_FRAME: RscFrame
		{
			idc = 46035;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_6_BACKGROUND: RscStructuredText
		{
			idc = 46036;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_6_IMAGE: RscPicture
		{
			idc = 46037;

			x = 0.507292 * safezoneW + safezoneX;
			y = 0.549074 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_6_TITLE: RscStructuredText
		{
			idc = 46038;
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_6_BUTTON: RscButtonSilent
		{
			idc = 46039;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};