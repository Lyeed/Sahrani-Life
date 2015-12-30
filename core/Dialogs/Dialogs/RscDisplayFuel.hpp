class RscDisplayFuelStation: default_interaction_back_dialog
{	
	idd = 16000;
	name = "RscDisplayFuelStation";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.210519 * safezoneH;
		};
		class FRAME: FRAME
		{
			idc = 1800;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248542 * safezoneW;
			h = 0.244816 * safezoneH;
			colorText[] = {0,0,0,1};
		};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Pompe à essence</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};

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
		};
		class FUEL_TEXT: RscStructuredText
		{
			idc = 16006;
			text = "Choix du carburant";
			colorBackground[] = {0,0,0,0};

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.400074 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_TEXT: RscStructuredText
		{
			idc = 16007;
			text = "Prix/L";
			colorBackground[] = {0,0,0,0};

			x = 0.561354 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_TEXT2: RscStructuredText
		{
			idc = 16008;
			text = "<t size ='2' align='center'>0</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.560844 * safezoneW + safezoneX;
			y = 0.42806 * safezoneH + safezoneY;
			w = 0.0341666 * safezoneW;
			h = 0.0522223 * safezoneH;
		};
		class PRICE_TEXT3: RscStructuredText
		{
			idc = 16009;
			text = "<t size ='0.7' align='center'>Kn</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.579999 * safezoneW + safezoneX;
			y = 0.463111 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_TEXT: RscStructuredText
		{
			idc = 16010;
			text = "<t align='right'>Disponibilité</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.394812 * safezoneW + safezoneX;
			y = 0.45886 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_TEXT2: RscStructuredText
		{
			idc = 16011;
			text = "<t align='right'>0</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.461741 * safezoneW + safezoneX;
			y = 0.45776 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		/*class STOCK_TEXT3: RscStructuredText
		{
			idc = 16012;
			text = "<t align='right'>L</t>";
			colorBackground[] = {0,0,0,0};

			x = 21.41 * safezoneW + safezoneX;
			y = 10.57 * safezoneH + safezoneY;
			w = 1.50001 * safezoneW;
			h = 1 * safezoneH;
		};*/
		class VALIDATE_BACKGROUND: RscStructuredText
		{
			idc = 16013;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_FRAME: RscFrame
		{
			idc = 16014;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_TEXT: RscStructuredText
		{
			idc = 16016;
			text = "<t align='center' size='1.5'>Quitter</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VALIDATE_IMAGE: RscPicture
		{
			idc = 16015;
			text = "lyeed_IMG\data\housing\actions\action_exit.paa";

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.53014 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375186 * safezoneH;
		};

		class VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 16017;
			action = "[] call public_fnc_fuelStation_refuel_veh_validate;";
			onMouseEnter = "\
			ctrlShow[16014, false];\
			((findDisplay 16000) displayCtrl 16013) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 16000) displayCtrl 16016) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#000000'>Remplir</t>"";";
			onMouseExit = "\
			ctrlShow[16014, true];\
			((findDisplay 16000) displayCtrl 16013) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 16000) displayCtrl 16016) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#FFFFFF'>Remplir</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};

class RscDisplayFuelRefuel: default_interaction_back_dialog
{	
	idd = 17000;
	name = "RscDisplayFuelRefuel";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.210519 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.249062 * safezoneW;
			h = 0.242926 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Pompe à essence</t>";
		};

		class FRAME_PRICE: RscFrame
		{
			idc = 17005;

			x = 0.542591 * safezoneW + safezoneX;
			y = 0.42762 * safezoneH + safezoneY;
			w = 0.0619791 * safezoneW;
			h = 0.0568517 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};

		class FUEL_TEXT: RscStructuredText
		{
			idc = 17006;
			text = "";
			colorBackground[] = {0,0,0,0};

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.40012 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_TEXT: RscStructuredText
		{
			idc = 17007;
			text = "Montant Total";
			colorBackground[] = {0,0,0,0};

			x = 0.540834 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_TEXT2: RscStructuredText
		{
			idc = 17008;
			text = "<t size ='2' align='center'>250</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.543416 * safezoneW + safezoneX;
			y = 0.42806 * safezoneH + safezoneY;
			w = 0.0604167 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class STOCK_TEXT: RscStructuredText
		{
			idc = 17009;
			text = "<t align='right'>Disponnibilité</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.394812 * safezoneW + safezoneX;
			y = 0.45886 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_TEXT2: RscStructuredText
		{
			idc = 17010;
			text = "<t align='right'>0</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.502269 * safezoneW + safezoneX;
			y = 0.45776 * safezoneH + safezoneY;
			w = 0.0290625 * safezoneW;
			h = 0.022926 * safezoneH;
		};
		/*class STOCK_TEXT3: RscStructuredText
		{
			idc = 17011;
			text = "<t align='right'>L</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.514541 * safezoneW + safezoneX;
			y = 0.45754 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.022 * safezoneH;
		};*/
		class PRICE_TEXT3: RscStructuredText
		{
			idc = 17012;
			text = "<t size ='0.7' align='center'>Kn</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.587347 * safezoneW + safezoneX;
			y = 0.46304 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PROGRESS_BAR: RscProgress
		{
			idc = 17013;
			colorBackground[] = {0,0,0,0};

			x = 0.400522 * safezoneW + safezoneX;
			y = 0.42963 * safezoneH + safezoneY;
			w = 0.130989 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PROGRESS_STATE: RscStructuredText
		{
			idc = 17014;
			colorBackground[] = {0,0,0,0};

			/*x = 0.425833 * safezoneW + safezoneX;
			y = 0.429482 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;*/
			x = 0.400522 * safezoneW + safezoneX;
			y = 0.42963 * safezoneH + safezoneY;
			w = 0.130989 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VALIDATE_BACKGROUND: RscStructuredText
		{
			idc = 17015;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_FRAME: RscFrame
		{
			idc = 17016;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_IMAGE: RscPicture
		{
			idc = 17017;
			text = "lyeed_IMG\data\housing\actions\action_exit.paa";

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.53014 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class VALIDATE_TEXT: RscStructuredText
		{
			idc = 17018;
			text = "<t align='center' size='1.5'>Arrêter</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 17019;
			action = "closedialog 0;";
			onMouseEnter = "\
			ctrlShow[16016, false];\
			ctrlSetText[17017,""lyeed_IMG\data\auctionHouse\actions\action_exit_select.paa""];\
			((findDisplay 16000) displayCtrl 17015) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 16000) displayCtrl 17017) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#000000'>Arrêter</t>"";";
			onMouseExit = "\
			ctrlShow[16016, true];\
			ctrlSetText[17017,""lyeed_IMG\data\auctionHouse\actions\action_exit.paa""];\
			((findDisplay 16000) displayCtrl 17015) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 16000) displayCtrl 17017) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#FFFFFF'>Arrêter</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};