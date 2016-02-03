#define MARKET_RESSOURCES_FRAME_IDC           8800
#define MARKET_RESSOURCES_HEADER_IDC          8801
#define MARKET_RESSOURCES_LIST_IDC            8802
#define MARKET_SELECT_BACKGROUND_IDC          8803
#define MARKET_SELECT_FRAME_IDC               8804
#define MARKET_SELECT_HEADER_IDC              8805
#define MARKET_SELECT_LICENSE_FRAME_IDC       8806
#define MARKET_SELECT_LICENSE_HEADER_IDC      8807
#define MARKET_SELECT_LICENSE_INFO_IDC        8808
#define MARKET_SELECT_LEGAL_FRAME_IDC         8809
#define MARKET_SELECT_LEGAL_HEADER_IDC        8810
#define MARKET_SELECT_LEGAL_INFO_IDC          8811
#define MARKET_SELECT_PRICE_FRAME_IDC         8812
#define MARKET_SELECT_PRICE_HEADER_IDC        8813
#define MARKET_SELECT_PRICE_ACTUAL_HEADER_IDC 8814
#define MARKET_SELECT_PRICE_ACTUAL_INFO_IDC   8815
#define MARKET_SELECT_PRICE_MAX_HEADER_IDC    8816
#define MARKET_SELECT_PRICE_MAX_INFO_IDC      8817
#define MARKET_SELECT_PRICE_MIN_HEADER_IDC    8818
#define MARKET_SELECT_PRICE_MIN_INFO_IDC      8819

MARKET_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back_market.jpg";
MARKET_IDCS[] = 
{
	MARKET_RESSOURCES_FRAME_IDC,
	MARKET_RESSOURCES_HEADER_IDC,
	MARKET_RESSOURCES_LIST_IDC,
	MARKET_SELECT_BACKGROUND_IDC,
	MARKET_SELECT_FRAME_IDC,
	MARKET_SELECT_HEADER_IDC,
	MARKET_SELECT_LICENSE_FRAME_IDC,
	MARKET_SELECT_LICENSE_HEADER_IDC,
	MARKET_SELECT_LICENSE_INFO_IDC,
	MARKET_SELECT_LEGAL_FRAME_IDC,
	MARKET_SELECT_LEGAL_HEADER_IDC,
	MARKET_SELECT_LEGAL_INFO_IDC,
	MARKET_SELECT_PRICE_FRAME_IDC,
	MARKET_SELECT_PRICE_HEADER_IDC,
	MARKET_SELECT_PRICE_ACTUAL_HEADER_IDC,
	MARKET_SELECT_PRICE_ACTUAL_INFO_IDC,
	MARKET_SELECT_PRICE_MAX_HEADER_IDC,
	MARKET_SELECT_PRICE_MAX_INFO_IDC,
	MARKET_SELECT_PRICE_MIN_HEADER_IDC,
	MARKET_SELECT_PRICE_MIN_INFO_IDC
};

class MARKET_RESSOURCES_FRAME: RscFrame
{
	idc = MARKET_RESSOURCES_FRAME_IDC;
	colorText[] = {0,0,0,1};
	
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.319 * safezoneH;
};
class MARKET_RESSOURCES_HEADER: RscStructuredText
{
	idc = MARKET_RESSOURCES_HEADER_IDC;
	text = "<t align='center'>Ressources</t>";
	colorBackground[] = {0,0,0,1};
	
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_RESSOURCES_LIST: RscListbox
{
	idc = MARKET_RESSOURCES_LIST_IDC;
	rowHeight = 0.04;
	colorBackground[] = {0,0,0,0.8};
	onLBSelChanged = "_this call AlysiaClient_fnc_APP_market_update;";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.297 * safezoneH;
};

class MARKET_SELECT_BACKGROUND: RscText
{
	idc = MARKET_SELECT_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.520625 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.22 * safezoneH;
};
class MARKET_SELECT_FRAME: RscFrame
{
	idc = MARKET_SELECT_FRAME_IDC;
	colorText[] = {0,0,0,1};
	
	x = 0.520625 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.242 * safezoneH;
};
class MARKET_SELECT_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_HEADER_IDC;
	colorBackground[] = {0,0,0,1};
	
	x = 0.520625 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_LICENSE_FRAME: RscFrame
{
	idc = MARKET_SELECT_LICENSE_FRAME_IDC;

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.044 * safezoneH;
};
class MARKET_SELECT_LICENSE_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_LICENSE_HEADER_IDC;
	text = "<t align='center'>Licence</t>";
	colorBackground[] = {0,0,0,1};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_SELECT_LICENSE_INFO: RscStructuredText
{
	idc = MARKET_SELECT_LICENSE_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_LEGAL_FRAME: RscFrame
{
	idc = MARKET_SELECT_LEGAL_FRAME_IDC;

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.044 * safezoneH;
};
class MARKET_SELECT_LEGAL_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_LEGAL_HEADER_IDC;
	text = "<t align='center'>Légale</t>";
	colorBackground[] = {0,0,0,1};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_SELECT_LEGAL_INFO: RscStructuredText
{
	idc = MARKET_SELECT_LEGAL_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_PRICE_FRAME: RscFrame
{
	idc = MARKET_SELECT_PRICE_FRAME_IDC;
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.088 * safezoneH;
};
class MARKET_SELECT_PRICE_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_HEADER_IDC;
	text = "<t align='center'>Prix</t>";
	colorBackground[] = {0,0,0,1};
	
	x = 0.536094 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_PRICE_ACTUAL_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_ACTUAL_HEADER_IDC;
	text = "<t align='center'>Actuel</t>";
	colorBackground[] = {0,0,0,1};

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_SELECT_PRICE_ACTUAL_INFO: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_ACTUAL_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_PRICE_MAX_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_MAX_HEADER_IDC;
	text = "<t align='center'>Maximum</t>";
	colorBackground[] = {0,0,0,1};

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_SELECT_PRICE_MAX_INFO: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_MAX_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class MARKET_SELECT_PRICE_MIN_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_MIN_HEADER_IDC;
	colorBackground[] = {0,0,0,1};
	text = "<t align='center'>Minimum</t>";

	x = 0.536094 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
};
class MARKET_SELECT_PRICE_MIN_INFO: RscStructuredText
{
	idc = MARKET_SELECT_PRICE_MIN_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
