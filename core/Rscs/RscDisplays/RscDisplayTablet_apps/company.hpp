#define COMPANY_HEADER_FRAME_IDC       9600
#define COMPANY_HEADER_BACKGROUND_IDC  9601
#define COMPANY_HEADER_IMAGE_IDC       9602
#define COMPANY_HEADER_TITLE_IDC       9603
#define COMPANY_MEMBERS_FRAME_IDC      9604
#define COMPANY_MEMBERS_HEADER_IDC     9605
#define COMPANY_MEMBERS_LIST_IDC       9606

COMPANY_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back.jpg";
COMPANY_IDCS[] = 
{
	COMPANY_HEADER_FRAME_IDC,
	COMPANY_HEADER_BACKGROUND_IDC,
	COMPANY_HEADER_IMAGE_IDC,
	COMPANY_HEADER_TITLE_IDC,
	COMPANY_MEMBERS_FRAME_IDC,
	COMPANY_MEMBERS_HEADER_IDC,
	COMPANY_MEMBERS_LIST_IDC
};

class COMPANY_HEADER_FRAME: RscFrame
{
	idc = COMPANY_HEADER_FRAME_IDC;
	
	x = 0.335 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.33 * safezoneW;
	h = 0.066 * safezoneH;
};
class COMPANY_HEADER_BACKGROUND: RscText
{
	idc = COMPANY_HEADER_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.335 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.33 * safezoneW;
	h = 0.066 * safezoneH;
};
class COMPANY_HEADER_IMAGE: RscPicture
{
	idc = COMPANY_HEADER_IMAGE_IDC;
	text = "lyeed_IMG\data\tablet\app_main\app_company.paa";
	
	x = 0.335 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};
class COMPANY_HEADER_TITLE: RscStructuredText
{
	idc = COMPANY_HEADER_TITLE_IDC;
	
	x = 0.379323 * safezoneW + safezoneX;
	y = 0.37263 * safezoneH + safezoneY;
	w = 0.268125 * safezoneW;
	h = 0.033 * safezoneH;
};

class COMPANY_MEMBERS_FRAME: RscFrame
{
	idc = COMPANY_MEMBERS_FRAME_IDC;

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.187 * safezoneH;
};
class COMPANY_MEMBERS_HEADER: RscStructuredText
{
	idc = COMPANY_MEMBERS_HEADER_IDC;
	text = "Membres";
	colorBackground[] = {0,0,0,0.8};

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class COMPANY_MEMBERS_LIST: RscListbox
{
	idc = COMPANY_MEMBERS_LIST_IDC;

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.165 * safezoneH;
};
