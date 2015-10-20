class playerHUD
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 99999999999999999999999999999999999999999999;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable [""playerHUD"", _this select 0]";
	objects[] = {};

	class controlsBackground 
	{

		class HUD_PICTURE_1: life_RscPicture
		{
			idc = 23500;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_2: life_RscPicture
		{
			idc = 23501;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_3: life_RscPicture
		{
			idc = 23502;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_4: life_RscPicture
		{
			idc = 23503;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_5: life_RscPicture
		{
			idc = 23504;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_6: life_RscPicture
		{
			idc = 23505;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class HUD_PICTURE_7: life_RscPicture
		{
			idc = 23506;
			text = "";

			x = 0.948594 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
	};

	class controls {};
};
