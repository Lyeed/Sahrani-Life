#define COMPANY_HEADER_FRAME_IDC            9600
#define COMPANY_HEADER_BACKGROUND_IDC       9601
#define COMPANY_HEADER_IMAGE_IDC            9602
#define COMPANY_HEADER_TITLE_IDC            9603
#define COMPANY_MEMBERS_FRAME_IDC           9604
#define COMPANY_MEMBERS_HEADER_IDC          9605
#define COMPANY_MEMBERS_LIST_IDC            9606
#define COMPANY_ACTION_HIRE_IMAGE_IDC       9607
#define COMPANY_ACTION_HIRE_BUTTON_IDC      9608
#define COMPANY_ACTION_LICENSE_IMAGE_IDC    9609
#define COMPANY_ACTION_LICENSE_BUTTON_IDC   9610
#define COMPANY_ACTION_PROMOTE_IMAGE_IDC    9611
#define COMPANY_ACTION_PROMOTE_BUTTON_IDC   9612
#define COMPANY_CAPITAL_FRAME_IDC           9613
#define COMPANY_CAPITAL_HEADER_IDC          9614
#define COMPANY_CAPITAL_INFO_IDC            9615

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

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.231 * safezoneH;
};
class COMPANY_MEMBERS_HEADER: RscStructuredText
{
	idc = COMPANY_MEMBERS_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.022 * safezoneH;
};
class COMPANY_MEMBERS_LIST: RscListbox
{
	idc = COMPANY_MEMBERS_LIST_IDC;

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.209 * safezoneH;
};

class COMPANY_ACTION_HIRE_IMAGE: RscPicture
{
	idc = COMPANY_ACTION_HIRE_IMAGE_IDC;
	text = "lyeed_IMG\data\tablet\company\action_company_hire.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class COMPANY_ACTION_HIRE_BUTTON: RscButtonSilent
{
	idc = COMPANY_ACTION_HIRE_BUTTON_IDC;
	action = "ctrlShow[9607,false];ctrlShow[9608,false];[g_company, lbData[9606, lbCurSel 9606]] call AlysiaClient_fnc_company_member_kick;['COMPANY'] spawn AlysiaClient_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[9607,'lyeed_IMG\data\tablet\company\action_company_hire_select.paa'];";
	onMouseExit = "ctrlSetText[9607,'lyeed_IMG\data\tablet\company\action_company_hire.paa'];";
	tooltip = "Renvoyer";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class COMPANY_ACTION_LICENSE_IMAGE: RscPicture
{
	idc = COMPANY_ACTION_LICENSE_IMAGE_IDC;
	text = "lyeed_IMG\data\tablet\company\action_license.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class COMPANY_ACTION_LICENSE_BUTTON: RscButtonSilent
{
	idc = COMPANY_ACTION_LICENSE_BUTTON_IDC;
	action = "ctrlShow[9609,false];ctrlShow[9610,false];[g_company, lbData[9606, lbCurSel 9606]] call AlysiaClient_fnc_company_member_license_give;['COMPANY'] spawn AlysiaClient_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[9609,'lyeed_IMG\data\tablet\company\action_license_select.paa'];";
	onMouseExit = "ctrlSetText[9609,'lyeed_IMG\data\tablet\company\action_license.paa'];";
	tooltip = "Payer la license d'entreprise";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class COMPANY_ACTION_PROMOTE_IMAGE: RscPicture
{
	idc = COMPANY_ACTION_PROMOTE_IMAGE_IDC;
	text = "lyeed_IMG\data\tablet\company\action_promote.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class COMPANY_ACTION_PROMOTE_BUTTON: RscButtonSilent
{
	idc = COMPANY_ACTION_PROMOTE_BUTTON_IDC;
	action = "ctrlShow[9611,false];ctrlShow[9612,false];[g_company, lbData[9606, lbCurSel 9606]] call AlysiaClient_fnc_company_member_promote;['COMPANY'] spawn AlysiaClient_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[9611,'lyeed_IMG\data\tablet\company\action_promote_select.paa'];";
	onMouseExit = "ctrlSetText[9611,'lyeed_IMG\data\tablet\company\action_promote.paa'];";
	tooltip = "Nommer PDG de l'entreprise";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class COMPANY_CAPITAL_FRAME: RscFrame
{
	idc = COMPANY_CAPITAL_FRAME_IDC;

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.044 * safezoneH;
};
class COMPANY_CAPITAL_HEADER: RscStructuredText
{
	idc = COMPANY_CAPITAL_HEADER_IDC;
	text = "<t align='center'>Compte</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class COMPANY_CAPITAL_INFO: RscStructuredText
{
	idc = COMPANY_CAPITAL_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
