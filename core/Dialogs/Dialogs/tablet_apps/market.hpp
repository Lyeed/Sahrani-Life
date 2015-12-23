#define MARKET_RESSOURCES_FRAME_IDC            8800
#define MARKET_RESSOURCES_HEADER_IDC           8801
#define MARKET_RESSOURCES_LIST_IDC             8802
#define MARKET_INFO_BACKGROUND_IDC             8803
#define MARKET_INFO_FRAME_IDC                  8804
#define MARKET_INFO_HEADER_IDC                 8805
#define MARKET_INFO_LICENSE_HEADER_IDC         8806
#define MARKET_INFO_LICENSE_INFO_IDC           8807
#define MARKET_INFO_LEGAL_HEADER_IDC           8808
#define MARKET_INFO_LEGAL_INFO_IDC             8809
#define MARKET_INFO_SELL_HEADER_IDC            8810
#define MARKET_INFO_SELL_ACTUAL_HEADER_IDC     8811
#define MARKET_INFO_SELL_ACTUAL_INFO_IDC       8812
#define MARKET_INFO_SELL_MAX_HEADER_IDC        8813
#define MARKET_INFO_SELL_MAX_INFO_IDC          8814
#define MARKET_INFO_SELL_MIN_HEADER_IDC        8815
#define MARKET_INFO_SELL_MIN_INFO_IDC          8816
#define MARKET_INFO_BUY_HEADER_IDC             8817
#define MARKET_INFO_BUY_INFO_IDC               8818

MARKET_BACKGROUND = "lyeed\images\back.jpg";
MARKET_IDCS[] = 
{
	MARKET_RESSOURCES_FRAME_IDC,
	MARKET_RESSOURCES_HEADER_IDC,
	MARKET_RESSOURCES_LIST_IDC,
	MARKET_INFO_BACKGROUND_IDC,
	MARKET_INFO_FRAME_IDC,
	MARKET_INFO_HEADER_IDC,
	MARKET_INFO_LICENSE_HEADER_IDC,
	MARKET_INFO_LICENSE_INFO_IDC,
	MARKET_INFO_LEGAL_HEADER_IDC,
	MARKET_INFO_LEGAL_INFO_IDC,
	MARKET_INFO_SELL_HEADER_IDC,
	MARKET_INFO_SELL_ACTUAL_HEADER_IDC,
	MARKET_INFO_SELL_ACTUAL_INFO_IDC,
	MARKET_INFO_SELL_MAX_HEADER_IDC,
	MARKET_INFO_SELL_MAX_INFO_IDC,
	MARKET_INFO_SELL_MIN_HEADER_IDC,
	MARKET_INFO_SELL_MIN_INFO_IDC,
	MARKET_INFO_BUY_HEADER_IDC,
	MARKET_INFO_BUY_INFO_IDC
};

class MARKET_RESSOURCES_FRAME: RscFrame
{
	idc = MARKET_RESSOURCES_FRAME_IDC;
	colorText[] = {0,0,0,0.8};
	
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.319 * safezoneH;
};
class MARKET_RESSOURCES_HEADER: RscStructuredText
{
	idc = MARKET_RESSOURCES_HEADER_IDC;
	text = "<t align='center'>Ressources</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_RESSOURCES_LIST: RscListbox
{
	idc = MARKET_RESSOURCES_LIST_IDC;
	colorBackground[] = {0,0,0,0.6};
	onLBSelChanged = "_this call public_fnc_APP_market_update;";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.297 * safezoneH;
};

class MARKET_INFO_LICENSE_BACKGROUND: RscText
{
	idc = MARKET_INFO_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.520624 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.275 * safezoneH;
};
class MARKET_INFO_LICENSE_FRAME: RscFrame
{
	idc = MARKET_INFO_FRAME_IDC;
	colorText[] = {0,0,0,0.8};
	
	x = 0.520624 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.297 * safezoneH;
};
class MARKET_INFO_HEADER: RscStructuredText
{
	idc = MARKET_INFO_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.520625 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_LICENSE_HEADER: RscStructuredText
{
	idc = MARKET_INFO_LICENSE_HEADER_IDC;
	text = "<t align='center'>Licence</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_LICENSE_INFO: RscStructuredText
{
	idc = MARKET_INFO_LICENSE_INFO_IDC;
	colorBackground[] = {0,0,0,0};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_LEGAL_HEADER: RscStructuredText
{
	idc = MARKET_INFO_LEGAL_HEADER_IDC;
	text = "<t align='center'>Légale</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_LEGAL_INFO: RscStructuredText
{
	idc = MARKET_INFO_LEGAL_INFO_IDC;
	colorBackground[] = {0,0,0,0};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_SELL_HEADER: RscStructuredText
{
	idc = MARKET_INFO_SELL_HEADER_IDC;
	text = "<t align='center'>Prix de vente</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_SELL_ACTUAL_HEADER: RscStructuredText
{
	idc = MARKET_INFO_SELL_ACTUAL_HEADER_IDC;
	text = "<t align='center'>Actuel</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_SELL_ACTUAL_INFO: RscStructuredText
{
	idc = MARKET_INFO_SELL_ACTUAL_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_SELL_MAX_HEADER: RscStructuredText
{
	idc = MARKET_INFO_SELL_MAX_HEADER_IDC;
	text = "<t align='center'>Maximum</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_SELL_MAX_INFO: RscStructuredText
{
	idc = MARKET_INFO_SELL_MAX_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_SELL_MIN_HEADER: RscStructuredText
{
	idc = MARKET_INFO_SELL_MIN_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	text = "<t align='center'>Minimum</t>";

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_SELL_MIN_INFO: RscStructuredText
{
	idc = MARKET_INFO_SELL_MIN_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_INFO_BUY_HEADER: RscStructuredText
{
	idc = MARKET_INFO_BUY_HEADER_IDC;
	text = "<t align='center'>Prix d'achat</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_INFO_BUY_INFO: RscStructuredText
{
	idc = MARKET_INFO_BUY_INFO_IDC;
	colorBackground[] = {0,0,0,0};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};