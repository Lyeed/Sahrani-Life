class RscDisplayVehicleOwner: default_interaction_back_dialog
{
	idd = 600;
	name = "RscDisplayVehicleOwner";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\vehicle\background.jpg";
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Carte grise</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME {};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND {};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE {};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON {};

		class PLATE_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLATE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Immatriculation</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLATE_INFO: RscStructuredText
		{
			idc = 601;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class OWNER_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OWNER_HEADER: RscStructuredText
		{
			text = "<t align='center'>Propriétaire</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OWNER_INFO: RscStructuredText
		{
			idc = 602;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class INSURED_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class INSURED_HEADER: RscStructuredText
		{
			text = "<t align='center'>Assuré</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INSURED_INFO: RscStructuredText
		{
			idc = 603;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

class RscDisplayVehicleRepair: default_interaction_back_dialog
{
	idd = 2900;
	name = "RscDisplayVehicleRepair";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\vehicle\background.jpg";
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Réparation</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME {};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND {};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE {};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON {};

		class REPAIR_FRAME: RscFrame
		{
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class REPAIR_HEADER: RscStructuredText
		{
			text = "<t align='center'>Pièces</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.381406 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REPAIR_LIST: RscListBox
		{
			idc = 2907;
			onLBSelChanged = "_this call public_fnc_vehicleMenu_repair_update;";
			colorBackground[] = {0,0,0,0.6};

			x = 0.381406 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.22 * safezoneH;
		};

		class REPAIR_CHECKBOX: RscCheckBox
		{
			idc = 2908;
			onCheckedChanged = "[] call public_fnc_vehicleMenu_repair_fill;";

			x = 0.38285 * safezoneW + safezoneX;
			y = 0.64432 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class REPAIR_CHECKBOX_INFO: RscText
		{
			text = "Afficher seulement les pièces endommagées";

			x = 0.401 * safezoneW + safezoneX;
			y = 0.65224 * safezoneH + safezoneY;
			w = 0.194947 * safezoneW;
			h = 0.0174815 * safezoneH;
		};

		class INFO_FRAME: RscFrame
		{
			idc = 2917;

			x = 0.5 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class INFO_HEADER: RscStructuredText
		{
			idc = 2916;
			colorBackground[] = {0,0,0,0.8};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INFO_TEXT: RscStructuredText
		{
			idc = 2909;
			colorBackground[] = {0,0,0,0.6};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class GLOBAL_FRAME: RscFrame
		{
			x = 0.5 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GLOBAL_HEADER: RscStructuredText
		{
			text = "<t align='center'>Etat général</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0670311 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GLOBAL_INFO: RscStructuredText
		{
			idc = 2910;
			colorBackground[] = {0,0,0,0.6};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_REPAIR_FRAME: RscFrame
		{
			idc = 2911;
			colorText[] = {0,0,0,0.8};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_REPAIR_BACKGROUND: RscStructuredText
		{
			idc = 2912;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_REPAIR_IMAGE: RscPicture
		{
			idc = 2913;
			text = "lyeed_IMG\data\vehicle\action_repair.paa";

			x = 0.508879 * safezoneW + safezoneX;
			y = 0.582387 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_REPAIR_TEXT: RscStructuredText
		{
			idc = 2914;
			text = "<t align='left' size='1.3'>Réparer</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_REPAIR_BUTTON: RscButtonSilent
		{
			idc = 2915;
			action = "[] spawn public_fnc_vehicleMenu_repair_action";
			onMouseEnter = "			ctrlSetText[2913,""lyeed_IMG\data\vehicle\action_repair_select.paa""];			ctrlShow[2911, false];			((findDisplay 2900) displayCtrl 2912) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 2900) displayCtrl 2914) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Réparer</t>"";";
			onMouseExit = "			ctrlSetText[2913,""lyeed_IMG\data\vehicle\action_repair.paa""];			ctrlShow[2911, true];			((findDisplay 2900) displayCtrl 2912) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 2900) displayCtrl 2914) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Réparer</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
