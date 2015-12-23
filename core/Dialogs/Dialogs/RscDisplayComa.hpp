class RscDisplayComa : default_base_dialog
{
	idd = 350;
	name = "RscDisplayComa";

	class controlsBackground 
	{
		class BACKGROUND: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' size='3'>Vous êtes inconscient</t>";
			colorBackground[] = {0,0,0,0};
			
			x = -0.000156274 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class TIME_LEFT: RscStructuredText
		{
			idc = 351;
			text = "";
			colorBackground[] = {0,0,0,0};
			
			x = -0.000156274 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class MEDIC_IMAGE: RscPicture
		{
			idc = -1;
			text = "lyeed_IMG\data\death\medic.paa";

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class MEDIC_CHECKBOX: RscCheckbox
		{
			idc = -1;
			
			x = 0.0771875 * safezoneW + safezoneX;
			y = 0.104 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class MEDIC_TEXT: RscText
		{
			idc = -1;
			text = "Contacter le SAMU";
			colorBackground[] = {0,0,0,0};
			
			x = 0.0956773 * safezoneW + safezoneX;
			y = 0.107704 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SUICIDE_IMAGE: RscPicture
		{
			idc = 352;
			text = "lyeed_IMG\data\death\suicide.paa";

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class SUICIDE_BUTTON: RscButtonSilent
		{
			idc = 354;
			action = "player setDamage 1;";
			onMouseEnter = "ctrlSetText[352,""lyeed_IMG\data\death\suicide_select.paa""];";
			onMouseExit = "ctrlSetText[352,""lyeed_IMG\data\death\suicide.paa""];";

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class SUICIDE_TEXT: RscText
		{
			idc = 353;
			text = "SE SUICIDER";
			colorBackground[] = {0,0,0,0};
			
			x = 0.456719 * safezoneW + safezoneX;
			y = 0.906074 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SUICIDE_LEFT: RscStructuredText
		{
			idc = 355;
			text = "";
			colorBackground[] = {0,0,0,0};

			x = -0.000158758 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};