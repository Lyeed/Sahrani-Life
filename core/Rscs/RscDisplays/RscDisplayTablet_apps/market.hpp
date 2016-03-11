#define MARKET_RESSOURCES_FRAME_IDC   8801
#define MARKET_RESSOURCES_HEADER_IDC  8802
#define MARKET_RESSOURCES_LIST_IDC    8803
#define MARKET_SELECT_FRAME_IDC       8804
#define MARKET_SELECT_HEADER_IDC      8805
#define MARKET_SELECT_INFO_IDC        8806
#define MARKET_SELECT_AFFECT_IDC      8807

MARKET_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back_market.jpg";
MARKET_IDCS[] = 
{
	MARKET_RESSOURCES_FRAME_IDC,
	MARKET_RESSOURCES_HEADER_IDC,
	MARKET_RESSOURCES_LIST_IDC,
	MARKET_SELECT_FRAME_IDC,
	MARKET_SELECT_HEADER_IDC,
	MARKET_SELECT_INFO_IDC,
	MARKET_SELECT_AFFECT_IDC
};

class MARKET_RESSOURCES_FRAME: RscFrame
{
	idc = MARKET_RESSOURCES_FRAME_IDC;
	colorText[] = {0,0,0,1};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.308 * safezoneH;
};
class MARKET_RESSOURCES_HEADER: RscStructuredText
{
	idc = MARKET_RESSOURCES_HEADER_IDC;
	text = "<t font='EtelkaMonospacePro' align='center' size='1.4' color='#BF00FF'>Ressources</t>";
	colorBackground[] = {0,0,0,1};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.033 * safezoneH;
};
class MARKET_RESSOURCES_LIST: RscListbox
{
	idc = MARKET_RESSOURCES_LIST_IDC;
	onLBSelChanged = "_this call AlysiaClient_fnc_APP_market_update;";
	colorBackground[] = {0,0,0,0.8};
	rowHeight = 0.08;

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.275 * safezoneH;
};

class MARKET_SELECT_FRAME: RscFrame
{
	idc = MARKET_SELECT_FRAME_IDC;
	colorText[] = {0,0,0,1};

	x = 0.484531 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.264 * safezoneH;
};
class MARKET_SELECT_HEADER: RscStructuredText
{
	idc = MARKET_SELECT_HEADER_IDC;
	colorBackground[] = {0,0,0,1};

	x = 0.484531 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.033 * safezoneH;
};
class MARKET_SELECT_INFO: RscStructuredText
{
	idc = MARKET_SELECT_INFO_IDC;
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.209 * safezoneH;
};
class MARKET_SELECT_AFFECT: RscCombo
{
	idc = MARKET_SELECT_AFFECT_IDC;
	colorBackground[] = {0,0,0,1};

	x = 0.484531 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.022 * safezoneH;
};
