class RscDisplayFuelStation: default_base_dialog
{	
	idd = 16000;
	name = "RscDisplayFuelStation";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			idc = 16001;
			text = "\lyeed_IMG\data\interactions\background.jpg";

			x = 0.382953 * safezoneW + safezoneX;
			y = 0.33126 * safezoneH + safezoneY;
			w = 0.236145 * safezoneW;
			h = 0.261221 * safezoneH;
		};
	};
	
	class controls
	{
		class BORDERFRAME: RscPicture
		{
			idc = 16002;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.372125 * safezoneW + safezoneX;
			y = 0.32026 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.286 * safezoneH;
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
			onLBSelChanged = "_this call public_fnc_fuelStation_refuel_veh_update;";

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
			idc = 16009;
			text = "<t size ='0.7' align='center'>Kn</t>";

			x = 0.579999 * safezoneW + safezoneX;
			y = 0.463111 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT: RscStructuredText
		{
			idc = 16010;
			text = "<t align='right'>Disponnibilité</t>";

			x = 0.394812 * safezoneW + safezoneX;
			y = 0.45886 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT2: RscStructuredText
		{
			idc = 16011;
			text = "<t align='right'>0</t>";

			x = 0.461741 * safezoneW + safezoneX;
			y = 0.45776 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class STOCK_TEXT3: RscStructuredText
		{
			idc = 16012;
			text = "<t align='right'>L</t>";

			x = 21.41 * safezoneW + safezoneX;
			y = 10.57 * safezoneH + safezoneY;
			w = 1.50001 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class VALIDATE_BACKGROUND: RscStructuredText
		{
			idc = 16013;

			x = 15 * safezoneW + safezoneX;
			y = 13.5 * safezoneH + safezoneY;
			w = 10.5 * safezoneW;
			h = 2.5 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class VALIDATE_FRAME: RscFrame
		{
			idc = 16014;
			colorText[] = {0,0,0,0.8};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_IMAGE: RscPicture
		{
			idc = 16015;
			text = "\lyeed_IMG\data\housing\actions\action_exit.paa";

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.53014 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class VALIDATE_TEXT: RscStructuredText
		{
			idc = 16016;
			text = "<t align='center' size='1.3'>Remplir</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 16017;
			action = "[] call public_fnc_fuelStation_refuel_veh_validate";
			onMouseEnter = "\
			ctrlShow[16014, false];\
			((findDisplay 16000) displayCtrl 16013) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 16000) displayCtrl 16016) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#000000'>Remplir</t>"";";
			onMouseExit = "\
			ctrlShow[16014, true];\
			((findDisplay 16000) displayCtrl 16013) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 16000) displayCtrl 16016) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#FFFFFF'>Remplir</t>"";";

			x = 6 * safezoneW + safezoneX;
			y = 20* safezoneH + safezoneY;
			w = 10.5 * safezoneW;
			h = 2.5 * safezoneH;
		};
	};
};