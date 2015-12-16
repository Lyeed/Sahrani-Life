class RscDisplayFuelStation: default_base_dialog
{	
	idd = 16000;
	name = "RscDisplayFuelStation";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			idc = 16001;
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
			idc = 16002;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.371928 * safezoneW + safezoneX;
			y = 0.321223 * safezoneH + safezoneY;
			w = 0.259844 * safezoneW;
			h = 0.232852 * safezoneH;
		};
		class TITLE_TEXT: RscStructuredText
		{
			idc = 16003;
			text = "<t size ='1.5' align='center'>Pompe à essence</t>";

			x = 0.382953 * safezoneW + safezoneX;
			y = 0.33324 * safezoneH + safezoneY;
			w = 0.238176 * safezoneW;
			h = 0.045852 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class FUEL_COMBO: RscCombo
		{
			idc = 16004;
			colorPictureSelected[] = {1, 1, 1, 1};

			x = 0.400484 * safezoneW + safezoneX;
			y = 0.42762 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FRAME_PRICE: RscFrame
		{
			idc = 16005;

			x = 0.560328 * safezoneW + safezoneX;
			y = 0.42652 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class FUEL_TEXT: RscStructuredText
		{
			idc = 16006;
			text = "Choix du carburant";

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.400074 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PRICE_TEXT: RscStructuredText
		{
			idc = 16007;
			text = "Prix/L";

			x = 0.561354 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PRICE_TEXT2: RscStructuredText
		{
			idc = 16008;
			text = "<t size ='2' align='center'>0</t>";

			x = 0.560844 * safezoneW + safezoneX;
			y = 0.42806 * safezoneH + safezoneY;
			w = 0.0341666 * safezoneW;
			h = 0.0522223 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class PRICE_TEXT3: RscStructuredText
		{
			idc = 16012;
			text = "<t size ='0.7' align='center'>Kn</t>";

			x = 0.579999 * safezoneW + safezoneX;
			y = 0.463111 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT: RscStructuredText
		{
			idc = 16009;
			text = "<t align='right'>Disponnibilité</t>";

			x = 0.394812 * safezoneW + safezoneX;
			y = 0.45886 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT2: RscStructuredText
		{
			idc = 16010;
			text = "<t align='right'>0</t>";

			x = 0.461741 * safezoneW + safezoneX;
			y = 0.45776 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT3: RscStructuredText
		{
			idc = 16011;
			text = "<t align='right'>L</t>";

			x = 21.41 * GUI_GRID_W + GUI_GRID_X;
			y = 10.57 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.50001 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
		};
		class FUEL_FRAME: RscFrame
		{
			idc = 16013;

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0480208 * safezoneW;
			h = 0.0247778 * safezoneH;
			colorText[] = {0,0,0,0.8};
		};
		class FUEL_BTN: RscButton
		{
			idc = 16014;
			text = "Valider";
			action = "[] call public_fnc_refuelVehicle";

			x = 0.475208 * safezoneW + safezoneX;
			y = 0.500926 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
