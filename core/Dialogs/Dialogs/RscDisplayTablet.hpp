class RscDisplayTablet: default_base_dialog
{
	idd = 7500;
	name = "RscDisplayTablet";
	onLoad = 
	"\
		uiNamespace setVariable[""tablet"", _this select 0];\
		uiNamespace setVariable[""main_status"", 0];\
	";
	
	class controlsBackground
	{
		class FRAME: RscPicture
		{
			idc = -1;
			text = "\lyeed\images\frame_test2.paa";

			x = 0.292971 * safezoneW + safezoneX;
			y = 0.30191 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.451 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = 7502;
			text = "\lyeed\images\loading_screen.jpg";

			x = 0.316437 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.369167 * safezoneW;
			h = 0.375852 * safezoneH;
		};
	};

	class controls
	{
		class STATUS_BAR: RscStructuredText
		{
			idc = 7501;
			font = "PuristaSemiBold";
			colorBackground[] = {0,0,0,0.6};

			x = 0.316231 * safezoneW + safezoneX;
			y = 0.6925 * safezoneH + safezoneY;
			w = 0.369186 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class MAIN_BUTTON_IMAGE: RscPicture
		{
			idc = 7507;
			text = "\lyeed\images\home_basic.paa";

			x = 0.680469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class MAIN_BUTTON_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "uiNamespace setVariable[""main_status"", 0]; [""MAIN""] spawn public_fnc_tabletApp;";
			onMouseEnter = "ctrlSetText[7507,""\lyeed\images\home_select.paa""];";
			onMouseExit = "ctrlSetText[7507,""\lyeed\images\home_basic.paa""];";
			tooltip = "Menu principal";

			x = 0.680469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		#include "tablet_apps\main.hpp"
		#include "tablet_apps\solde.hpp"
		#include "tablet_apps\settings.hpp"
		#include "tablet_apps\vehicles.hpp"
		#include "tablet_apps\server.hpp"
		#include "tablet_apps\store.hpp"
		#include "tablet_apps\help.hpp"
		#include "tablet_apps\phone.hpp"
		#include "tablet_apps\licenses.hpp"
		#include "tablet_apps\faction.hpp"
		#include "tablet_apps\market.hpp"
	};
};