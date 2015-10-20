class RscDisplayInteraction: default_base_dialog
{
	idd = 5000;
	name = "RscDisplayInteraction";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = 5001;
			text = "\lyeed_IMG\data\vehicle\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 5002;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};
		class DISTANCE: RscStructuredText
		{
			idc = 5003;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.70086 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class APP_1_IMAGE: RscPicture
		{
			idc = 5010;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_1_BUTTON: RscButtonSilent
		{
			idc = 5011;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_2_IMAGE: RscPicture
		{
			idc = 5012;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_2_BUTTON: RscButtonSilent
		{
			idc = 5013;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_3_IMAGE: RscPicture
		{
			idc = 5014;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_3_BUTTON: RscButtonSilent
		{
			idc = 5015;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_4_IMAGE: RscPicture
		{
			idc = 5016;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_4_BUTTON: RscButtonSilent
		{
			idc = 5017;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_5_IMAGE: RscPicture
		{
			idc = 5018;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_5_BUTTON: RscButtonSilent
		{
			idc = 5019;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_6_IMAGE: RscPicture
		{
			idc = 5020;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_6_BUTTON: RscButtonSilent
		{
			idc = 5021;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_7_IMAGE: RscPicture
		{
			idc = 5022;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_7_BUTTON: RscButtonSilent
		{
			idc = 5023;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_8_IMAGE: RscPicture
		{
			idc = 5024;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_8_BUTTON: RscButtonSilent
		{
			idc = 5025;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_9_IMAGE: RscPicture
		{
			idc = 5026;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_9_BUTTON: RscButtonSilent
		{
			idc = 5027;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_10_IMAGE: RscPicture
		{
			idc = 5028;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_10_BUTTON: RscButtonSilent
		{
			idc = 5029;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_11_IMAGE: RscPicture
		{
			idc = 5030;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_11_BUTTON: RscButtonSilent
		{
			idc = 5031;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_12_IMAGE: RscPicture
		{
			idc = 5032;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_12_BUTTON: RscButtonSilent
		{
			idc = 5033;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
	};
};
