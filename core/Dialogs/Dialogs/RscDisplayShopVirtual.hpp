class RscDisplayShopVirtual: default_base_dialog
{
	idd = 2400;
	name= "RscDisplayShopVirtual";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\shops\background.jpg";

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.469219 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class FRAME: RscPicture
		{
			text = "lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.242187 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.510469 * safezoneW;
			h = 0.44 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 2401;
			colorBackground[] = {0,0,0,0.8};

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.469219 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class PLAYER_FRAME: RscFrame
		{
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class PLAYER_HEADER: RscStructuredText
		{
			text = "<t align='center'>Vous</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.587656 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PLAYER_LIST: RscListbox
		{
			idc = 2402;
			colorBackground[] = {0,0,0,0.6};
			onLBDblClick = "[0] call public_fnc_shop_virtual_add;";
			
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class PLAYER_ADD_SINGLE_IMAGE: RscPicture
		{
			idc = 2403;
			text = "lyeed_IMG\data\shops\actions\action_player_single.paa";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_ADD_SINGLE_BUTTON: RscButtonSilent
		{
			idc = 2404;
			action = "[0] call public_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2403,""lyeed_IMG\data\shops\actions\action_player_single_select.paa""];";
			onMouseExit = "ctrlSetText[2403,""lyeed_IMG\data\shops\actions\action_player_single.paa""];";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PLAYER_ADD_DOUBLE_IMAGE: RscPicture
		{
			idc = 2405;
			text = "lyeed_IMG\data\shops\actions\action_player_double.paa";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PLAYER_ADD_DOUBLE_BUTTON: RscButtonSilent
		{
			idc = 2406;
			action = "[0, true] call public_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2405,""lyeed_IMG\data\shops\actions\action_player_double_select.paa""];";
			onMouseExit = "ctrlSetText[2405,""lyeed_IMG\data\shops\actions\action_player_double.paa""];";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TARGET_FRAME: RscFrame
		{
			
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class TARGET_HEADER: RscStructuredText
		{
			text = "<t align='center'>Cible</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TARGET_LIST: RscListbox
		{
			idc = 2407;
			colorBackground[] = {0,0,0,0.6};
			onLBDblClick = "[1] call public_fnc_shop_virtual_add;";
			
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class TARGET_ADD_IMAGE: RscPicture
		{
			idc = 2408;
			text = "lyeed_IMG\data\shops\actions\action_target.paa";

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TARGET_ADD_BUTTON: RscButtonSilent
		{
			idc = 2409;
			action = "[1] call public_fnc_shop_virtual_add;";
			onMouseEnter = "ctrlSetText[2408,""lyeed_IMG\data\shops\actions\action_target_select.paa""];";
			onMouseExit = "ctrlSetText[2408,""lyeed_IMG\data\shops\actions\action_target.paa""];";

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TMP_FRAME: RscFrame
		{
			
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class TMP_HEADER: RscStructuredText
		{
			text = "<t align='center'>Panier</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TMP_LIST: RscListbox
		{
			idc = 2410;
			onLBDblClick = "_this call public_fnc_shop_virtual_remove;";
			
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.198 * safezoneH;
		};
		class TMP_INFO_BILL: RscStructuredText
		{
			idc = 2411;
			colorBackground[] = {0,0,0,0.8};

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TMP_INFO_WEIGHT: RscStructuredText
		{
			idc = 2422;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_VALIDATE_BACKGROUND: RscText
		{
			idc = 2412;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_VALIDATE_FRAME: RscFrame
		{
			idc = 2413;
			
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_VALIDATE_TEXT: RscStructuredText
		{
			idc = 2414;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Valider</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_VALIDATE_IMAGE: RscPicture
		{
			idc = 2415;
			text = "lyeed_IMG\data\shops\actions\action_buy.paa";
			
			x = 0.413385 * safezoneW + safezoneX;
			y = 0.648222 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042963 * safezoneH;
		};
		class ACTION_VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 2416;
			action = "[] call public_fnc_shop_virtual_buysell;";
			onMouseEnter = "			ctrlSetText[2415,""lyeed_IMG\data\shops\actions\action_buy_select.paa""];			ctrlShow[2413, false];			((findDisplay 2400) displayCtrl 2412) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 2400) displayCtrl 2414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Valider</t>"";";
			onMouseExit = "			ctrlSetText[2415,""lyeed_IMG\data\shops\actions\action_buy.paa""];			if (ctrlVisible 2415) then {				ctrlShow[2413, true];			};			((findDisplay 2400) displayCtrl 2412) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 2400) displayCtrl 2414) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Valider</t>"";";

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 2417;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 2418;
			
			x = 0.5 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 2419;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 2420;
			text = "lyeed_IMG\data\shops\actions\action_exit.paa";
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = 2421;
			action = "closeDialog 0;";
			onMouseEnter = "			ctrlSetText[2420,""lyeed_IMG\data\shops\actions\action_exit_select.paa""];			ctrlShow[2418, false];			((findDisplay 2400) displayCtrl 2417) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 2400) displayCtrl 2419) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "			ctrlSetText[2420,""lyeed_IMG\data\shops\actions\action_exit.paa""];			ctrlShow[2418, true];			((findDisplay 2400) displayCtrl 2417) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 2400) displayCtrl 2419) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.5 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
