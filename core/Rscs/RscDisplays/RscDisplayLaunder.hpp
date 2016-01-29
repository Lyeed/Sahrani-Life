class RscDisplayLaunder: RscDisplayDefaultInteraction
{
	idd = 29000;
	name = "RscDisplayLaunder";

	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND {};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Blanchiment</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};

		class FRAME: RscFrame
		{
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class INFO: RscStructuredText
		{
			idc = 29001;

			x = 0.381407 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.165 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 29002;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 29003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 29004;
			text = "lyeed_IMG\data\global\action_buy.paa";

			x = 0.508879 * safezoneW + safezoneX;
			y = 0.582387 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 29005;
			text = "<t align='left' size='1.3'>Blanchir</t>";

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 69007;
			action = "[] call public_fnc_launder_action;";
			onMouseEnter = "			ctrlSetText[29004,""lyeed_IMG\data\global\action_buy_select.paa""];			ctrlShow[29002, false];			((findDisplay 29000) displayCtrl 29003) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 29000) displayCtrl 29005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Blanchir</t>"";";
			onMouseExit = "			ctrlSetText[29004,""lyeed_IMG\data\global\action_buy.paa""];			ctrlShow[29002, true];			((findDisplay 29000) displayCtrl 29003) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 29000) displayCtrl 29005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Blanchir</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
