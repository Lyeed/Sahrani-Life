class RscDisplaySkullOwner : default_base_dialog
{
	idd = 68000;
	name = "RscDisplaySkullOwner";

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
			text = "\lyeed_IMG\data\skull\background.jpg";
		
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
			idc = -1;
			text = "<t align='center'>Analyse</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.341 * safezoneH;
		};
		class HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Résultats</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INFO: RscStructuredText
		{
			idc = 68001;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class BACK_IMAGE: RscPicture
		{
			idc = 68002;
			text = "\lyeed_IMG\data\skull\back.paa";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BACK_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[] call public_fnc_interactions_recall;";
			tooltip = "Retour";
			onMouseEnter = "ctrlSetText[68002,""\lyeed_IMG\data\skull\back_select.paa""];";
			onMouseExit = "ctrlSetText[68002,""\lyeed_IMG\data\skull\back.paa""];";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};

class RscDisplaySkullInventory: default_base_dialog
{
	idd = 69000;
	name = "RscDisplaySkullInventory";

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
			text = "\lyeed_IMG\data\skull\background.jpg";
		
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
			idc = -1;
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class INVENTORY_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.335 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.341 * safezoneH;
		};
		class INVENTORY_LIST: RscListbox
		{
			idc = 69002;
			colorBackground[] = {0,0,0,0.6};

			x = 0.335 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class TAKE_IMAGE: RscPicture
		{
			idc = 69003;
			text = "\lyeed_IMG\data\skull\inventory\take.paa";

			x = 0.546406 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class TAKE_BUTTON: RscButtonSilent
		{
			idc = 69004;
			action = "[] call public_fnc_skullMenu_search_take;";
			tooltip = "Récupérer";
			onMouseEnter = "ctrlSetText[69003,""\lyeed_IMG\data\skull\inventory\take_select.paa""];";
			onMouseExit = "ctrlSetText[69003,""\lyeed_IMG\data\skull\inventory\take.paa""];";

			x = 0.546406 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class BACK_IMAGE: RscPicture
		{
			idc = 69001;
			text = "\lyeed_IMG\data\skull\back.paa";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class BACK_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[] call public_fnc_interactions_recall;";
			tooltip = "Retour";
			onMouseEnter = "ctrlSetText[69001,""\lyeed_IMG\data\skull\back_select.paa""];";
			onMouseExit = "ctrlSetText[69001,""\lyeed_IMG\data\skull\back.paa""];";

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};
