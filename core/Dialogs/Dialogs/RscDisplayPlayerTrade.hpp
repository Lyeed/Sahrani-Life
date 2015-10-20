#define TITLE_IDC                                     -1
#define PLAYER_FRAME_IDC                              -1
#define PLAYER_HEADER_IDC                             -1
#define PLAYER_INVENTORY_FRAME_IDC                    -1
#define PLAYER_INVENTORY_HEADER_IDC                   -1
#define PLAYER_INVENTORY_LIST_IDC                     10016
#define PLAYER_INVENTORY_ACTION_ADD_SINGLE_IMAGE_IDC  10001
#define PLAYER_INVENTORY_ACTION_ADD_SINGLE_BUTTON_IDC 10002
#define PLAYER_INVENTORY_ACTION_ADD_DOUBLE_IMAGE_IDC  10003
#define PLAYER_INVENTORY_ACTION_ADD_DOUBLE_BUTTON_IDC 10004
#define PLAYER_KEY_FRAME_IDC                          -1
#define PLAYER_KEY_HEADER_IDC                         -1
#define PLAYER_KEY_LIST_IDC                           10005
#define PLAYER_KEY_ACTION_ADD_IMAGE_IDC               10006
#define PLAYER_KEY_ACTION_ADD_BUTTON_IDC              10007
#define PLAYER_MONEY_FRAME_IDC                        -1
#define PLAYER_MONEY_HEADER_IDC                       -1
#define PLAYER_MONEY_EDIT_IDC                         10008
#define PLAYER_MONEY_ACTION_ADD_IMAGE_IDC             10009
#define PLAYER_MONEY_ACTION_ADD_BUTTON_IDC            10010
#define TRADE_FRAME_IDC                               -1
#define TRADE_HEADER_IDC                              -1
#define TRADE_LIST_FRAME_IDC                          -1
#define TRADE_LIST_HEADER_IDC                         -1
#define TRADE_LIST_LIST_IDC                           10011
#define TRADE_LIST_ACTION_REMOVE_IMAGE_IDC            10012
#define TRADE_LIST_ACTION_REMOVE_BUTTON_IDC           10013
#define ACTION_VALIDATE_IMAGE_IDC                     10014
#define ACTION_VALIDATE_BUTTON_IDC                    10015

class RscDisplayPlayerTrade: default_base_dialog
{
	idd = 10000;
	name = "RscDisplayPlayerTrade";

