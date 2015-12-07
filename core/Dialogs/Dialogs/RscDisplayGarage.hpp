class RscDisplayGarageAlysia: default_base_dialog
{
	idd = 2800;
	name = "RscDisplayGarageAlysia";
	onUnload = "g_action_inUse = false;";
	
	class controlsBackground
	{
		class FRAME: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.231354 * safezoneW + safezoneX;
			y = 0.196519 * safezoneH + safezoneY;
			w = 0.540885 * safezoneW;
			h = 0.53263 * safezoneH;
		};

		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\garage\garage_background.jpg";

			x = 0.254 * safezoneW + safezoneX;
			y = 0.22588 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.473 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 2805;
			text = "";
			colorBackground[] = {0,0,0,0.8};

			x = 0.254 * safezoneW + safezoneX;
			y = 0.22588 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.0210741 * safezoneH;
		};

		class EXIT_IMAGE: RscPicture
		{
			idc = 2832;
			text = "\lyeed_IMG\data\garage\close.paa";

			x = 0.259375 * safezoneW + safezoneX;
			y = 0.254407 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			tooltip = "Quitter";
			onMouseEnter = "ctrlSetText[2832,""\lyeed_IMG\data\garage\close_select.paa""];";
			onMouseExit = "ctrlSetText[2832,""\lyeed_IMG\data\garage\close.paa""];";
			
			x = 0.259375 * safezoneW + safezoneX;
			y = 0.254407 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TYPE_FRAME: RscFrame
		{
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TYPE_LIST: RscCombo
		{
			idc = 2826;
			onLBSelChanged = "_this call public_fnc_garageTypeSelect;";

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VEHICLES_FRAME: RscFrame
		{
			colorText[] = {0,0,0,0.8};
			
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.33 * safezoneH;
		};
		class VEHICLES_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Vos véhicules</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLES_LIST: RscListBox
		{
			idc = 2802;
			onLBSelChanged = "_this call public_fnc_garageVehicleSelect;";

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.308 * safezoneH;
		};

		class SELECT_BACKGROUND: RscText
		{
			idc = 2801;
			colorBackground[] = {0,0,0,0.4};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class SELECT_FRAME: RscFrame
		{
			idc = 2809;
			colorText[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class SELECT_TITLE: RscStructuredText
		{
			idc = 2806;
			text = "";
			colorBackground[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SELECT_INVENTORY_FRAME: RscFrame
		{
			idc = 2830;
			colorText[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class SELECT_INVENTORY_HEADER: RscStructuredText
		{
			idc = 2803;
			text = "<t align='center'>Coffre</t>";
			colorBackground[] = {0.518,0.518,0.518,0.5};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INVENTORY_INFO: RscListBox
		{
			idc = 2804;
			colorBackground[] = {0,0,0,0.6};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.143 * safezoneH;
		};

		class SELECT_DESC_FRAME: RscFrame
		{
			idc = 2831;
			colorText[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class SELECT_DESC_HEADER: RscStructuredText
		{
			idc = 2824;
			text = "<t align='center'>DESCRIPTION</t>";
			colorBackground[] = {0.518, 0.518, 0.518, 0.5};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.200052 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_DESC_INFO: RscStructuredText
		{
			idc = 2825;
			colorBackground[] = {0,0,0,0.6};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.22 * safezoneH;
		};

		class SELECT_DISTANCE_HEADER: RscStructuredText
		{
			idc = 2827;
			text = "<t align='center'>Distance</t>";
			colorBackground[] = {0.518,0.518,0.518,0.5};

			x = 0.649531 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_DISTANCE_INFO: RscStructuredText
		{
			idc = 2828;
			text = "";
			colorBackground[] = {0,0,0,0.6};

			x = 0.649531 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.143 * safezoneH;
		};

		class SELECT_ACTIONS_FRAME: RscFrame
		{
			idc = 2829;
			colorText[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.407 * safezoneH;
		};
		class SELECT_ACTIONS_HEADER: RscStructuredText
		{
			idc = 2807;
			text = "<t align='center'>ACTIONS</t>";
			colorBackground[] = {0.518, 0.518, 0.518, 0.5};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_IMAGE_1: RscPicture
		{
			idc = 2810;
			text = "\lyeed_IMG\data\garage\action_get.paa";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_1: RscButtonSilent
		{
			idc = 2811;
			action = "[] call public_fnc_garageVehicleGet;";
			onMouseEnter = "if ((ctrlText 2810) isEqualTo ""\lyeed_IMG\data\garage\action_get.paa"") then {ctrlSetText[2810,""\lyeed_IMG\data\garage\action_get_select.paa""]};";
			onMouseExit = "if ((ctrlText 2810) isEqualTo ""\lyeed_IMG\data\garage\action_get_select.paa"") then {ctrlSetText[2810,""\lyeed_IMG\data\garage\action_get.paa""]};";
			tooltip = "Récupérer";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_2: RscPicture
		{
			idc = 2812;
			text = "\lyeed_IMG\data\garage\action_insurrance.paa";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_2: RscButtonSilent
		{
			idc = 2813;
			action = "[] call public_fnc_garageVehicleAssure;";
			onMouseEnter = "if ((ctrlText 2812) isEqualTo ""\lyeed_IMG\data\garage\action_insurrance.paa"") then {ctrlSetText[2812,""\lyeed_IMG\data\garage\action_insurrance_select.paa""]};";
			onMouseExit = "if ((ctrlText 2812) isEqualTo ""\lyeed_IMG\data\garage\action_insurrance_select.paa"") then {ctrlSetText[2812,""\lyeed_IMG\data\garage\action_insurrance.paa""]};";
			tooltip = "Assurer";
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_3: RscPicture
		{
			idc = 2814;
			text = "\lyeed_IMG\data\garage\action_localize.paa";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_3: RscButtonSilent
		{
			idc = 2815;
			action = "[] spawn public_fnc_garageVehicleFind;";
			tooltip = "Afficher sur la carte le garage contenant le véhicule";
			onMouseEnter = "if ((ctrlText 2814) isEqualTo ""\lyeed_IMG\data\garage\action_localize.paa"") then {ctrlSetText[2814,""\lyeed_IMG\data\garage\action_localize_select.paa""]};";
			onMouseExit = "if ((ctrlText 2814) isEqualTo ""\lyeed_IMG\data\garage\action_localize_select.paa"") then {ctrlSetText[2814,""\lyeed_IMG\data\garage\action_localize.paa""]};";
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_4: RscPicture
		{
			idc = 2816;
			text = "\lyeed_IMG\data\garage\action_refuel.paa";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_4: RscButtonSilent
		{
			idc = 2817;
			action = "[] call public_fnc_garageVehicleRefuel;";
			tooltip = "Faire le plein";
			onMouseEnter = "if ((ctrlText 2816) isEqualTo ""\lyeed_IMG\data\garage\action_refuel.paa"") then {ctrlSetText[2816,""\lyeed_IMG\data\garage\action_refuel_select.paa""]};";
			onMouseExit = "if ((ctrlText 2816) isEqualTo ""\lyeed_IMG\data\garage\action_refuel_select.paa"") then {ctrlSetText[2816,""\lyeed_IMG\data\garage\action_refuel.paa""]};";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_5: RscPicture
		{
			idc = 2818;
			text = "\lyeed_IMG\data\garage\action_import.paa";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_5: RscButtonSilent
		{
			idc = 2819;
			action = "[] spawn public_fnc_garageVehicleImport;";
			tooltip = "Importer dans ce garage";
			onMouseEnter = "if ((ctrlText 2818) isEqualTo ""\lyeed_IMG\data\garage\action_import.paa"") then {ctrlSetText[2818,""\lyeed_IMG\data\garage\action_import_select.paa""]};";
			onMouseExit = "if ((ctrlText 2818) isEqualTo ""\lyeed_IMG\data\garage\action_import_select.paa"") then {ctrlSetText[2818,""\lyeed_IMG\data\garage\action_import.paa""]};";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_6: RscPicture
		{
			idc = 2820;
			text = "\lyeed_IMG\data\garage\action_rename.paa";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_6: RscButtonSilent
		{
			idc = 2821;
			action = "[] spawn public_fnc_garageVehicleRenameStart;";
			tooltip = "Renommer";
			onMouseEnter = "if ((ctrlText 2820) isEqualTo ""\lyeed_IMG\data\garage\action_rename.paa"") then {ctrlSetText[2820,""\lyeed_IMG\data\garage\action_rename_select.paa""]};";
			onMouseExit = "if ((ctrlText 2820) isEqualTo ""\lyeed_IMG\data\garage\action_rename_select.paa"") then {ctrlSetText[2820,""\lyeed_IMG\data\garage\action_rename.paa""]};";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_7: RscPicture
		{
			idc = 2822;
			text = "\lyeed_IMG\data\garage\action_sell.paa";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_7: RscButtonSilent
		{
			idc = 2823;
			action = "[] spawn public_fnc_garageVehicleSell;";
			tooltip = "Vendre";
			onMouseEnter = "if ((ctrlText 2822) isEqualTo ""\lyeed_IMG\data\garage\action_sell.paa"") then {ctrlSetText[2822,""\lyeed_IMG\data\garage\action_sell_select.paa""]};";
			onMouseExit = "if ((ctrlText 2822) isEqualTo ""\lyeed_IMG\data\garage\action_sell_select.paa"") then {ctrlSetText[2822,""\lyeed_IMG\data\garage\action_sell.paa""]};";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
	};
};

class RscDisplayGarageRename : default_base_dialog
{
	idd = 555990;
	name = "RscDisplayGarageRename";
	
	class controlsBackground 
	{
		class background_border: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shop\border.paa";

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.293906 * safezoneW;
			h = 0.264 * safezoneH;
		};
		class background_picture: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shop\back_EAST_vehicles_land.jpg";

			x = 0.370062 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.254739 * safezoneW;
			h = 0.220926 * safezoneH;
		};
	};
	
	class controls
	{
		class title: Life_RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Personnalisation du garage</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.368516 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.25526 * safezoneW;
			h = 0.023852 * safezoneH;
		};

		class validate: life_RscButtonMenu_colored
		{
			idc = -1;
			text = "Valider";
			onButtonClick = "[] call public_fnc_garageVehicleRenameProcess;";

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class exit_image: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\global\exit.paa";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class exit_button: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			tooltip = "Fermer";
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class name: RscEdit
		{
			idc = 555991;
			text = "";

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

class RscDisplayGarageStore: default_base_dialog
{
	idd = 35000;
	name = "RscDisplayGarageStore";
	
	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "#(argb,8,8,3)color(0.203921568627451,0.596078431372549,0.8588235294117647,1)";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.199852 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			text = "<t align='center' size='1.5'>Garage</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VEHICLE: RscCombo
		{
			idc = 35001;
			onLBSelChanged = "[] call public_fnc_garageStoreUpdate;";

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class INVENTORY_FRAME: RscFrame
		{
			idc = 35007;

			x = 0.385208 * safezoneW + safezoneX;
			y = 0.567741 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class INVENTORY_BACKGROUND: RscText
		{
			idc = 35008;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.385208 * safezoneW + safezoneX;
			y = 0.567741 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class INVENTORY_CHECKBOX: RscCheckbox
		{
			idc = 35002;
			onCheckedChanged = "[] call public_fnc_garageStoreUpdate;";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class INVENTORY_TEXT: RscStructuredText
		{
			idc = 35003;
			text = "Préserver l'inventaire";
			colorBackground[] = {0,0,0,0};
			
			x = 0.403062 * safezoneW + safezoneX;
			y = 0.5704 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PRICE_HEADER: RscStructuredText
		{
			idc = 35004;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.570296 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_INFO: RscStructuredText
		{
			idc = 35005;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.570296 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_FRAME: RscFrame
		{
			idc = 35006;
			colorText[] = {0,0,0,1};
			
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.570296 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_STORE_FRAME: RscFrame
		{
			idc = 35010;

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_STORE_BACKGROUND: RscStructuredText
		{
			idc = 35011;
			colorBackground[] = {0,0,0,0.6};

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_STORE_TEXT: RscStructuredText
		{
			idc = 35012;
			colorBackground[] = {0,0,0,0};
			text = "<t align='left' size='1.3' color='#FFFFFF'>Ranger</t>";

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_STORE_IMAGE: RscPicture
		{
			idc = 35013;
			text = "\lyeed_IMG\data\garage\store\action_store.paa";

			x = 0.38963 * safezoneW + safezoneX;
			y = 0.615831 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_STORE_BUTTON: RscButtonSilent
		{
			idc = 35014;
			action = "[] call public_fnc_garageStoreAction;";
			onMouseEnter = "\
			ctrlSetText[35013,""\lyeed_IMG\data\garage\store\action_store_select.paa""];\
			ctrlShow[35010, false];\
			((findDisplay 35000) displayCtrl 35011) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 35000) displayCtrl 35012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Ranger</t>"";";
			onMouseExit = "\
			ctrlSetText[35013,""\lyeed_IMG\data\garage\store\action_store.paa""];\
			ctrlShow[35010, true];\
			((findDisplay 35000) displayCtrl 35011) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 35000) displayCtrl 35012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Ranger</t>"";";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 35015;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_BACKGROUND: RscStructuredText
		{
			idc = 35016;
			colorBackground[] = {0,0,0,0.6};

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 35017;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {0,0,0,0};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 35018;
			text = "\lyeed_IMG\data\garage\store\action_exit.paa";

			x = 0.507812 * safezoneW + safezoneX;
			y = 0.615741 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = 35019;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[35018,""\lyeed_IMG\data\garage\store\action_exit_select.paa""];\
			ctrlShow[35015, false];\
			((findDisplay 35000) displayCtrl 35016) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 35000) displayCtrl 35017) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[35018,""\lyeed_IMG\data\garage\store\action_exit.paa""];\
			ctrlShow[35015, true];\
			((findDisplay 35000) displayCtrl 35016) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 35000) displayCtrl 35017) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
