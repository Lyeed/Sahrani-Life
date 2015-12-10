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
			action = "[] call public_fnc_interactions_recall;";
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
			action = "[] call public_fnc_interactions_recall;";
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
