class RscDisplayGarage : default_base_dialog
{
	idd = 2800;
	name = "RscDisplayGarage";
	onUnload = "g_action_inUse = false;";
	
	class controlsBackground
	{
		class background_border: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shop\border.paa";

			x = 0.216406 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.572344 * safezoneW;
			h = 0.561 * safezoneH;
		};

		class background_image: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\garage\garage_background.jpg";

			x = 0.254583 * safezoneW + safezoneX;
			y = 0.226 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.473 * safezoneH;
		};
	};
	
	class controls
	{
		class vehicle_background: Life_RscText
		{
			idc = 2801;
			colorBackground[] = {0,0,0,0.4};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class vehicle_frame: Life_RscFrame
		{
			idc = 2809;
			colorText[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.429 * safezoneH;
		};

		class vehicles_list_header: Life_RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Vos véhicules</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class vehicles_list_info: Life_RscListBox
		{
			idc = 2802;
			onLBSelChanged = "_this call public_fnc_garageVehicleSelect;";

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.308 * safezoneH;
		};

		class vehicles_type_frame: Life_RscFrame
		{
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class vehicles_type_info: Life_RscCombo
		{
			idc = 2826;
			onLBSelChanged = "_this call public_fnc_garageTypeSelect;";

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class inventory_list_header: Life_RscStructuredText
		{
			idc = 2803;
			text = "<t align='center'>Coffre</t>";
			colorBackground[] = {0.518,0.518,0.518,0.5};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class inventory_list_info: Life_RscListBox
		{
			idc = 2804;
			colorBackground[] = {0,0,0,0.6};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.143 * safezoneH;
		};

		class garage_title: Life_RscStructuredText
		{
			idc = 2805;
			text = "";
			colorBackground[] = {0,0,0,0.8};

			x = 0.254562 * safezoneW + safezoneX;
			y = 0.22588 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class vehicle_title: Life_RscStructuredText
		{
			idc = 2806;
			text = "";
			colorBackground[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class vehicle_description_header: Life_RscStructuredText
		{
			idc = 2824;
			text = "<t align='center'>DESCRIPTION</t>";
			colorBackground[] = {0.518, 0.518, 0.518, 0.5};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.200052 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class vehicle_description_info: Life_RscStructuredText
		{
			idc = 2825;
			colorBackground[] = {0,0,0,0.6};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.22 * safezoneH;
		};

		class exit_picture: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\global\exit.paa";

			x = 0.259375 * safezoneW + safezoneX;
			y = 0.254407 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class exit_button: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			tooltip = "Fermer";
			
			x = 0.259375 * safezoneW + safezoneX;
			y = 0.254407 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class vehicle_action: Life_RscStructuredText
		{
			idc = 2807;
			text = "<t align='center'>ACTIONS</t>";
			colorBackground[] = {0.518, 0.518, 0.518, 0.5};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_IMAGE_1: life_RscPicture
		{
			idc = 2810;
			text = "\lyeed_IMG\data\garage\garage_get.paa";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_1: RscButtonSilent
		{
			idc = 2811;
			action = "[] call public_fnc_garageVehicleGet;";
			onMouseEnter = "if ((ctrlText 2810) isEqualTo ""\lyeed_IMG\data\garage\garage_get.paa"") then {ctrlSetText[2810,""\lyeed_IMG\data\garage\garage_targetget.paa""]};";
			onMouseExit = "if ((ctrlText 2810) isEqualTo ""\lyeed_IMG\data\garage\garage_targetget.paa"") then {ctrlSetText[2810,""\lyeed_IMG\data\garage\garage_get.paa""]};";
			tooltip = "Récupérer";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_2: life_RscPicture
		{
			idc = 2812;
			text = "\lyeed_IMG\data\garage\garage_insurance.paa";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_2: RscButtonSilent
		{
			idc = 2813;
			action = "[] call public_fnc_garageVehicleAssure;";
			onMouseEnter = "if ((ctrlText 2812) isEqualTo ""\lyeed_IMG\data\garage\garage_insurance.paa"") then {ctrlSetText[2812,""\lyeed_IMG\data\garage\garage_targetinsurance.paa""]};";
			onMouseExit = "if ((ctrlText 2812) isEqualTo ""\lyeed_IMG\data\garage\garage_targetinsurance.paa"") then {ctrlSetText[2812,""\lyeed_IMG\data\garage\garage_insurance.paa""]};";
			tooltip = "Assurer";
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_3: life_RscPicture
		{
			idc = 2814;
			text = "\lyeed_IMG\data\garage\garage_localize.paa";

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
			onMouseEnter = "if ((ctrlText 2814) isEqualTo ""\lyeed_IMG\data\garage\garage_localize.paa"") then {ctrlSetText[2814,""\lyeed_IMG\data\garage\garage_targetlocalize.paa""]};";
			onMouseExit = "if ((ctrlText 2814) isEqualTo ""\lyeed_IMG\data\garage\garage_targetlocalize.paa"") then {ctrlSetText[2814,""\lyeed_IMG\data\garage\garage_localize.paa""]};";
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_4: life_RscPicture
		{
			idc = 2816;
			text = "\lyeed_IMG\data\garage\garage_refuel.paa";

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
			onMouseEnter = "if ((ctrlText 2816) isEqualTo ""\lyeed_IMG\data\garage\garage_refuel.paa"") then {ctrlSetText[2816,""\lyeed_IMG\data\garage\garage_targetrefuel.paa""]};";
			onMouseExit = "if ((ctrlText 2816) isEqualTo ""\lyeed_IMG\data\garage\garage_targetrefuel.paa"") then {ctrlSetText[2816,""\lyeed_IMG\data\garage\garage_refuel.paa""]};";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_5: life_RscPicture
		{
			idc = 2818;
			text = "\lyeed_IMG\data\garage\garage_import.paa";

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
			onMouseEnter = "if ((ctrlText 2818) isEqualTo ""\lyeed_IMG\data\garage\garage_import.paa"") then {ctrlSetText[2818,""\lyeed_IMG\data\garage\garage_targetimport.paa""]};";
			onMouseExit = "if ((ctrlText 2818) isEqualTo ""\lyeed_IMG\data\garage\garage_targetimport.paa"") then {ctrlSetText[2818,""\lyeed_IMG\data\garage\garage_import.paa""]};";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_6: life_RscPicture
		{
			idc = 2820;
			text = "\lyeed_IMG\data\garage\garage_rename.paa";

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
			onMouseEnter = "if ((ctrlText 2820) isEqualTo ""\lyeed_IMG\data\garage\garage_rename.paa"") then {ctrlSetText[2820,""\lyeed_IMG\data\garage\garage_targetrename.paa""]};";
			onMouseExit = "if ((ctrlText 2820) isEqualTo ""\lyeed_IMG\data\garage\garage_targetrename.paa"") then {ctrlSetText[2820,""\lyeed_IMG\data\garage\garage_rename.paa""]};";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_7: life_RscPicture
		{
			idc = 2822;
			text = "\lyeed_IMG\data\garage\garage_sell.paa";

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
			onMouseEnter = "if ((ctrlText 2822) isEqualTo ""\lyeed_IMG\data\garage\garage_sell.paa"") then {ctrlSetText[2822,""\lyeed_IMG\data\garage\garage_targetsell.paa""]};";
			onMouseExit = "if ((ctrlText 2822) isEqualTo ""\lyeed_IMG\data\garage\garage_targetsell.paa"") then {ctrlSetText[2822,""\lyeed_IMG\data\garage\garage_sell.paa""]};";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class distance_header: Life_RscStructuredText
		{
			idc = 2827;
			text = "<t align='center'>Distance</t>";
			colorBackground[] = {0.518,0.518,0.518,0.5};

			x = 0.649531 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class distance_info: Life_RscStructuredText
		{
			idc = 2828;
			text = "";
			colorBackground[] = {0,0,0,0.6};

			x = 0.649531 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.143 * safezoneH;
		};

		class frame_actions: Life_RscFrame
		{
			idc = 2829;
			colorText[] = {0,0,0,0.8};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.407 * safezoneH;
		};
		class frame_inventory: Life_RscFrame
		{
			idc = 2830;
			colorText[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class frame_desc: Life_RscFrame
		{
			idc = 2831;
			colorText[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.242 * safezoneH;
		};
	};
};

class RscDisplayGarageTrunk : default_base_dialog
{
	idd = 30600;
	name = "RscDisplayGarageTrunk";

	class controlsBackground 
	{
		class background_border: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shop\border.paa";

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.293906 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class background_picture: life_RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\shop\back_EAST_vehicles_land.jpg";

			x = 0.370052 * safezoneW + safezoneX;
			y = 0.379926 * safezoneH + safezoneY;
			w = 0.253698 * safezoneW;
			h = 0.241074 * safezoneH;
		};
	};
	
	class controls 
	{
		class info: Life_RscStructuredText
		{
			idc = -1;
			text = "Le coffre de votre véhicule n'est pas vide, le ranger avec sa cargaison coûte<br/><t align='center' color='#FF8000'>Voulez-vous entreposer sa cargaison ?";
			colorBackground[] = {0,0,0,0.6};

			x = 0.369013 * safezoneW + safezoneX;
			y = 0.402852 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class title: Life_RscStructuredText
		{
			idc = 30602;
			text = "";
			colorBackground[] = {0,0,0,0.8};

			x = 0.36849 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.25526 * safezoneW;
			h = 0.0238519 * safezoneH;
		};

		class price_header: Life_RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class price_info: Life_RscStructuredText
		{
			idc = 30601;
			text = "";
			colorBackground[] = {0,0,0,0.6};

			x = 0.463906 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class store_trunk_yes: life_RscButtonMenu_colored 
		{
			idc = -1;
			onButtonClick = "g_storeTrunk = true; closeDialog 0;";
			text = "Oui";

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class store_trunk_no: life_RscButtonMenu_colored 
		{
			idc = -1;
			onButtonClick = "g_storeTrunk = false; closeDialog 0;";
			text = "Non";

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
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

		class name: Life_RscEdit
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
