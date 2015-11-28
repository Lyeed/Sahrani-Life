class RscDisplayFuelRefuel: default_base_dialog
{	
	idd = 17000;
	name = "RscDisplayFuelRefuel";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			idc = 17001;
			text = "\Devilz80_Images\Data\Menu\fuelStations\background.paa";

			x = 0.383489 * safezoneW + safezoneX;
			y = 0.281371 * safezoneH + safezoneY;
			w = 0.235624 * safezoneW;
			h = 0.312148 * safezoneH;
		};
	};
	
	class controls
	{
		class BORDERFRAME: RscPicture
		{
			idc = 17002;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.371919 * safezoneW + safezoneX;
			y = 0.32114 * safezoneH + safezoneY;
			w = 0.259844 * safezoneW;
			h = 0.232852 * safezoneH;
		};
		class TITLE_TEXT: RscStructuredText
		{
			idc = 17003;
			text = "<t size ='1.5' align='center'>Pompe à essence</t>";

			x = 0.382953 * safezoneW + safezoneX;
			y = 0.33324 * safezoneH + safezoneY;
			w = 0.238176 * safezoneW;
			h = 0.045852 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class FRAME_PRICE: RscFrame
		{
			idc = 17005;

			x = 0.542591 * safezoneW + safezoneX;
			y = 0.42762 * safezoneH + safezoneY;
			w = 0.0619791 * safezoneW;
			h = 0.0568517 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class FUEL_TEXT: RscStructuredText
		{
			idc = 17006;
			text = "Sans Plomb 95";

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.40012 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PRICE_TEXT: RscStructuredText
		{
			idc = 17007;
			text = "Montant Total";

			x = 0.540834 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PRICE_TEXT2: RscStructuredText
		{
			idc = 17008;
			text = "<t size ='2' align='center'>250</t>";

			x = 0.543416 * safezoneW + safezoneX;
			y = 0.42806 * safezoneH + safezoneY;
			w = 0.0604167 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class STOCK_TEXT: RscStructuredText
		{
			idc = 17009;
			text = "<t align='right'>Disponnibilité</t>";

			x = 0.394812 * safezoneW + safezoneX;
			y = 0.45886 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT2: RscStructuredText
		{
			idc = 17010;
			text = "<t align='right'>0</t>";

			x = 0.461741 * safezoneW + safezoneX;
			y = 0.45776 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT3: RscStructuredText
		{
			idc = 17011;
			text = "<t align='right'>L</t>";

			x = 0.514541 * safezoneW + safezoneX;
			y = 0.45754 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PRICE_TEXT3: RscStructuredText
		{
			idc = 17012;
			text = "<t size ='0.7' align='center'>Kn</t>";

			x = 0.587347 * safezoneW + safezoneX;
			y = 0.46304 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class FUEL_FRAME: RscFrame
		{
			idc = 17013;

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0480208 * safezoneW;
			h = 0.0247777 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class PROGRESS_BAR: RscProgress
		{
			idc = 17014;

			x = 0.400522 * safezoneW + safezoneX;
			y = 0.42963 * safezoneH + safezoneY;
			w = 0.130989 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PROGRESS_FRAME: RscFrame
		{
			idc = 17015;
			text = "45L";

			x = 0.4 * safezoneW + safezoneX;
			y = 0.428556 * safezoneH + safezoneY;
			w = 0.132396 * safezoneW;
			h = 0.0247777 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class FUEL_BTN: RscButton
		{
			idc = 17016;
			text = "Annuler";
			action = "closeDialog 0";

			x = 0.475208 * safezoneW + safezoneX;
			y = 0.500926 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
	};
};