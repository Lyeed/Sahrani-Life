#define SETTINGS_FPS_HEADER_IDC					7800
#define SETTINGS_FPS_INFO_IDC					7801
#define SETTINGS_DISTANCES_HEADER_IDC			7802
#define SETTINGS_DISTANCES_BACKGROUND_IDC		7803
#define SETTINGS_DISTANCES_FRAME_IDC			7804
#define SETTINGS_DISTANCE_LAND_HEADER_IDC		7805
#define SETTINGS_DISTANCE_LAND_SLIDER_IDC		7806
#define SETTINGS_DISTANCE_LAND_INFO_IDC			7807
#define SETTINGS_DISTANCE_VEHICLES_HEADER_IDC	7808
#define SETTINGS_DISTANCE_VEHICLES_SLIDER_IDC	7809
#define SETTINGS_DISTANCE_VEHICLES_INFO_IDC		7810
#define SETTINGS_DISTANCE_AIR_HEADER_IDC		7811
#define SETTINGS_DISTANCE_AIR_SLIDER_IDC		7812
#define SETTINGS_DISTANCE_AIR_INFO_IDC			7813
#define SETTINGS_DISTANCE_OBJECTS_HEADER_IDC	7814
#define SETTINGS_DISTANCE_OBJECTS_SLIDER_IDC	7815
#define SETTINGS_DISTANCE_OBJECTS_INFO_IDC		7816
#define SETTINGS_TASKFORCE_BACKGROUND_IDC		7817
#define SETTINGS_TASKFORCE_FRAME_IDC			7818
#define SETTINGS_TASKFORCE_SLIDER_IDC			7819
#define SETTINGS_TASKFORCE_HEADER_IDC			7820
#define SETTINGS_TASKFORCE_INFO_IDC				7821
#define SETTINGS_FPS_FRAME_IDC					7825

SETTINGS_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back.jpg";
SETTINGS_IDCS[] =
{
	SETTINGS_FPS_HEADER_IDC,
	SETTINGS_FPS_INFO_IDC,
	SETTINGS_FPS_FRAME_IDC,
	SETTINGS_DISTANCES_HEADER_IDC,
	SETTINGS_DISTANCES_BACKGROUND_IDC,
	SETTINGS_DISTANCES_FRAME_IDC,
	SETTINGS_DISTANCE_LAND_HEADER_IDC,
	SETTINGS_DISTANCE_LAND_SLIDER_IDC,
	SETTINGS_DISTANCE_LAND_INFO_IDC,
	SETTINGS_DISTANCE_VEHICLES_HEADER_IDC,
	SETTINGS_DISTANCE_VEHICLES_SLIDER_IDC,
	SETTINGS_DISTANCE_VEHICLES_INFO_IDC,
	SETTINGS_DISTANCE_AIR_HEADER_IDC,
	SETTINGS_DISTANCE_AIR_SLIDER_IDC,
	SETTINGS_DISTANCE_AIR_INFO_IDC,
	SETTINGS_DISTANCE_OBJECTS_HEADER_IDC,
	SETTINGS_DISTANCE_OBJECTS_SLIDER_IDC,
	SETTINGS_DISTANCE_OBJECTS_INFO_IDC,
	SETTINGS_TASKFORCE_BACKGROUND_IDC,
	SETTINGS_TASKFORCE_FRAME_IDC,
	SETTINGS_TASKFORCE_SLIDER_IDC,
	SETTINGS_TASKFORCE_HEADER_IDC,
	SETTINGS_TASKFORCE_INFO_IDC
};

class SETTINGS_FPS_HEADER: RscStructuredText
{
	idc = SETTINGS_FPS_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>IPS</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.649531 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_FPS_INFO: RscStructuredText
{
	idc = SETTINGS_FPS_INFO_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0.6};

