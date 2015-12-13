class RscDisplayInteraction: default_base_dialog
{
	idd = 5000;
	name = "RscDisplayInteraction";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			text = "\lyeed_IMG\data\interactions\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248542 * safezoneW;
			h = 0.33 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 5001;
			colorBackground[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: RscFrame
		{
			idc = 5002;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_BACKGROUND: RscText
		{
			idc = 5003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_IMAGE: RscPicture
		{
			idc = 5004;
			text = "lyeed_IMG\data\interactions\option_exit.paa";

			x = 0.352605 * safezoneW + safezoneX;
			y = 0.424074 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = 5005;
			action = "closedialog 0;";
			tooltip = "Quitter";
			onMouseEnter = "((findDisplay 5000) displayCtrl 5003) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[5004,""lyeed_IMG\data\interactions\option_exit_select.paa""];\
			ctrlShow[5002, false];";
			onMouseExit = "((findDisplay 5000) displayCtrl 5003) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[5004,""lyeed_IMG\data\interactions\option_exit.paa""];\
			ctrlShow[5002, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class OPTION_REFRESH_FRAME: RscFrame
		{
			idc = 5006;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_REFRESH_BACKGROUND: RscText
		{
			idc = 5007;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_REFRESH_IMAGE: RscPicture
		{
			idc = 5008;
			text = "lyeed_IMG\data\interactions\option_refresh.paa";

			x = 0.352343 * safezoneW + safezoneX;
			y = 0.477593 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_REFRESH_BUTTON: RscButtonSilent
		{
			idc = 5009;
			action = "[] call public_fnc_interactions_recall;";
			tooltip = "Rafraichir";
			onMouseEnter = "((findDisplay 5000) displayCtrl 5007) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[5008,""lyeed_IMG\data\interactions\option_refresh_select.paa""];\
			ctrlShow[5006, false];";
			onMouseExit = "((findDisplay 5000) displayCtrl 5007) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[5008,""lyeed_IMG\data\interactions\option_refresh.paa""];\
			ctrlShow[5006, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_1_FRAME: RscFrame
		{
			idc = 5010;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_1_BACKGROUND: RscStructuredText
		{
			idc = 5011;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_1_IMAGE: RscPicture
		{
			idc = 5012;

			x = 0.389063 * safezoneW + safezoneX;
			y = 0.416667 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_1_TITLE: RscStructuredText
		{
			idc = 5013;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_1_BUTTON: RscButtonSilent
		{
			idc = 5014;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_2_FRAME: RscFrame
		{
			idc = 5015;
			colorText[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_2_BACKGROUND: RscStructuredText
		{
			idc = 5016;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_2_IMAGE: RscPicture
		{
			idc = 5017;

			x = 0.508802 * safezoneW + safezoneX;
			y = 0.416519 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_2_TITLE: RscStructuredText
		{
			idc = 5018;
			colorBackground[] = {0,0,0,0};
			
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_2_BUTTON: RscButtonSilent
		{
			idc = 5019;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_3_FRAME: RscFrame
		{
			idc = 5020;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_3_BACKGROUND: RscStructuredText
		{
			idc = 5021;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_3_IMAGE: RscPicture
		{
			idc = 5022;

			x = 0.389062 * safezoneW + safezoneX;
			y = 0.483333 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_3_TITLE: RscStructuredText
		{
			idc = 5023;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_3_BUTTON: RscButtonSilent
		{
			idc = 5024;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_4_FRAME: RscFrame
		{
			idc = 5025;
			colorText[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_4_BACKGROUND: RscStructuredText
		{
			idc = 5026;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_4_IMAGE: RscPicture
		{
			idc = 5027;

			x = 0.507812 * safezoneW + safezoneX;
			y = 0.484259 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_4_TITLE: RscStructuredText
		{
			idc = 5028;
			colorBackground[] = {0,0,0,0};
			
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_4_BUTTON: RscButtonSilent
		{
			idc = 5029;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_5_FRAME: RscFrame
		{
			idc = 5030;
			colorText[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_5_BACKGROUND: RscStructuredText
		{
			idc = 5031;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_5_IMAGE: RscPicture
		{
			idc = 5032;

			x = 0.388541 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_5_TITLE: RscStructuredText
		{
			idc = 5033;
			colorBackground[] = {0,0,0,0};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_5_BUTTON: RscButtonSilent
		{
			idc = 5034;
			action = "";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_6_FRAME: RscFrame
		{
			idc = 5035;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_6_BACKGROUND: RscStructuredText
		{
			idc = 5036;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_6_IMAGE: RscPicture
		{
			idc = 5037;

			x = 0.507292 * safezoneW + safezoneX;
			y = 0.549074 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_6_TITLE: RscStructuredText
		{
			idc = 5038;
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_6_BUTTON: RscButtonSilent
		{
			idc = 5039;
			action = "";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_7_FRAME: RscFrame
		{
			idc = 5040;
			colorText[] = {0,0,0,0.8};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_7_BACKGROUND: RscStructuredText
		{
			idc = 5041;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_7_IMAGE: RscPicture
		{
			idc = 5042;

			x = 0.38963 * safezoneW + safezoneX;
			y = 0.615831 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_7_TEXT: RscStructuredText
		{
			idc = 5043;
			colorBackground[] = {0,0,0,0};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_7_BUTTON: RscButtonSilent
		{
			idc = 5044;

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_8_FRAME: RscFrame
		{
			idc = 5045;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_8_BACKGROUND: RscStructuredText
		{
			idc = 5046;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_8_IMAGE: RscPicture
		{
			idc = 5047;

			x = 0.507812 * safezoneW + safezoneX;
			y = 0.615741 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_8_TEXT: RscStructuredText
		{
			idc = 5048;
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_8_BUTTON: RscButtonSilent
		{
			idc = 5049;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
