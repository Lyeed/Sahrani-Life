#define STAFF_PLAYERS_LIST_IDC           9000
#define STAFF_PLAYERS_ACTIONS_LIST_IDC   9001
#define STAFF_PLAYERS_ACTION_BUTTON_IDC  9002
#define STAFF_PLAYERS_FRAME_IDC          9003
#define STAFF_PLAYERS_HEADER_IDC         9004
#define STAFF_REQUEST_FRAME_IDC          9005
#define STAFF_REQUEST_HEADER_IDC         9006
#define STAFF_REQUEST_LIST_IDC           9007
#define STAFF_ACTIONS_FRAME_IDC          9008
#define STAFF_ACTIONS_HEADER_IDC         9009
#define STAFF_ACTIONS_BTN_1_IDC          9020
#define STAFF_ACTIONS_BTN_2_IDC          9021
#define STAFF_ACTIONS_BTN_3_IDC          9022
#define STAFF_ACTIONS_BTN_4_IDC          9023
#define STAFF_ACTIONS_BTN_5_IDC          9024
#define STAFF_ACTIONS_BTN_6_IDC          9025
#define STAFF_ACTIONS_BTN_7_IDC          9026
#define STAFF_ACTIONS_BTN_8_IDC          9027
#define STAFF_ACTIONS_BTN_9_IDC          9028

STAFF_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back.jpg";
STAFF_IDCS[] =
{
	STAFF_PLAYERS_LIST_IDC,
	STAFF_PLAYERS_ACTIONS_LIST_IDC,
	STAFF_PLAYERS_ACTION_BUTTON_IDC,
	STAFF_PLAYERS_FRAME_IDC,
	STAFF_PLAYERS_HEADER_IDC
};

class STAFF_PLAYERS_FRAME: RscFrame
{
	idc = STAFF_PLAYERS_FRAME_IDC;

	x = 0.329844 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.066 * safezoneH;
};
class STAFF_PLAYERS_HEADER: RscStructuredText
{
	idc = STAFF_PLAYERS_HEADER_IDC;
	text = "Joueur(s)";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_PLAYERS_LIST: RscCombo
{
	idc = STAFF_PLAYERS_LIST_IDC;
	onLBSelChanged = "_this call public_fnc_APP_staff_players_actions_update;";

	x = 0.335 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_PLAYERS_ACTIONS_LIST: RscCombo
{
	idc = STAFF_PLAYERS_ACTIONS_LIST_IDC;

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_PLAYERS_ACTION_BUTTON: RscButtonMenu_colored
{
	idc = STAFF_PLAYERS_ACTION_BUTTON_IDC;
	text = "Executer";
	action = "_this ctrlEnable false; call compile lbData[9001, (lbCurSel 9001)]; [(uiNamespace getVariable ['tablet', displayNull]) displayCtrl 9000, (lbCurSel 9000)] call public_fnc_APP_staff_players_actions_update;";

	x = 0.608281 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};

class STAFF_REQUEST_FRAME: RscFrame
{
	idc = STAFF_REQUEST_FRAME_IDC;

	x = 0.329844 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.066 * safezoneH;
};
class STAFF_REQUEST_HEADER: RscStructuredText
{
	idc = STAFF_REQUEST_HEADER_IDC;
	text = "Requête(s)";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_REQUEST_LIST: RscCombo
{
	idc = STAFF_REQUEST_LIST_IDC;

	x = 0.335 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.237187 * safezoneW;
	h = 0.022 * safezoneH;
};

class STAFF_ACTIONS_FRAME: RscFrame
{
	idc = STAFF_ACTIONS_FRAME_IDC;

	x = 0.329844 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.132 * safezoneH;
};
class STAFF_ACTIONS_HEADER: RscStructuredText
{
	idc = STAFF_ACTIONS_HEADER_IDC;
	text = "Action(s)";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.345469 * safezoneW;
	h = 0.022 * safezoneH;
};

class STAFF_ACTIONS_BTN_1: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_1_IDC;

	x = 0.335 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};

class STAFF_ACTIONS_BTN_2: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_2_IDC;

	x = 0.448438 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_3: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_3_IDC;

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_4: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_4_IDC;

	x = 0.335 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_5: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_5_IDC;

	x = 0.448438 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_6: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_6_IDC;

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_7: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_7_IDC;

	x = 0.335 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_8: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_8_IDC;

	x = 0.448438 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class STAFF_ACTIONS_BTN_9: RscButtonMenu_colored
{
	idc = STAFF_ACTIONS_BTN_9_IDC;

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
