class RscDisplayShopVirtual: RscDisplayDefaultInteraction
{
	idd = 2400;
	name= "RscDisplayShopVirtual";

	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\shops\background.jpg";

			x = 0.242187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.510469 * safezoneW;
			h = 0.407 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.510469 * safezoneW;
			h = 0.44 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			idc = 2401;

			x = 0.242187 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.510469 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.21125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.21125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.218751 * safezoneW + safezoneX;
			y = 0.356481 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.21125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
		};

		class PLAYER_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.567033 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.231 * safezoneH;
		};
		class PLAYER_HEADER: RscStructuredText
		{
			text = "<t align='center'>Vendre</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_LIST: RscListbox
		{
			idc = 2402;
			onLBDblClick = "[0] call AlysiaClient_fnc_shop_virtual_add;";
			
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.209 * safezoneH;
		};

		class PLAYER_ADD_SINGLE_IMAGE: RscPicture
		{
			idc = 2403;
			text = "lyeed_IMG\data\shops\actions\action_player_single.paa";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_ADD_SINGLE_BUTTON: RscButtonSilent
		{
			idc = 2404;
			action = "[0] call AlysiaClient_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2403,""lyeed_IMG\data\shops\actions\action_player_single_select.paa""];";
			onMouseExit = "ctrlSetText[2403,""lyeed_IMG\data\shops\actions\action_player_single.paa""];";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_ADD_DOUBLE_IMAGE: RscPicture
		{
			idc = 2405;
			text = "lyeed_IMG\data\shops\actions\action_player_double.paa";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_ADD_DOUBLE_BUTTON: RscButtonSilent
		{
			idc = 2406;
			action = "[0, true] call AlysiaClient_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2405,""lyeed_IMG\data\shops\actions\action_player_double_select.paa""];";
			onMouseExit = "ctrlSetText[2405,""lyeed_IMG\data\shops\actions\action_player_double.paa""];";

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TARGET_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.2525 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.231 * safezoneH;
		};
		class TARGET_HEADER: RscStructuredText
		{
			text = "<t align='center'>Acheter</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TARGET_LIST: RscListbox
		{
			idc = 2407;
			onLBDblClick = "[1] call AlysiaClient_fnc_shop_virtual_add;";
			
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.209 * safezoneH;
		};

		class TARGET_ADD_IMAGE: RscPicture
		{
			idc = 2408;
			text = "lyeed_IMG\data\shops\actions\action_target.paa";

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TARGET_ADD_BUTTON: RscButtonSilent
		{
			idc = 2409;
			action = "[1] call AlysiaClient_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2408,""lyeed_IMG\data\shops\actions\action_target_select.paa""];";
			onMouseExit = "ctrlSetText[2408,""lyeed_IMG\data\shops\actions\action_target.paa""];";

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TMP_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.30922 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class TMP_HEADER: RscStructuredText
		{
			text = "<t align='center'>Panier</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TMP_LIST: RscListbox
		{
			idc = 2410;
			onLBDblClick = "_this call AlysiaClient_fnc_shop_virtual_remove;";
			
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class TMP_INFO_BILL: RscStructuredText
		{
			idc = 2411;
			colorBackground[] = {0,0,0,0.8};

			x = 0.309219 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.11 * safezoneH;
		};

		class MISC: RscPicture
		{
			idc = 2417;
			text = "lyeed_IMG\data\global\action_buy.paa";

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ACTION_VALIDATE_BACKGROUND: RscText
		{
			idc = 2412;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_VALIDATE_FRAME: RscFrame
		{
			idc = 2413;
			
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_VALIDATE_TEXT: RscStructuredText
		{
			idc = 2414;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Valider</t>";
			
			x = 0.670156 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_VALIDATE_IMAGE: RscPicture
		{
			idc = 2415;
			text = "lyeed_IMG\data\global\action_buy.paa";
			
			x = 0.641302 * safezoneW + safezoneX;
			y = 0.657593 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042963 * safezoneH;
		};
		class ACTION_VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 2416;
			action = "[] call AlysiaClient_fnc_shop_virtual_buysell;";
			onMouseEnter = "ctrlSetText[2415,""lyeed_IMG\data\global\action_buy_select.paa""];ctrlShow[2413, false];((findDisplay 2400) displayCtrl 2412) ctrlSetBackgroundColor [1,1,1,1];((findDisplay 2400) displayCtrl 2414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Valider</t>"";";
			onMouseExit = "ctrlSetText[2415,""lyeed_IMG\data\global\action_buy.paa""];if (ctrlVisible 2415) then {ctrlShow[2413, true];};((findDisplay 2400) displayCtrl 2412) ctrlSetBackgroundColor [0,0,0,0.6];((findDisplay 2400) displayCtrl 2414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Valider</t>"";";

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
