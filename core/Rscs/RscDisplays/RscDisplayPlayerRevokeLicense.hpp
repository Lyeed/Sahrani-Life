class RscDisplayPlayerRevokeLicense: RscDisplayDefaultInteraction
{
	idd = 18000;
	name = "RscDisplayPlayerRevokeLicense";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND {};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Licences</t>";
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
			idc = 18001;

			x = 0.381407 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.165 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 18002;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 18003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 18004;
			text = "lyeed_IMG\data\skull\take.paa";

			x = 0.508879 * safezoneW + safezoneX;
			y = 0.582387 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 18005;
			text = "<t align='left' size='1.3'>Retirer</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 18006;
			action = "				[(lbData[18001, (lbCurSel 18001)]), player] remoteExecCall [""public_fnc_interactionMenu_action_license_revoke"", g_interaction_target];				closeDialog 0;";
			onMouseEnter = "			ctrlSetText[18004,""lyeed_IMG\data\skull\take_select.paa""];			ctrlShow[18002, false];			((findDisplay 18000) displayCtrl 18003) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 18000) displayCtrl 18005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Retirer</t>"";";
			onMouseExit = "			ctrlSetText[18004,""lyeed_IMG\data\skull\take.paa""];			ctrlShow[18002, true];			((findDisplay 18000) displayCtrl 18003) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 18000) displayCtrl 18005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Retirer</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
