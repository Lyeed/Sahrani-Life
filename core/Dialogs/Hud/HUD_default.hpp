class RscHudPlayer
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 99999999999999999999999999999999999999999999;
	fadeout = 0;
	name = "RscHudPlayer";
	onLoad = "uiNamespace setVariable [""RscHudPlayer"", _this select 0]";
	objects[] = {};

	class controlsBackground 
	{

		class FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.768125 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.198 * safezoneH;
		};

		class BACKGROUND_UPPER: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};

			x = 0.768125 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class BACKGROUND_DOWN: RscText
		{
			idc = -1;

			x = 0.768125 * safezoneW + safezoneX;
			y = 0.929 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class NAME: RscStructuredText
		{
			idc = 23501;
			colorBackground[] = {0,0,0,1};
			text = "";

			x = 0.768125 * safezoneW + safezoneX;
			y = 0.885 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class HUNGER_IMAGE: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_hud\hunger.paa";

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};		
		class HUNGER_BAR: RscProgress
		{
			idc = 23502;

			x = 0.882914 * safezoneW + safezoneX;
			y = 0.804042 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class THIRST_IMAGE: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_hud\thirst.paa";

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class THIRST_BAR: RscProgress
		{
			idc = 23503;

			x = 0.882284 * safezoneW + safezoneX;
			y = 0.848088 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class FATIGUE_IMAGE: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_hud\fatigue.paa";

			x = 0.824844 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class FATIGUE_INFO: RscStructuredText
		{
			idc = 23504;
			text = "";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.819688 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class BLOOD_IMAGE: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_hud\blood.paa";

			x = 0.783594 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BLOOD_INFO: RscStructuredText
		{
			idc = 23505;
			text = "";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class SPEED_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SPEED_BACKGROUND: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SPEED_INFO: RscStructuredText
		{
			idc = 23506;
			text = "";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SPEED_TEXT: RscStructuredText
		{
			idc = -1;
			text = "<t align='right' size='1.2'>km/h</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.0823437 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ICON_1: RscPicture
		{
			idc = 23510;
			text = "";

			x = 0.773281 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_2: RscPicture
		{
			idc = 23511;
			text = "";

			x = 0.804219 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_3: RscPicture
		{
			idc = 23512;
			text = "";

			x = 0.835156 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_4: RscPicture
		{
			idc = 23513;
			text = "";

			x = 0.866094 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_5: RscPicture
		{
			idc = 23514;
			text = "";

			x = 0.897031 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_6: RscPicture
		{
			idc = 23515;
			text = "";

			x = 0.927969 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_7: RscPicture
		{
			idc = 23516;
			text = "";

			x = 0.958906 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class VEHICLE_HEADER: RscStructuredText
		{
			idc = 23520;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_BACKGROUND: RscText
		{
			idc = 23521;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VEHICLE_FRAME: RscFrame
		{
			idc = 23522;
			colorText[] = {0,0,0,0.8};
			
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class VEHICLE_FUEL_IMAGE: RscPicture
		{
			idc = 23523;
			text = "\lyeed_IMG\data\player_hud\fuel.paa";
			
			x = 0.12875 * safezoneW + safezoneX;
			y = 0.082 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VEHICLE_FUEL_BAR: RscProgress
		{
			idc = 23524;

			x = 0.157761 * safezoneW + safezoneX;
			y = 0.090037 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};

	class controls {};
};