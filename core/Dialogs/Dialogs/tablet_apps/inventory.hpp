#define INVENTORY_WEIGHT_IDC				8000
#define INVENTORY_LIST_IDC					8001
#define INVENTORY_LIST_FRAME_IDC			8002
#define INVENTORY_INFO_HEADER_IDC			8003
#define INVENTORY_INFO_BACKGROUND_IDC		8004
#define INVENTORY_EDIT_IDC					8005
#define INVENTORY_UNITY_WEIGHT_HEADER_IDC	8006
#define INVENTORY_UNITY_WEIGHT_INFO_IDC		8007
#define INVENTORY_GLOBAL_WEIGHT_HEADER_IDC	8008
#define INVENTORY_GLOBAL_WEIGHT_INFO_IDC	8009
#define INVENTORY_USE_IMAGE_IDC				8010
#define INVENTORY_USE_BUTTON_IDC			8011
#define INVENTORY_DELETE_IMAGE_IDC			8012
#define INVENTORY_DELETE_BUTTON_IDC			8013

INVENTORY_BACKGROUND = "\lyeed\images\back.jpg";
INVENTORY_IDCS[] = 
{
	INVENTORY_WEIGHT_IDC,
	INVENTORY_LIST_IDC,
	INVENTORY_LIST_FRAME_IDC
};

class INVENTORY_WEIGHT: RscStructuredText
{
	idc = INVENTORY_WEIGHT_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class INVENTORY_LIST: RscListbox
{
	idc = INVENTORY_LIST_IDC;
	onLBSelChanged = "_this call public_fnc_APP_inventory_Update;";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.275 * safezoneH;
};
class INVENTORY_LIST_FRAME: RscFrame
{
	idc = INVENTORY_LIST_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.275 * safezoneH;
};

class INVENTORY_INFO_HEADER: RscFrame
{
	idc = INVENTORY_INFO_HEADER_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.297 * safezoneH;
};
class INVENTORY_INFO_BACKGROUND: RscText
{
	idc = INVENTORY_INFO_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.297 * safezoneH;
};

class INVENTORY_EDIT: RscEdit
{
	idc = INVENTORY_EDIT_IDC;
	text = "1";

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};

class INVENTORY_UNITY_WEIGHT_HEADER: RscStructuredText
{
	idc = INVENTORY_UNITY_WEIGHT_HEADER_IDC;
	text = "<t align='center'>Poids unitaire</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class INVENTORY_UNITY_WEIGHT_INFO: RscStructuredText
{
	idc = INVENTORY_UNITY_WEIGHT_INFO_IDC;
	text = "";
	colorBackground[] = {-1,-1,-1,0};
	
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};

class INVENTORY_GLOBAL_WEIGHT_HEADER: RscStructuredText
{
	idc = INVENTORY_GLOBAL_WEIGHT_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	text = "<t align='center'>Poids global</t>";

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class INVENTORY_GLOBAL_WEIGHT_INFO: RscStructuredText
{
	idc = INVENTORY_GLOBAL_WEIGHT_INFO_IDC;
	text = "";
	colorBackground[] = {-1,-1,-1,0};
	
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};

class INVENTORY_USE_IMAGE: RscPicture
{
	idc = INVENTORY_USE_IMAGE_IDC;
	text = "\lyeed\images\inventory_use.paa";

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};
class INVENTORY_USE_BUTTON : RscButtonSilent
{
	idc = INVENTORY_USE_BUTTON_IDC;
	action = "[] call public_fnc_useItem;";
	tooltip = "Utiliser";

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};

class INVENTORY_DELETE_IMAGE: RscPicture
{
	idc = INVENTORY_DELETE_IMAGE_IDC;
	text = "\lyeed\images\inventory_delete.paa";

	x = 0.62375 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};
class INVENTORY_DELETE_BUTTON : RscButtonSilent
{
	idc = INVENTORY_DELETE_BUTTON_IDC;
	action = "[] call public_fnc_removeItem;";
	tooltip = "Supprimer";

	x = 0.62375 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};