	x = 0.649531 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_FPS_FRAME: RscFrame
{
	idc = SETTINGS_FPS_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.649531 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
};

class SETTINGS_DISTANCES_HEADER: RscStructuredText
{
	idc = SETTINGS_DISTANCES_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Distance d'affichage du terrain et des objets</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.335156 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCES_BACKGROUND: RscText
{
	idc = SETTINGS_DISTANCES_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.335156 * safezoneW;
	h = 0.143 * safezoneH;
};
class SETTINGS_DISTANCES_FRAME: RscFrame
{
	idc = SETTINGS_DISTANCES_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.335156 * safezoneW;
	h = 0.165 * safezoneH;
};

class SETTINGS_DISTANCE_LAND_HEADER: RscStructuredText
{
	idc = SETTINGS_DISTANCE_LAND_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>A pieds</t>";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_LAND_SLIDER: RscSlider
{
	idc = SETTINGS_DISTANCE_LAND_SLIDER_IDC;
	onSliderPosChanged = "[_this select 1, 0] call public_fnc_APP_settings_slider;";
	
	x = 0.438125 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_LAND_INFO: RscStructuredText
{
	idc = SETTINGS_DISTANCE_LAND_INFO_IDC;
	colorBackground[] = {0,0,0,0};
	
	x = 0.618594 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class SETTINGS_DISTANCE_VEHICLES_HEADER: RscStructuredText
{
	idc = SETTINGS_DISTANCE_VEHICLES_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Véhicules terrestres</t>";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_VEHICLES_SLIDER: RscSlider
{
	idc = SETTINGS_DISTANCE_VEHICLES_SLIDER_IDC;
	onSliderPosChanged = "[_this select 1, 1] call public_fnc_APP_settings_slider;";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_VEHICLES_INFO: RscStructuredText
{
	idc = SETTINGS_DISTANCE_VEHICLES_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class SETTINGS_DISTANCE_AIR_HEADER: RscStructuredText
{
	idc = SETTINGS_DISTANCE_AIR_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Véhicules aériens</t>";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_AIR_SLIDER: RscSlider
{
	idc = SETTINGS_DISTANCE_AIR_SLIDER_IDC;
	onSliderPosChanged = "[_this select 1, 2] call public_fnc_APP_settings_slider;";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_AIR_INFO: RscStructuredText
{
	idc = SETTINGS_DISTANCE_AIR_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class SETTINGS_DISTANCE_OBJECTS_HEADER: RscStructuredText
{
	idc = SETTINGS_DISTANCE_OBJECTS_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Objets</t>";
	colorBackground[] = {0,0,0,0};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_OBJECTS_SLIDER: RscSlider
{
	idc = SETTINGS_DISTANCE_OBJECTS_SLIDER_IDC;
	onSliderPosChanged = "[_this select 1, 3] call public_fnc_APP_settings_slider;";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_DISTANCE_OBJECTS_INFO: RscStructuredText
{
	idc = SETTINGS_DISTANCE_OBJECTS_INFO_IDC;
	colorBackground[] = {0,0,0,0};

	x = 0.618594 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class SETTINGS_TASKFORCE_BACKGROUND: RscText
{
	idc = SETTINGS_TASKFORCE_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.4175 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.044 * safezoneH;
};
class SETTINGS_TASKFORCE_FRAME: RscFrame
{
	idc = SETTINGS_TASKFORCE_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.4175 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.066 * safezoneH;
};
class SETTINGS_TASKFORCE_SLIDER: RscSlider
{
	idc = SETTINGS_TASKFORCE_SLIDER_IDC;
	onSliderPosChanged = "[_this select 1, 4] call public_fnc_APP_settings_slider;";

	x = 0.422656 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.170156 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_TASKFORCE_HEADER: RscStructuredText
{
	idc = SETTINGS_TASKFORCE_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Volume des voix TaskForceRadio</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.4175 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.022 * safezoneH;
};
class SETTINGS_TASKFORCE_INFO: RscStructuredText
{
	idc = SETTINGS_TASKFORCE_INFO_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0};

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.022 * safezoneH;
};
