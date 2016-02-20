class RscDisplayGarageAlysia: RscDisplayDefaultInteraction
{
	idd = 2800;
	name = "RscDisplayGarageAlysia";
	onUnload = "g_action_inUse = false;";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\garage\garage_background.jpg";

			x = 0.257656 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.451 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.257656 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.495 * safezoneH;
		};

		class SELECT_ACTIONS_BACKGROUND: RscStructuredText
		{
			idc = 2808;
			colorBackground[] = {0,0,0,0.6};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.385 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			idc = 2805;

			x = 0.257656 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;			
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.234041 * safezoneW + safezoneX;
			y = 0.26878 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
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
			onLBSelChanged = "_this call AlysiaClient_fnc_garageTypeSelect;";
			colorBackground[] = {0,0,0,1};

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VEHICLES_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.33 * safezoneH;
		};
		class VEHICLES_HEADER: RscStructuredText
		{
			text = "<t align='center'>Vos véhicules</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VEHICLES_LIST: RscListBox
		{
			idc = 2802;
			onLBSelChanged = "_this call AlysiaClient_fnc_garageVehicleSelect;";
			colorBackground[] = {0,0,0,0.8};
			rowHeight = 0.05;

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.308 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 2809;
			colorText[] = {0,0,0,1};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class SELECT_TITLE: RscStructuredText
		{
			idc = 2806;
			colorBackground[] = {0,0,0,1};

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INVENTORY_HEADER: RscStructuredText
		{
			idc = 2803;
			text = "<t align='center'>Coffre</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INVENTORY_INFO: RscListBox
		{
			idc = 2804;
			colorBackground[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class SELECT_DESC_HEADER: RscStructuredText
		{
			idc = 2824;
			text = "<t align='center'>Informations</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_DESC_INFO: RscStructuredText
		{
			idc = 2825;
			colorBackground[] = {0,0,0,0.8};

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class SELECT_ACTIONS_HEADER: RscStructuredText
		{
			idc = 2807;
			text = "<t align='center'>Actions</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_IMAGE_1: RscPicture
		{
			idc = 2810;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_1: RscButtonSilent
		{
			idc = 2811;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_2: RscPicture
		{
			idc = 2812;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_2: RscButtonSilent
		{
			idc = 2813;
			
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_3: RscPicture
		{
			idc = 2814;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_3: RscButtonSilent
		{
			idc = 2815;
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_4: RscPicture
		{
			idc = 2816;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_4: RscButtonSilent
		{
			idc = 2817;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_5: RscPicture
		{
			idc = 2818;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_5: RscButtonSilent
		{
			idc = 2819;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		
		class ACTION_IMAGE_6: RscPicture
		{
			idc = 2820;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_6: RscButtonSilent
		{
			idc = 2821;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class ACTION_IMAGE_7: RscPicture
		{
			idc = 2822;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ACTION_BUTTON_7: RscButtonSilent
		{
			idc = 2823;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
	};
};

class RscDisplayGarageRename: RscDisplayDefaultInteraction
{
	idd = 101000;
	name = "RscDisplayGarageRename";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.199852 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t align='center' size='1.5'>Garage</t>";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;			
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.352187 * safezoneW + safezoneX;
			y = 0.511333 * safezoneH + safezoneY;			
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;			
		};

		class NAME_FRAME: RscFrame
		{
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class NAME_HEADER: RscStructuredText
		{
			text = "<t align='center'>Nom</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class NAME_EDIT: RscEdit
		{
			idc = 101001;

			x = 0.45875 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 101002;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 101003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 101004;
			colorBackground[] = {0,0,0,0};
			text = "<t align='left' size='1.3' color='#FFFFFF'>Changer</t>";

			x = 0.484323 * safezoneW + safezoneX;
			y = 0.632741 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 101005;
			text = "lyeed_IMG\data\garage\store\action_store.paa";

			x = 0.451354 * safezoneW + safezoneX;
			y = 0.627667 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 101006;
			action = "[] spawn AlysiaClient_fnc_garageVehicleRenameProcess;";
			onMouseEnter = "ctrlSetText[101005,""lyeed_IMG\data\garage\store\action_store_select.paa""];ctrlShow[101002, false];((findDisplay 101000) displayCtrl 101003) ctrlSetBackgroundColor [1,1,1,1];((findDisplay 101000) displayCtrl 101004) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Changer</t>"";";
			onMouseExit = "ctrlSetText[101005,""lyeed_IMG\data\garage\store\action_store.paa""];ctrlShow[101002, true];((findDisplay 101000) displayCtrl 101003) ctrlSetBackgroundColor [0,0,0,0.6];((findDisplay 101000) displayCtrl 101004) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Changer</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};

class RscDisplayGarageStore: RscDisplayDefaultInteraction
{
	idd = 35000;
	name = "RscDisplayGarageStore";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.199852 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t align='center' size='1.5'>Garage</t>";

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.248021 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.352187 * safezoneW + safezoneX;
			y = 0.511333 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
		};

		class VEHICLE: RscCombo
		{
			idc = 35001;
			onLBSelChanged = "[] call AlysiaClient_fnc_garageStoreUpdate;";

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
			onCheckedChanged = "[] call AlysiaClient_fnc_garageStoreUpdate;";

			x = 0.385016 * safezoneW + safezoneX;
			y = 0.56886 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class INVENTORY_TEXT: RscStructuredText
		{
			idc = 35003;
			text = "Préserver l'inventaire";
			colorBackground[] = {0,0,0,0};
			
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.57326 * safezoneH + safezoneY;
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

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_STORE_BACKGROUND: RscStructuredText
		{
			idc = 35011;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_STORE_TEXT: RscStructuredText
		{
			idc = 35012;
			colorBackground[] = {0,0,0,0};
			text = "<t align='left' size='1.3' color='#FFFFFF'>Ranger</t>";

			x = 0.484323 * safezoneW + safezoneX;
			y = 0.632741 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_STORE_IMAGE: RscPicture
		{
			idc = 35013;
			text = "lyeed_IMG\data\garage\store\action_store.paa";

			x = 0.451354 * safezoneW + safezoneX;
			y = 0.627667 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_STORE_BUTTON: RscButtonSilent
		{
			idc = 35014;
			action = "[] call AlysiaClient_fnc_garageStoreAction;";
			onMouseEnter = "ctrlSetText[35013,""lyeed_IMG\data\garage\store\action_store_select.paa""];ctrlShow[35010, false];((findDisplay 35000) displayCtrl 35011) ctrlSetBackgroundColor [1,1,1,1];((findDisplay 35000) displayCtrl 35012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Ranger</t>"";";
			onMouseExit = "ctrlSetText[35013,""lyeed_IMG\data\garage\store\action_store.paa""];ctrlShow[35010, true];((findDisplay 35000) displayCtrl 35011) ctrlSetBackgroundColor [0,0,0,0.6];((findDisplay 35000) displayCtrl 35012) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Ranger</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
