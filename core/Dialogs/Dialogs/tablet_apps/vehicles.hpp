#define VEHICLES_DATA_PICTURE_IDC		7700
#define VEHICLES_DATA_FRAME_IDC			7701
#define VEHICLES_DATA_MAP_IDC			7702
#define VEHICLES_LIST_FRAME_IDC			7703
#define VEHICLES_LIST_HEADER_IDC		7704
#define VEHICLES_LIST_INFO_IDC			7705
#define VEHICLES_DISTANCE_HEADER_IDC	7706
#define VEHICLES_DISTANCE_INFO_IDC		7707

VEHICLES_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back.jpg";
VEHICLES_IDCS[] =
{
	VEHICLES_LIST_FRAME_IDC,
	VEHICLES_LIST_HEADER_IDC,
	VEHICLES_LIST_INFO_IDC
};

class VEHICLES_DATA_PICTURE: RscPicture
{
	idc = VEHICLES_DATA_PICTURE_IDC;
	text = "lyeed_IMG\data\tablet\backgrounds\vehicles_noSignal.jpg";

	x = 0.319531 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.257813 * safezoneW;
	h = 0.33 * safezoneH;
};
class VEHICLES_DATA_FRAME: RscFrame
{
	idc = VEHICLES_DATA_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.319531 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.257813 * safezoneW;
	h = 0.33 * safezoneH;
};
class VEHICLES_DATA_MAP: RscMapControl
{
	idc = VEHICLES_DATA_MAP_IDC;
	maxSatelliteAlpha = 0.75;
	alphaFadeStartScale = "STRTSCALE";
	alphaFadeEndScale = 1.29;

	x = 0.319532 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.257813 * safezoneW;
	h = 0.33 * safezoneH;
};

class VEHICLES_LIST_FRAME: RscFrame
{
	idc = VEHICLES_LIST_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.33 * safezoneH;
};
class VEHICLES_LIST_HEADER: RscStructuredText
{
	idc = VEHICLES_LIST_HEADER_IDC;
	text = "<t align='center'>Vos clefs</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
};
class VEHICLES_LIST_INFO: RscListbox
{
	idc = VEHICLES_LIST_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	onLBSelChanged = "\
		private[""_list"", ""_index"",""_distance""];\
		_list = _this select 0;\
		_index = _this select 1;\
		if ((_list lbText _index) isEqualTo ""Aucune"") exitWith {};\
		_distance = round(player distance (g_vehicles select (_list lbValue _index)));\
		((uiNamespace getVariable [""tablet"", displayNull]) displayCtrl 7707) ctrlSetStructuredText parseText format\
		[\
			""<t align='center'><t size='1.5'>%1</t><br/>mètre%2</t>"",\
			_distance,\
			if (_distance > 1) then {""s""} else {""""}\
		];\
	";

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.368926 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.231 * safezoneH;
};

class VEHICLES_DISTANCE_HEADER: RscStructuredText
{
	idc = VEHICLES_DISTANCE_HEADER_IDC;
	font = "PuristaSemiBold";
	text = "<t align='center'>Distance</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
};
class VEHICLES_DISTANCE_INFO: RscStructuredText
{
	idc = VEHICLES_DISTANCE_INFO_IDC;
	font = "PuristaSemiBold";
	colorBackground[] = {0,0,0,0.6};

	x = 0.587656 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.055 * safezoneH;
};
