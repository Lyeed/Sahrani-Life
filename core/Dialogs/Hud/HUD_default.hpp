class RscHudPlayer
{
	idd = -1;
	name = "RscHudPlayer";
	onLoad = "uiNamespace setVariable [""RscHudPlayer"", _this select 0]";
	movingEnable = 0;
	fadein = 6;
	duration = 99999999999999999999999999999999999;
	fadeout = 0;
	class controlsBackground 
	{
		/*===========================
		  ===       PERCENT       ===
		  =========================== */
		class PERCENT_TEXT_1: RscStructuredText
		{
			idc = 23500;
			colorBackground[] = {0,0,0,0.5};
			
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class PERCENT_FRAME_1: RscFrame
		{
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		class PERCENT_TEXT_2: RscStructuredText
		{
			idc = 23501;
			colorBackground[] = {0,0,0,0.5};
			
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class PERCENT_FRAME_2: RscFrame
		{
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		class PERCENT_TEXT_3: RscStructuredText
		{
			idc = 23502;
			colorBackground[] = {0,0,0,0.5};
			
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class PERCENT_FRAME_3: RscFrame
		{
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		class PERCENT_TEXT_4: RscStructuredText
		{
			idc = 23503;
			colorBackground[] = {0,0,0,0.5};
			
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class PERCENT_FRAME_4: RscFrame
		{
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		/*===========================
		  ===        ICONS        ===
		  =========================== */
		class ICON_1: RscPicture
		{
			idc = 23510;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_2: RscPicture
		{
			idc = 23511;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_3: RscPicture
		{
			idc = 23512;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_4: RscPicture
		{
			idc = 23513;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_5: RscPicture
		{
			idc = 23514;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_6: RscPicture
		{
			idc = 23515;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ICON_7: RscPicture
		{
			idc = 23516;

			x = 0.974375 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		/*===========================
		  ===       VEHICLE       ===
		  =========================== */
		class VEHICLE_SPEED_TEXT: RscStructuredText
		{
			idc = 23520;
			colorBackground[] = {0,0,0,0.5};

			x = -0.000156274 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VEHICLE_SPEED_FRAME: RscFrame
		{
			idc = 23521;

			x = -0.00531252 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class VEHICLE_FUEL_TEXT: RscStructuredText
		{
			idc = 23522;
			colorBackground[] = {0,0,0,0.5};

			x = 0.933125 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class VEHICLE_FUEL_FRAME: RscFrame
		{
			idc = 23523;

			x = 0.933125 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0675001 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		/*===========================
		  ===       WEAPONS       ===
		  =========================== */
		class WEAPON_MOD_TEXT: RscStructuredText
		{
			idc = 23530;
			colorBackground[] = {0,0,0,0.5};

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class WEAPON_MOD_FRAME: RscFrame
		{
			idc = 23531;

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class WEAPON_AMMO_TEXT: RscStructuredText
		{
			idc = 23532;
			colorBackground[] = {0,0,0,0.5};

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.104 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class WEAPON_AMMO_FRAME: RscFrame
		{
			idc = 23533;

			x = 0.860937 * safezoneW + safezoneX;
			y = 0.104 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		/*===========================
		  ===         GPS         ===
		  =========================== */
		class MAP_BACKGROUND: RscText
		{
			idc = 23540;
			colorBackground[] = {0,0,0,0.5};

			x = 0.876406 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class MAP_FRAME_1: RscFrame
		{
			idc = 23538;

			x = 0.876406 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class MAP_FRAME_2: RscFrame
		{
			idc = 23541;

			x = 0.881563 * safezoneW + safezoneX;
			y = 0.808 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.176 * safezoneH;
		};
		class MAP_INFO: RscStructuredText
		{
			idc = 23542;
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.886719 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MAP: RscMapControl
		{
			idc = 23539;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = "STRTSCALE";
			alphaFadeEndScale = 1.29;

			x = 0.881562 * safezoneW + safezoneX;
			y = 0.808 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.176 * safezoneH;
		};
	};

	class controls {};
};
