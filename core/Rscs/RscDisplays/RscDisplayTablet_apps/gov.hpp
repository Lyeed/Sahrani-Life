#define GOV_IMAGE_IDC   9700
#define GOV_TITLE_IDC   9701
#define GOV_INFO_IDC    9702

GOV_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back.jpg";
GOV_IDCS[] = 
{
	GOV_IMAGE_IDC,
	GOV_TITLE_IDC,
	GOV_INFO_IDC
};

class GOV_IMAGE: RscPicture
{
	idc = GOV_IMAGE_IDC;

	x = 0.314375 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.132 * safezoneH;
};

class GOV_TITLE: RscStructuredText
{
	idc = GOV_TITLE_IDC;

	x = 0.391719 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.11 * safezoneH;
};

class GOV_INFO: RscStructuredText
{
	idc = GOV_INFO_IDC;

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.350625 * safezoneW;
	h = 0.176 * safezoneH;
};
