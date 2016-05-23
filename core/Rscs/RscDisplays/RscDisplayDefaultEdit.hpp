class RscDisplayDefaultEdit: RscDisplayDefaultInteraction
{
	idd = 70000;
	name = "RscDisplayDefaultEdit";

	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			idc = 70008;
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			idc = 70001;
			text = "<t size='1.5' align='center'>Montant</t>";
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
		class EDIT: RscEdit
		{
			idc = 70002;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 70003;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 70004;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 70005;
			text = "lyeed_IMG\data\global\validate.paa";

			x = 0.452098 * safezoneW + safezoneX;
			y = 0.571169 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 70006;
			text = "<t align='left' size='1.3'>Valider</t>";

			x = 0.482448 * safezoneW + safezoneX;
			y = 0.576889 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 70007;
			onMouseEnter = "ctrlSetText[70005,""lyeed_IMG\data\global\validate_select.paa""];ctrlShow[70003, false];((findDisplay 70000) displayCtrl 70004) ctrlSetBackgroundColor [1,1,1,1];((findDisplay 70000) displayCtrl 70006) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Valider</t>"";";
			onMouseExit = "ctrlSetText[70005,""lyeed_IMG\data\global\validate.paa""];ctrlShow[70003, true];((findDisplay 70000) displayCtrl 70004) ctrlSetBackgroundColor [0,0,0,0.6];((findDisplay 70000) displayCtrl 70006) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Valider</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
