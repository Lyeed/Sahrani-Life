class RscDisplayVehicle: default_base_dialog
{
	idd = 700;
	name = "RscDisplayVehicle";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\vehicle\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 701;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class APP_1_IMAGE: RscPicture
		{
			idc = 702;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_1_BUTTON: RscButtonSilent
		{
			idc = 703;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_2_IMAGE: RscPicture
		{
			idc = 704;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_2_BUTTON: RscButtonSilent
		{
			idc = 705;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_3_IMAGE: RscPicture
		{
			idc = 706;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_3_BUTTON: RscButtonSilent
		{
			idc = 707;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_4_IMAGE: RscPicture
		{
			idc = 708;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_4_BUTTON: RscButtonSilent
		{
			idc = 709;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_5_IMAGE: RscPicture
		{
			idc = 710;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_5_BUTTON: RscButtonSilent
		{
			idc = 711;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_6_IMAGE: RscPicture
		{
			idc = 712;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_6_BUTTON: RscButtonSilent
		{
			idc = 713;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_7_IMAGE: RscPicture
		{
			idc = 714;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_7_BUTTON: RscButtonSilent
		{
			idc = 715;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_8_IMAGE: RscPicture
		{
			idc = 716;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_8_BUTTON: RscButtonSilent
		{
			idc = 717;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_9_IMAGE: RscPicture
		{
			idc = 718;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_9_BUTTON: RscButtonSilent
		{
			idc = 719;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_10_IMAGE: RscPicture
		{
			idc = 720;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_10_BUTTON: RscButtonSilent
		{
			idc = 721;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_11_IMAGE: RscPicture
		{
			idc = 722;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_11_BUTTON: RscButtonSilent
		{
			idc = 723;

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class APP_12_IMAGE: RscPicture
		{
			idc = 724;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class APP_12_BUTTON: RscButtonSilent
		{
			idc = 725;

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class DISTANCE: RscStructuredText
		{
			idc = 726;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.70086 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.066 * safezoneH;
		};
	};
};

class RscDisplayVehicleOwner: default_base_dialog
{
	idd = 600;
	name = "RscDisplayVehicleOwner";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\vehicle\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 601;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class PLATE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Immatriculation</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLATE_INFO: RscStructuredText
		{
			idc = 603;
			colorBackground[] = {0,0,0,0.6};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
	
		class OWNER_HEADER: RscStructuredText
		{
			idc = -1;
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
			idc = -1;
			text = "<t align='center'>Assuré</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.427812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INSURED_INFO: RscStructuredText
		{
			idc = 604;
			colorBackground[] = {0,0,0,0.6};
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class BACK_IMAGE: RscPicture
		{
			idc = 605;
			text = "\lyeed_IMG\data\vehicle\back.paa";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BACK_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[g_interaction_target] spawn public_fnc_vehicleMenu_open;";
			tooltip = "Retour";
			onMouseEnter = "ctrlSetText[605,""\lyeed_IMG\data\vehicle\back_select.paa""];";
			onMouseExit = "ctrlSetText[605,""\lyeed_IMG\data\vehicle\back.paa""];";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};

class RscDisplayVehicleTrunk: default_base_dialog
{
	idd = 500;
	name = "RscDisplayVehicleTrunk";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\vehicle\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};

		class VEHICLE_BAR: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class PLAYER_BAR: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.011 * safezoneH;
		};

		class VEHICLE_PROGRESS_BACKGROUND: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_PROGRESS_BACKGROUND: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 501;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class VEHICLE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class VEHICLE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Véhicule</t>";
			colorBackground[] = {0.5450980392156863,0.7647058823529412,0.2901960784313725,1};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_PROGRESSBAR: Life_RscProgress
		{
			idc = 517;

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_PROGRESS_INFO: RscStructuredText
		{
			idc = 519;
			colorBackground[] = {0,0,0,0};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VEHICLE_WEIGHT_ACTUAL_BAR: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class VEHICLE_WEIGHT_ACTUAL_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>ACTUEL</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_WEIGHT_ACTUAL_INFO: RscStructuredText
		{
			idc = 502;
			text = "";
			colorBackground[] = {0,0,0,0.6};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VEHICLE_WEIGHT_MAX_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>MAX</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_WEIGHT_MAX_INFO: RscStructuredText
		{
			idc = 514;
			text = "";
			colorBackground[] = {0,0,0,0.6};

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VEHICLE_INVENTORY_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLE_INVENTORY_LIST: RscListbox
		{
			idc = 503;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.275 * safezoneH;
		};

		class PLAYER_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class PLAYER_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Vous</t>";
			colorBackground[] = {0.0117647058823529,0.6627450980392157,0.9568627450980392,1};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PLAYER_PROGRESSBAR: Life_RscProgress
		{
			idc = 518;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_PROGRESS_INFO: RscStructuredText
		{
			idc = 520;
			colorBackground[] = {0,0,0,0};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PLAYER_WEIGHT_ACTUAL_BAR: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_WEIGHT_ACTUAL_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>ACTUEL</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_WEIGHT_ACTUAL_INFO: RscStructuredText
		{
			idc = 504;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PLAYER_WEIGHT_MAX_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>MAX</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_WEIGHT_MAX_INFO: RscStructuredText
		{
			idc = 515;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PLAYER_INVENTORY_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_INVENTORY_LIST: RscListbox
		{
			idc = 505;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.275 * safezoneH;
		};

		class ACTION_GET_SINGLE_IMAGE: RscPicture
		{
			idc = 506;
			text = "\lyeed_IMG\data\vehicle\trunk\right_arrow_single.paa";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_GET_SINGLE_BUTTON: RscButtonSilent
		{
			idc = 507;
			action = "[false] call public_fnc_vehicleMenu_inventory_take;";
			tooltip = "Récupérer la quantité minimum";
			onMouseEnter = "ctrlSetText[506,""\lyeed_IMG\data\vehicle\trunk\right_arrow_single_select.paa""];";
			onMouseExit = "ctrlSetText[506,""\lyeed_IMG\data\vehicle\trunk\right_arrow_single.paa""];";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_GET_DOUBLE_IMAGE: RscPicture
		{
			idc = 508;
			text = "\lyeed_IMG\data\vehicle\trunk\right_arrow_double.paa";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_GET_DOUBLE_BUTTON: RscButtonSilent
		{
			idc = 509;
			action = "[true] call public_fnc_vehicleMenu_inventory_take;";
			tooltip = "Récupérer la quantité maximum";
			onMouseEnter = "ctrlSetText[508,""\lyeed_IMG\data\vehicle\trunk\right_arrow_double_select.paa""];";
			onMouseExit = "ctrlSetText[508,""\lyeed_IMG\data\vehicle\trunk\right_arrow_double.paa""];";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_PUT_SINGLE_IMAGE: RscPicture
		{
			idc = 510;
			text = "\lyeed_IMG\data\vehicle\trunk\left_arrow_single.paa";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_PUT_SINGLE_BUTTON: RscButtonSilent
		{
			idc = 511;
			action = "[false] call public_fnc_vehicleMenu_inventory_store;";
			tooltip = "Déposer la quantité minimum";
			onMouseEnter = "ctrlSetText[510,""\lyeed_IMG\data\vehicle\trunk\left_arrow_single_select.paa""];";
			onMouseExit = "ctrlSetText[510,""\lyeed_IMG\data\vehicle\trunk\left_arrow_single.paa""];";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_PUT_DOUBLE_IMAGE: RscPicture
		{
			idc = 512;
			text = "\lyeed_IMG\data\vehicle\trunk\left_arrow_double.paa";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_PUT_DOUBLE_BUTTON: RscButtonSilent
		{
			idc = 513;
			action = "[true] call public_fnc_vehicleMenu_inventory_store;";
			tooltip = "Déposer la quantité maximum";
			onMouseEnter = "ctrlSetText[512,""\lyeed_IMG\data\vehicle\trunk\left_arrow_double_select.paa""];";
			onMouseExit = "ctrlSetText[512,""\lyeed_IMG\data\vehicle\trunk\left_arrow_double.paa""];";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class BACK_IMAGE: RscPicture
		{
			idc = 516;
			text = "\lyeed_IMG\data\vehicle\back.paa";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BACK_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[g_interaction_target] spawn public_fnc_vehicleMenu_open;";
			tooltip = "Retour";
			onMouseEnter = "ctrlSetText[516,""\lyeed_IMG\data\vehicle\back_select.paa""];";
			onMouseExit = "ctrlSetText[516,""\lyeed_IMG\data\vehicle\back.paa""];";

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
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
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\vehicle\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 2904;
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class REPAIR_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.297 * safezoneH;
		};
		class REPAIR_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Pièces du véhicule</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REPAIR_LIST: RscListbox
		{
			idc = 2901;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "_this call public_fnc_vehicleMenu_repair_update;";

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class REPAIR_CHECKBOX: RscCheckbox
		{
			idc = 2910;
			onCheckedChanged = "[] call public_fnc_vehicleMenu_repair_fill;";

			x = 0.341145 * safezoneW + safezoneX;
			y = 0.703556 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class REPAIR_CHECKBOX_INFO: RscText
		{
			idc = -1;
			text = "Afficher seulement les pièces endommagées";
			colorText[] = {1,1,1,1};
			
			x = 0.360266 * safezoneW + safezoneX;
			y = 0.70988 * safezoneH + safezoneY;
			w = 0.194947 * safezoneW;
			h = 0.0174815 * safezoneH;
		};

		class PART_FRAME: RscFrame
		{
			idc = 2911;
			colorText[] = {0,0,0,0.8};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class PART_BACKGROUND_1: RscText
		{
			idc = 2912;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PART_BACKGROUND_2: RscText
		{
			idc = 2913;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.154 * safezoneH;
		};

		class PART_HEADER: RscStructuredText
		{
			idc = 2902;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PART_HEALTH_HEADER: RscStructuredText
		{
			idc = 2914;
			text = "<t align='center'>Etat</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PART_HEALTH_INFO: RscStructuredText
		{
			idc = 2903;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class PART_REPAIR_IMAGE: RscPicture
		{
			idc = 2905;
			text = "\lyeed_IMG\data\vehicle\repair\repair_action.paa";

			x = 0.538569 * safezoneW + safezoneX;
			y = 0.59878 * safezoneH + safezoneY;
			w = 0.0349479 * safezoneW;
			h = 0.0612592 * safezoneH;
		};
		class PART_REPAIR_BUTTON: RscButtonSilent
		{
			idc = 2906;
			action = "[] spawn public_fnc_vehicleMenu_repair_action;";
			tooltip = "Réparer";
			onMouseEnter = "if ((ctrlText 2905) isEqualTo ""\lyeed_IMG\data\vehicle\repair\repair_action.paa"") then {ctrlSetText[2905,""\lyeed_IMG\data\repair\repair_action_select.paa""]};";
			onMouseExit = "if ((ctrlText 2905) isEqualTo ""\lyeed_IMG\data\vehicle\repair\repair_action_select.paa"") then {ctrlSetText[2905,""\lyeed_IMG\data\repair\repair_action.paa""]};";

			x = 0.538569 * safezoneW + safezoneX;
			y = 0.59878 * safezoneH + safezoneY;
			w = 0.0349479 * safezoneW;
			h = 0.0612592 * safezoneH;
		};

		class PART_TOOL_HEADER: RscStructuredText
		{
			idc = 2915;
			text = "<t align='center'>Outils</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PART_TOOL_INFO: RscStructuredText
		{
			idc = 2907;
			colorBackground[] = {0,0,0,0.6};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PART_ITEM_HEADER: RscStructuredText
		{
			idc = 2916;
			text = "<t align='center'>Pièce de rechange</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PART_ITEM_INFO: RscStructuredText
		{
			idc = 2908;
			colorBackground[] = {0,0,0,0};

			x = 0.5 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class REPAIR_GLOBAL_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Etat général</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REPAIR_GLOBAL_INFO: RscStructuredText
		{
			idc = 2909;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REPAIR_GLOBAL_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class BACK_IMAGE: RscPicture
		{
			idc = 2917;
			text = "\lyeed_IMG\data\vehicle\back.paa";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BACK_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[g_interaction_target] spawn public_fnc_vehicleMenu_open;";
			tooltip = "Retour";
			onMouseEnter = "ctrlSetText[2917,""\lyeed_IMG\data\vehicle\back_select.paa""];";
			onMouseExit = "ctrlSetText[2917,""\lyeed_IMG\data\vehicle\back.paa""];";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};