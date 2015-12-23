class RscDisplaySkullOwner: default_interaction_back_dialog
{
	idd = 68000;
	name = "RscDisplaySkullOwner";

	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\skull\background.jpg";
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Analyses</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME {};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND {};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE {};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON {};

		class FRAME: RscFrame
		{
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class HEADER: RscStructuredText
		{
			text = "<t align='center'>Résultats</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INFO: RscStructuredText
		{
			idc = 68001;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.22 * safezoneH;
		};
	};
};

class RscDisplaySkullInventory: default_interaction_back_dialog
{
	idd = 69000;
	name = "RscDisplaySkullInventory";

	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\skull\background.jpg";
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Inventaire</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME {};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND {};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE {};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON {};

		class FRAME: RscFrame
		{
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class LIST: RscListbox
		{
			idc = 69002;

			x = 0.381407 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.165 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 69003;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 69004;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 69005;
			text = "lyeed_IMG\data\skull\take.paa";

			x = 0.508879 * safezoneW + safezoneX;
			y = 0.582387 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 69006;
			text = "<t align='left' size='1.3'>Prendre</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 69007;
			action = "[] call public_fnc_skullMenu_search_take";
			onMouseEnter = "\
			ctrlSetText[69005,""lyeed_IMG\data\skull\take_select.paa""];\
			ctrlShow[69003, false];\
			((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 69000) displayCtrl 69006) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Prendre</t>"";";
			onMouseExit = "\
			ctrlSetText[69005,""lyeed_IMG\data\skull\take.paa""];\
			ctrlShow[69003, true];\
			((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 69000) displayCtrl 69006) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Prendre</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
