class RscTitlePlayer
{
	idd = -1;
	name = "RscTitlePlayer";
	onLoad = "uiNamespace setVariable [""RscTitlePlayer"", _this select 0]";
	movingEnable = 0;
	fadein = 6;
	duration = 9999999999999;
	fadeout = 0;
	class controlsBackground 
	{
		/*===========================
		  ===       PERCENT       ===
		  =========================== */
		class PERCENT_BLOOD: RscStructuredText
		{
			idc = 23500;

			x = 0.922813 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PERCENT_FATIGUE: RscStructuredText
		{
			idc = 23501;

			x = 0.922813 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PERCENT_HUNGER: RscStructuredText
		{
			idc = 23502;

			x = 0.922813 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PERCENT_THIRST: RscStructuredText
		{
			idc = 23503;

			x = 0.922813 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
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
		class VEHICLE_SPEED: RscStructuredText
		{
			idc = 23520;

			x = 0.025625 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class VEHICLE_FUEL: RscStructuredText
		{
			idc = 23522;

			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.044 * safezoneH;
		};
		/*===========================
		  ===       WEAPONS       ===
		  =========================== */
		class WEAPON_MOD: RscStructuredText
		{
			idc = 23530;

			x = 0.737186 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class WEAPON_ZEROING: RscStructuredText
		{
			idc = 23531;

			x = 0.737188 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class WEAPON_AMMO: RscStructuredText
		{
			idc = 23532;

			x = 0.737188 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.033 * safezoneH;
		};
		/*===========================
		  ===         GPS         ===
		  =========================== */
		class GPS_FRAME: RscPicture
		{
			idc = 23540;
			text = "lyeed_IMG\data\player_hud\gps.paa";

			x = 0.773281 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.451 * safezoneH;
		};
		class GPS_INFOS: RscStructuredText
		{
			idc = 23542;
			colorBackground[] = {0.2,0.188,0.188,1};
			
			x = 0.82276 * safezoneW + safezoneX;
			y = 0.808 * safezoneH + safezoneY;
			w = 0.154219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GPS_MAP: RscMapControl
		{
			idc = 23539;

			x = 0.82276 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.154219 * safezoneW;
			h = 0.136 * safezoneH;
		};
	};

	class controls {};
};
