#define APP_SMS_IMAGE_IDC     7503
#define APP_SMS_BUTTON_IDC    7504
#define APP_SMS_NUMBER_IDC    7505
#define APP_ARROW_IMAGE_IDC   7508
#define APP_ARROW_BUTTON_IDC  7509

#define APP_1_IMAGE_IDC       7510
#define APP_1_BUTTON_IDC      7511
#define APP_1_TITLE_IDC       7512
#define APP_2_IMAGE_IDC       7513
#define APP_2_BUTTON_IDC      7514
#define APP_2_TITLE_IDC       7515
#define APP_3_IMAGE_IDC       7516
#define APP_3_BUTTON_IDC      7517
#define APP_3_TITLE_IDC       7518
#define APP_4_IMAGE_IDC       7519
#define APP_4_BUTTON_IDC      7520
#define APP_4_TITLE_IDC       7521
#define APP_5_IMAGE_IDC       7522
#define APP_5_BUTTON_IDC      7523
#define APP_5_TITLE_IDC       7524
#define APP_6_IMAGE_IDC       7525
#define APP_6_BUTTON_IDC      7526
#define APP_6_TITLE_IDC       7527
#define APP_7_IMAGE_IDC       7528
#define APP_7_BUTTON_IDC      7529
#define APP_7_TITLE_IDC       7530
#define APP_8_IMAGE_IDC       7531
#define APP_8_BUTTON_IDC      7532
#define APP_8_TITLE_IDC       7533

MAIN_BACKGROUND = "\lyeed\images\back.jpg";
MAIN_IDCS[] = 
{
	APP_1_IMAGE_IDC,
	APP_1_BUTTON_IDC,
	APP_1_TITLE_IDC,
	APP_2_IMAGE_IDC,
	APP_2_BUTTON_IDC,
	APP_2_TITLE_IDC,
	APP_3_IMAGE_IDC,
	APP_3_BUTTON_IDC,
	APP_3_TITLE_IDC,
	APP_4_IMAGE_IDC,
	APP_4_BUTTON_IDC,
	APP_4_TITLE_IDC,
	APP_5_IMAGE_IDC,
	APP_5_BUTTON_IDC,
	APP_5_TITLE_IDC,
	APP_6_IMAGE_IDC,
	APP_6_BUTTON_IDC,
	APP_6_TITLE_IDC,
	APP_7_IMAGE_IDC,
	APP_7_BUTTON_IDC,
	APP_7_TITLE_IDC,
	APP_8_IMAGE_IDC,
	APP_8_BUTTON_IDC,
	APP_8_TITLE_IDC,
	APP_ARROW_IMAGE_IDC,
	APP_ARROW_BUTTON_IDC
};

class APP_1_IMAGE: RscPicture
{
	idc = APP_1_IMAGE_IDC;
	text = "";

	x = 0.345312 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_1_BUTTON: RscButtonSilent
{
	idc = APP_1_BUTTON_IDC;
	action = "";

	x = 0.345312 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_1_TITLE: RscStructuredText
{
	idc = APP_1_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_2_IMAGE: RscPicture
{
	idc = APP_2_IMAGE_IDC;
	text = "";

	x = 0.432969 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_2_BUTTON: RscButtonSilent
{
	idc = APP_2_BUTTON_IDC;
	action = "";

	x = 0.432969 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_2_TITLE: RscStructuredText
{
	idc = APP_2_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.422656 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_3_IMAGE: RscPicture
{
	idc = APP_3_IMAGE_IDC;
	text = "";

	x = 0.530937 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_3_BUTTON: RscButtonSilent
{
	idc = APP_3_BUTTON_IDC;
	action = "";

	x = 0.530937 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_3_TITLE: RscStructuredText
{
	idc = APP_3_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_4_IMAGE: RscPicture
{
	idc = APP_4_IMAGE_IDC;
	text = "";

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_4_BUTTON: RscButtonSilent
{
	idc = APP_4_BUTTON_IDC;
	action = "";

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_4_TITLE: RscStructuredText
{
	idc = APP_4_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_5_IMAGE: RscPicture
{
	idc = APP_5_IMAGE_IDC;
	text = "";

	x = 0.345312 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_5_BUTTON: RscButtonSilent
{
	idc = APP_5_BUTTON_IDC;
	action = "";

	x = 0.345312 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_5_TITLE: RscStructuredText
{
	idc = APP_5_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_6_IMAGE: RscPicture
{
	idc = APP_6_IMAGE_IDC;
	text = "";

	x = 0.432969 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_6_BUTTON: RscButtonSilent
{
	idc = APP_6_BUTTON_IDC;
	action = "";

	x = 0.432969 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_6_TITLE: RscStructuredText
{
	idc = APP_6_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.422656 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_7_IMAGE: RscPicture
{
	idc = APP_7_IMAGE_IDC;
	text = "";

	x = 0.530937 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_7_BUTTON: RscButtonSilent
{
	idc = APP_7_BUTTON_IDC;
	action = "";

	x = 0.530937 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_7_TITLE: RscStructuredText
{
	idc = APP_7_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_8_IMAGE: RscPicture
{
	idc = APP_8_IMAGE_IDC;
	text = "";

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_8_BUTTON: RscButtonSilent
{
	idc = APP_8_BUTTON_IDC;
	action = "";

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.066 * safezoneH;
};
class APP_8_TITLE: RscStructuredText
{
	idc = APP_8_TITLE_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_SMS_IMAGE: RscPicture
{
	idc = APP_SMS_IMAGE_IDC;
	text = "\lyeed\images\new_sms.paa";

	x = 0.656234 * safezoneW + safezoneX;
	y = 0.6529 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class APP_SMS_BUTTON: RscButtonSilent
{
	idc = APP_SMS_BUTTON_IDC;
	action = "[""phone_messages_read""] spawn public_fnc_tabletApp;";

	x = 0.656234 * safezoneW + safezoneX;
	y = 0.6529 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class APP_SMS_NUMBER: RscStructuredText
{
	idc = APP_SMS_NUMBER_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};
	text = "";

	x = 0.637083 * safezoneW + safezoneX;
	y = 0.660371 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.022 * safezoneH;
};

class APP_ARROW_IMAGE: RscPicture
{
	idc = APP_ARROW_IMAGE_IDC;
	text = "\lyeed\images\apps_next.paa";

	x = 0.654688 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class APP_ARROW_BUTTON: RscButtonSilent
{
	idc = APP_ARROW_BUTTON_IDC;
	action = "";

	x = 0.654688 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};