	class controlsBackground 
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.247344 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.505313 * safezoneW;
			h = 0.638 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_interactions\background.jpg";
		
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.464062 * safezoneW;
			h = 0.572 * safezoneH;
		};
	};

	class controls 
	{
		class TITLE: RscStructuredText
		{
			idc = TITLE_IDC;
			text = "<t align='center' size='1.8'>Echange</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.464062 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_FRAME: RscFrame
		{
			idc = PLAYER_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.506 * safezoneH;
		};
		class PLAYER_HEADER: RscStructuredText
		{
			idc = PLAYER_HEADER_IDC;
			text = "<t align='center'>Vous</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class PLAYER_INVENTORY_FRAME: RscFrame
		{
			idc = PLAYER_INVENTORY_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class PLAYER_INVENTORY_HEADER: RscStructuredText
		{
			idc = PLAYER_INVENTORY_HEADER_IDC;
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_INVENTORY_LIST: RscListbox
		{
			idc = PLAYER_INVENTORY_LIST_IDC;
			colorBackground[] = {0,0,0,0.6};

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.187 * safezoneH;
		};
		class PLAYER_INVENTORY_ACTION_ADD_SINGLE_IMAGE: RscPicture
		{
			idc = PLAYER_INVENTORY_ACTION_ADD_SINGLE_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\inventory_add_single.paa";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_INVENTORY_ACTION_ADD_SINGLE_BUTTON: RscButtonSilent
		{
			idc = PLAYER_INVENTORY_ACTION_ADD_SINGLE_BUTTON_IDC;
			action = "[false] call public_fnc_interactionMenu_action_trade_add_inventory;";
			onMouseEnter = "ctrlSetText[10001,""\lyeed_IMG\data\trade\inventory_add_single_select.paa""];";
			onMouseExit = "ctrlSetText[10001,""\lyeed_IMG\data\trade\inventory_add_single.paa""];";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_INVENTORY_ACTION_ADD_DOUBLE_IMAGE: RscPicture
		{
			idc = PLAYER_INVENTORY_ACTION_ADD_DOUBLE_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\inventory_add_double.paa";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_INVENTORY_ACTION_ADD_DOUBLE_BUTTON: RscButtonSilent
		{
			idc = PLAYER_INVENTORY_ACTION_ADD_DOUBLE_BUTTON_IDC;
			action = "[true] call public_fnc_interactionMenu_action_trade_add_inventory;";
			onMouseEnter = "ctrlSetText[10003,""\lyeed_IMG\data\trade\inventory_add_double_select.paa""];";
			onMouseExit = "ctrlSetText[10003,""\lyeed_IMG\data\trade\inventory_add_double.paa""];";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_KEY_FRAME: RscFrame
		{
			idc = PLAYER_KEY_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class PLAYER_KEY_HEADER: RscStructuredText
		{
			idc = PLAYER_KEY_HEADER_IDC;
			text = "<t align='center'>Clefs</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_KEY_LIST: RscListbox
		{
			idc = PLAYER_KEY_LIST_IDC;
			colorBackground[] = {0,0,0,0.6};

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class PLAYER_KEY_ACTION_ADD_IMAGE: RscPicture
		{
			idc = PLAYER_KEY_ACTION_ADD_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\add.paa";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_KEY_ACTION_ADD_BUTTON: RscButtonSilent
		{
			idc = PLAYER_KEY_ACTION_ADD_BUTTON_IDC;
			action = "[] call public_fnc_interactionMenu_action_trade_add_key;";
			onMouseEnter = "ctrlSetText[10006,""\lyeed_IMG\data\trade\add_select.paa""];";
			onMouseExit = "ctrlSetText[10006,""\lyeed_IMG\data\trade\add.paa""];";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_MONEY_FRAME: RscFrame
		{
			idc = PLAYER_MONEY_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PLAYER_MONEY_HEADER: RscStructuredText
		{
			idc = PLAYER_MONEY_HEADER_IDC;
			text = "<t align='center'>Porte feuille</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_MONEY_EDIT: RscEdit
		{
			idc = PLAYER_MONEY_EDIT_IDC;
			text = "0";

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_MONEY_ACTION_ADD_IMAGE: RscPicture
		{
			idc = PLAYER_MONEY_ACTION_ADD_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\add.paa";

			x = 0.433278 * safezoneW + safezoneX;
			y = 0.75806 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class PLAYER_MONEY_ACTION_ADD_BUTTON: RscButtonSilent
		{
			idc = PLAYER_MONEY_ACTION_ADD_BUTTON_IDC;
			action = "[] call public_fnc_interactionMenu_action_trade_add_money;";
			onMouseEnter = "ctrlSetText[10009,""\lyeed_IMG\data\trade\add_select.paa""];";
			onMouseExit = "ctrlSetText[10009,""\lyeed_IMG\data\trade\add.paa""];";

			x = 0.433278 * safezoneW + safezoneX;
			y = 0.75806 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TRADE_FRAME: RscFrame
		{
			idc = TRADE_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.506 * safezoneH;
		};
		class TRADE_HEADER: RscStructuredText
		{
			idc = TRADE_HEADER_IDC;
			text = "<t align='center'>A échanger</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TRADE_LIST_FRAME: RscFrame
		{
			idc = TRADE_LIST_FRAME_IDC;
			colorText[] = {0,0,0,0.8};
			
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class TRADE_LIST_HEADER: RscStructuredText
		{
			idc = TRADE_LIST_HEADER_IDC;
			text = "<t align='center'>Liste</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TRADE_LIST_LIST: RscListbox
		{
			idc = TRADE_LIST_LIST_IDC;
			colorBackground[] = {0,0,0,0.6};

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class TRADE_LIST_ACTION_REMOVE_IMAGE: RscPicture
		{
			idc = TRADE_LIST_ACTION_REMOVE_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\delete.paa";

			x = 0.670156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TRADE_LIST_ACTION_REMOVE_BUTTON: RscButtonSilent
		{
			idc = TRADE_LIST_ACTION_REMOVE_BUTTON_IDC;
			action = "[] call public_fnc_interactionMenu_action_trade_remove;";
			onMouseEnter = "ctrlSetText[10012,""\lyeed_IMG\data\trade\delete_select.paa""];";
			onMouseExit = "ctrlSetText[10012,""\lyeed_IMG\data\trade\delete.paa""];";

			x = 0.670156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_VALIDATE_IMAGE: RscPicture
		{
			idc = ACTION_VALIDATE_IMAGE_IDC;
			text = "\lyeed_IMG\data\trade\validate.paa";

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class ACTION_VALIDATE_BUTTON: RscButtonSilent
		{
			idc = ACTION_VALIDATE_BUTTON_IDC;
			action = "[] call public_fnc_interactionMenu_action_trade_propose;";
			onMouseEnter = "ctrlSetText[10014,""\lyeed_IMG\data\trade\validate_select.paa""];";
			onMouseExit = "ctrlSetText[10014,""\lyeed_IMG\data\trade\validate.paa""];";
			tooltip = "Valider l'échange";

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.099 * safezoneH;
		};
	};
};
