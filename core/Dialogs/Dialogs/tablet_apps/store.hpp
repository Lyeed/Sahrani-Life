#define STORE_BACK_IMAGE_IDC   8105
#define STORE_BACK_BUTTON_IDC  8106

class STORE_BACK_IMAGE: RscPicture
{
	idc = STORE_BACK_IMAGE_IDC;
	text = "lyeed_IMG\data\global\back.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class STORE_BACK_BUTTON: RscButtonSilent
{
	idc = STORE_BACK_BUTTON_IDC;
	action = "[""STORE""] spawn public_fnc_tabletApp;";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

// Store category
#define STORE_CATEGORY_HEADER_IDC   8100
#define STORE_CATEGORY_INFO_IDC     8101
#define STORE_CATEGORY_FRAME_IDC    8102

STORE_BACKGROUND = "lyeed\images\back_store.jpg";
STORE_IDCS[] =
{
	STORE_CATEGORY_HEADER_IDC,
	STORE_CATEGORY_INFO_IDC,
	STORE_CATEGORY_FRAME_IDC
};

class STORE_CATEGORY_HEADER: RscStructuredText
{
	idc = STORE_CATEGORY_HEADER_IDC;
	text = "<t align='center'>Catégories</t";
	colorBackground[] = {0,0,0,0.8};

	x = 0.412344 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_CATEGORY_INFO: RscListbox
{
	idc = STORE_CATEGORY_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	onLBSelChanged = "[(_this select 0) lbData (_this select 1)] spawn public_fnc_tabletApp;";

	x = 0.412344 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.209 * safezoneH;
};
class STORE_CATEGORY_FRAME: RscFrame
{
	idc = STORE_CATEGORY_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.412344 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.231 * safezoneH;
};

// Licenses
#define STORE_LICENSES_LIST_HEADER_IDC               8112
#define STORE_LICENSES_LIST_INFO_IDC                 8113
#define STORE_LICENSES_LIST_FRAME_IDC                8114
#define STORE_LICENSES_SELECTED_HEADER_IDC           8115
#define STORE_LICENSES_SELECTED_INFO_IDC             8116
#define STORE_LICENSES_SELECTED_ACTION_IMAGE_IDC     8117
#define STORE_LICENSES_SELECTED_ACTION_BUTTON_IDC    8118
#define STORE_LICENSES_SELECTED_BACKGROUND_IDC       8119
#define STORE_LICENSES_SELECTED_FRAME_IDC            8120

STORE_LICENSES_BACKGROUND = "lyeed\images\back_store_licenses.jpg";
STORE_LICENSES_IDCS[] =
{
	STORE_LICENSES_LIST_HEADER_IDC,
	STORE_LICENSES_LIST_INFO_IDC,
	STORE_LICENSES_LIST_FRAME_IDC,
	STORE_LICENSES_SELECTED_HEADER_IDC,
	STORE_LICENSES_SELECTED_INFO_IDC,
	STORE_LICENSES_SELECTED_ACTION_IMAGE_IDC,
	STORE_LICENSES_SELECTED_ACTION_BUTTON_IDC,
	STORE_LICENSES_SELECTED_BACKGROUND_IDC,
	STORE_LICENSES_SELECTED_FRAME_IDC,
	STORE_BACK_IMAGE_IDC,
	STORE_BACK_BUTTON_IDC
};

class STORE_LICENSES_LIST_FRAME: RscFrame
{
	idc = STORE_LICENSES_LIST_FRAME_IDC;
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.308 * safezoneH;
	colorText[] = {0,0,0,0.8};
};
class STORE_LICENSES_LIST_HEADER: RscStructuredText
{
	idc = STORE_LICENSES_LIST_HEADER_IDC;
	text = "<t align='center'>Licences</t";
	colorBackground[] = {0,0,0,0.8};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_LICENSES_LIST_INFO: RscListbox
{
	idc = STORE_LICENSES_LIST_INFO_IDC;
	onLBSelChanged = "_this call public_fnc_APP_store_licenses_Update;";
	colorBackground[] = {0,0,0,0.6};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.286 * safezoneH;
};

class STORE_LICENSES_SELECTED_BACKGROUND: RscText
{
	idc = STORE_LICENSES_SELECTED_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.165 * safezoneH;
};
class STORE_LICENSES_SELECTED_FRAME: RscFrame
{
	idc = STORE_LICENSES_SELECTED_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.165 * safezoneH;
};
class STORE_LICENSES_SELECTED_HEADER: RscStructuredText
{
	idc = STORE_LICENSES_SELECTED_HEADER_IDC;
	text = "<t align='center'>Prix</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0670311 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_LICENSES_SELECTED_INFO: RscStructuredText
{
	idc = STORE_LICENSES_SELECTED_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.0670311 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_LICENSES_SELECTED_ACTION_IMAGE: RscPicture
{
	idc = STORE_LICENSES_SELECTED_ACTION_IMAGE_IDC;
	text = "lyeed\images\store_licenses_buy.paa";

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};
class STORE_LICENSES_SELECTED_ACTION_BUTTON: RscButtonSilent
{
	idc = STORE_LICENSES_SELECTED_ACTION_BUTTON_IDC;
	action = "[] call public_fnc_APP_store_licenses_Buy;";

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};

// Applications

#define STORE_APPLICATIONS_LIST_FRAME_IDC              8160
#define STORE_APPLICATIONS_LIST_HEADER_IDC             8161
#define STORE_APPLICATIONS_LIST_INFO_IDC               8162
#define STORE_APPLICATIONS_SELECTED_BACKGROUND_IDC     8163
#define STORE_APPLICATIONS_SELECTED_FRAME_IDC          8164
#define STORE_APPLICATIONS_SELECTED_HEADER_IDC         8165
#define STORE_APPLICATIONS_SELECTED_INFO_IDC           8166
#define STORE_APPLICATIONS_SELECTED_ACTION_IMAGE_IDC   8167
#define STORE_APPLICATIONS_SELECTED_ACTION_BUTTON_IDC  8168
#define STORE_APPLICATIONS_SELECTED_DESC_IDC           8169

STORE_APPLICATIONS_BACKGROUND = "lyeed\images\back.jpg";
STORE_APPLICATIONS_IDCS[] =
{
	STORE_APPLICATIONS_LIST_FRAME_IDC,
	STORE_APPLICATIONS_LIST_HEADER_IDC,
	STORE_APPLICATIONS_LIST_INFO_IDC,
	STORE_BACK_IMAGE_IDC,
	STORE_BACK_BUTTON_IDC
};

class STORE_APPLICATIONS_LIST_FRAME: RscFrame
{
	idc = STORE_APPLICATIONS_LIST_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.308 * safezoneH;
};
class STORE_APPLICATIONS_LIST_HEADER: RscStructuredText
{
	idc = STORE_APPLICATIONS_LIST_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	text = "<t align='center'>Applications</t";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_APPLICATIONS_LIST_INFO: RscListbox
{
	idc = STORE_APPLICATIONS_LIST_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	onLBSelChanged = "_this call public_fnc_APP_store_applications_update;";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.286 * safezoneH;
};

class STORE_APPLICATIONS_SELECTED_BACKGROUND: RscText
{
	idc = STORE_APPLICATIONS_SELECTED_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.505156 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.275 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_FRAME: RscFrame
{
	idc = STORE_APPLICATIONS_SELECTED_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.505156 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.275 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_HEADER: RscStructuredText
{
	idc = STORE_APPLICATIONS_SELECTED_HEADER_IDC;
	text = "<t align='center'>Prix</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0670311 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_INFO: RscStructuredText
{
	idc = STORE_APPLICATIONS_SELECTED_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.556719 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0670311 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_ACTION_IMAGE: RscPicture
{
	idc = STORE_APPLICATIONS_SELECTED_ACTION_IMAGE_IDC;
	text = "lyeed\images\store_licenses_buy.paa";

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_ACTION_BUTTON: RscButtonSilent
{
	idc = STORE_APPLICATIONS_SELECTED_ACTION_BUTTON_IDC;
	action = "[] call public_fnc_APP_store_applications_buy;";

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};
class STORE_APPLICATIONS_SELECTED_DESC: RscStructuredText
{
	idc = STORE_APPLICATIONS_SELECTED_DESC_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.510312 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.11 * safezoneH;
};

// Forfait
#define STORE_FORFAIT_LIST_FRAME_IDC              8130
#define STORE_FORFAIT_LIST_HEADER_IDC             8131
#define STORE_FORFAIT_LIST_INFO_IDC               8132
#define STORE_FORFAIT_BACKGROUND_IDC              8135
#define STORE_FORFAIT_FRAME_IDC                   8136
#define STORE_FORFAIT_HEADER_IDC                  8137
#define STORE_FORFAIT_PRICE_HEADER_IDC            8138
#define STORE_FORFAIT_PRICE_INFO_IDC              8139
#define STORE_FORFAIT_SMS_HEADER_IDC              8140
#define STORE_FORFAIT_SMS_INFO_IDC                8141
#define STORE_FORFAIT_MAX_HEADER_IDC              8142
#define STORE_FORFAIT_MAX_SMS_HEADER_IDC          8143
#define STORE_FORFAIT_MAX_SMS_INFO_IDC            8144
#define STORE_FORFAIT_MAX_CONTACTS_HEADER_IDC     8145
#define STORE_FORFAIT_MAX_CONTACTS_INFO_IDC       8146
#define STORE_FORFAIT_MAX_BLACKLIST_HEADER_IDC    8147
#define STORE_FORFAIT_MAX_BLACKLIST_INFO_IDC      8148
#define STORE_FORFAIT_ACTION_IMAGE_IDC            8149
#define STORE_FORFAIT_ACTION_BUTTON_IDC           8150

STORE_FORFAIT_BACKGROUND = "lyeed\images\back.jpg";
STORE_FORFAIT_IDCS[] =
{
	STORE_FORFAIT_LIST_FRAME_IDC,
	STORE_FORFAIT_LIST_HEADER_IDC,
	STORE_FORFAIT_LIST_INFO_IDC,
	STORE_FORFAIT_BACKGROUND_IDC,
	STORE_FORFAIT_FRAME_IDC,
	STORE_FORFAIT_HEADER_IDC,
	STORE_FORFAIT_PRICE_HEADER_IDC,
	STORE_FORFAIT_PRICE_INFO_IDC,
	STORE_FORFAIT_SMS_HEADER_IDC,
	STORE_FORFAIT_SMS_INFO_IDC,
	STORE_FORFAIT_MAX_HEADER_IDC,
	STORE_FORFAIT_MAX_SMS_HEADER_IDC,
	STORE_FORFAIT_MAX_SMS_INFO_IDC,
	STORE_FORFAIT_MAX_CONTACTS_HEADER_IDC,
	STORE_FORFAIT_MAX_CONTACTS_INFO_IDC,
	STORE_FORFAIT_MAX_BLACKLIST_HEADER_IDC,
	STORE_FORFAIT_MAX_BLACKLIST_INFO_IDC,
	STORE_BACK_IMAGE_IDC,
	STORE_BACK_BUTTON_IDC
};

class STORE_FORFAIT_LIST_FRAME: RscFrame
{
	idc = STORE_FORFAIT_LIST_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.319 * safezoneH;
};
class STORE_FORFAIT_LIST_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_LIST_HEADER_IDC;
	text = "<t align='center'>Forfaits</t";
	colorBackground[] = {0,0,0,0.8};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_LIST_INFO: RscListbox
{
	idc = STORE_FORFAIT_LIST_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	onLBSelChanged = "_this call public_fnc_APP_store_forfait_update;";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.297 * safezoneH;
};

class STORE_FORFAIT_BACKGROUNDD: RscText
{
	idc = STORE_FORFAIT_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.551562 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.297 * safezoneH;
};
class STORE_FORFAIT_FRAME: RscFrame
{
	idc = STORE_FORFAIT_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.551562 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.319 * safezoneH;
};
class STORE_FORFAIT_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.551562 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_PRICE_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_PRICE_HEADER_IDC;
	text = "<t align='center'>Facture par salaire</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.561875 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_PRICE_INFO: RscStructuredText
{
	idc = STORE_FORFAIT_PRICE_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.561875 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_SMS_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_SMS_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	text = "<t align='center'>Prix du SMS</t>";

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_SMS_INFO: RscStructuredText
{
	idc = STORE_FORFAIT_SMS_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_MAX_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_HEADER_IDC;
	text = "<t align='center'>Maximum enregistré</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.561875 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_MAX_SMS_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_SMS_HEADER_IDC;
	text = "<t align='center'>Messages</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.561874 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_MAX_SMS_INFO: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_SMS_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_MAX_CONTACTS_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_CONTACTS_HEADER_IDC;
	text = "<t align='center'>Contacts</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.561874 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_MAX_CONTACTS_INFO: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_CONTACTS_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_MAX_BLACKLIST_HEADER: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_BLACKLIST_HEADER_IDC;
	text = "<t align='center'>Blacklist</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.561875 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class STORE_FORFAIT_MAX_BLACKLIST_INFO: RscStructuredText
{
	idc = STORE_FORFAIT_MAX_BLACKLIST_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class STORE_FORFAIT_ACTION_IMAGE: RscPicture
{
	idc = STORE_FORFAIT_ACTION_IMAGE_IDC;
	text = "lyeed\images\store_licenses_buy.paa";

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};
class STORE_FORFAIT_ACTION_BUTTON: RscButtonSilent
{
	idc = STORE_FORFAIT_ACTION_BUTTON_IDC;
	action = "[] call public_fnc_APP_store_forfait_buy;";

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};