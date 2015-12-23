class RscHudMessage
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 10;
	fadeout = 3;
	name = "RscHudMessage";
	onLoad = "uiNamespace setVariable [""RscHudMessage"", _this select 0]";
	objects[] = {};

	class controlsBackground 
	{

		class BACKGROUND_1: RscText
		{
			idc = -1;
			colorBackground[] = {0.05,0.05,0.05,0.7};

			x = 0.355625 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class BACKGROUND_2: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			colorText[] = {1,1,1,0.1};
			
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.11 * safezoneH;
		};

		class TITLE: RscStructuredText
		{
			idc = 95000;
			text = "Information";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.7};
			
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class IMAGE: RscPicture
		{
			idc = 95001;
			text = "lyeed_IMG\data\message_system\info.paa";

			x = 0.365937 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class TEXT: RscStructuredText
		{
			idc = 95002;
			colorBackground[] = {0,0,0,0};
			
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class number: RscStructuredText
		{
			idc = 95003;
			text = "";
			colorBackground[] = {0,0,0,0};

			x = 0.371094 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};

	class controls {};
};