class RscDisplayVehicleOwner: default_base_dialog
{
	idd = 600;
	name = "RscDisplayVehicleOwner";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			text = "\lyeed_IMG\data\vehicle\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248542 * safezoneW;
			h = 0.33 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			text = "<t size='1.5' align='center'>Carte grise</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class PLATE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Immatriculation</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLATE_INFO: RscStructuredText
		{
			idc = 601;
			colorBackground[] = {0,0,0,0.6};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
	
		class OWNER_HEADER: RscStructuredText
		{
			text = "<t align='center'>Propriétaire</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OWNER_INFO: RscStructuredText
		{
			idc = 602;
			colorBackground[] = {0,0,0,0.6};

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class INSURED_HEADER: RscStructuredText
		{
			text = "<t align='center'>Assuré</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.427812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INSURED_INFO: RscStructuredText
		{
			idc = 603;
			colorBackground[] = {0,0,0,0.6};

			x = 0.427812 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class OPTION_EXIT_FRAME: RscFrame
		{
			idc = 604;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_BACKGROUND: RscText
		{
			idc = 605;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_IMAGE: RscPicture
		{
			idc = 606;
			text = "lyeed_IMG\data\global\option_exit.paa";

			x = 0.352605 * safezoneW + safezoneX;
			y = 0.424074 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_EXIT_BUTTON: RscButtonSilent
		{
			action = "closedialog 0;";
			tooltip = "Quitter";
			onMouseEnter = "((findDisplay 600) displayCtrl 605) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[606,""lyeed_IMG\data\global\option_exit_select.paa""];\
			ctrlShow[604, false];";
			onMouseExit = "((findDisplay 600) displayCtrl 605) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[606,""lyeed_IMG\data\global\option_exit.paa""];\
			ctrlShow[604, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class OPTION_BACK_FRAME: RscFrame
		{
			idc = 607;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_BACK_BACKGROUND: RscText
		{
			idc = 608;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_BACK_IMAGE: RscPicture
		{
			idc = 609;
			text = "lyeed_IMG\data\global\option_back.paa";

			x = 0.352343 * safezoneW + safezoneX;
			y = 0.477593 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_BACK_BUTTON: RscButtonSilent
		{
			action = "[] call public_fnc_interactions_recall;";
			tooltip = "Retour";
			onMouseEnter = "((findDisplay 600) displayCtrl 608) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[609,""lyeed_IMG\data\global\option_back_select.paa""];\
			ctrlShow[607, false];";
			onMouseExit = "((findDisplay 600) displayCtrl 608) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[609,""lyeed_IMG\data\global\option_back.paa""];\
			ctrlShow[607, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};

class RscDisplayVehicleRepair: default_base_dialog
{
	idd = 2900;
	name = "RscDisplayVehicleRepair";
	
	class controlsBackground
	{
		class BACKGROUND: RscPicture
		{
			text = "\lyeed_IMG\data\vehicle\background.jpg";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248542 * safezoneW;
			h = 0.33 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			text = "<t size='1.5' align='center'>Réparation</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: RscFrame
		{
			idc = 2901;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_BACKGROUND: RscText
		{
			idc = 2902;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_IMAGE: RscPicture
		{
			idc = 2903;
			text = "lyeed_IMG\data\global\option_exit.paa";

			x = 0.352605 * safezoneW + safezoneX;
			y = 0.424074 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_EXIT_BUTTON: RscButtonSilent
		{
			action = "closedialog 0;";
			tooltip = "Quitter";
			onMouseEnter = "((findDisplay 2900) displayCtrl 2902) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[2903,""lyeed_IMG\data\global\option_exit_select.paa""];\
			ctrlShow[2901, false];";
			onMouseExit = "((findDisplay 2900) displayCtrl 2902) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[2903,""lyeed_IMG\data\global\option_exit.paa""];\
			ctrlShow[2901, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class OPTION_BACK_FRAME: RscFrame
		{
			idc = 2904;
			colorText[] = {0,0,0,1};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_BACK_BACKGROUND: RscText
		{
			idc = 2905;
			colorBackground[] = {0,0,0,0.6};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_BACK_IMAGE: RscPicture
		{
			idc = 2906;
			text = "lyeed_IMG\data\global\option_back.paa";

			x = 0.352343 * safezoneW + safezoneX;
			y = 0.477593 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_BACK_BUTTON: RscButtonSilent
		{
			action = "[] call public_fnc_interactions_recall;";
			tooltip = "Retour";
			onMouseEnter = "((findDisplay 2900) displayCtrl 2905) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[2906,""lyeed_IMG\data\global\option_back_select.paa""];\
			ctrlShow[2904, false];";
			onMouseExit = "((findDisplay 2900) displayCtrl 2905) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[2906,""lyeed_IMG\data\global\option_back.paa""];\
			ctrlShow[2904, true];";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

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
			x = 0.5 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class INFO_HEADER: RscStructuredText
		{
			text = "<t align='center'>Informations</t>";
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
			onMouseEnter = "\
			ctrlSetText[2911,""lyeed_IMG\data\vehicle\action_repair_select.paa""];\
			ctrlShow[45002, false];\
			((findDisplay 2900) displayCtrl 2912) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 2900) displayCtrl 2914) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Réparer</t>"";";
			onMouseExit = "\
			ctrlSetText[2911,""lyeed_IMG\data\vehicle\action_repair.paa""];\
			ctrlShow[45002, true];\
			((findDisplay 2900) displayCtrl 2912) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 2900) displayCtrl 2914) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Réparer</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
