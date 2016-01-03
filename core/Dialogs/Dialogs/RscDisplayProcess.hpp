class RscDisplayProcess: default_base_dialog
{
	idd = 53000;
	name = "RscDisplayProcess";
	
	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\process\background.jpg";

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.352 * safezoneH;
		};

		class FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.319687 * safezoneW;
			h = 0.385 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = 53001;
			colorBackground[] = {0,0,0,1};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: RscFrame
		{
			idc = 53002;
			colorText[] = {0,0,0,1};

			x = 0.309219 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_BACKGROUND: RscText
		{
			idc = 53003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.309219 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OPTION_EXIT_IMAGE: RscPicture
		{
			idc = 53004;
			text = "lyeed_IMG\data\global\option_exit.paa";

			x = 0.316458 * safezoneW + safezoneX;
			y = 0.314296 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_EXIT_BUTTON: RscButtonSilent
		{
			action = "closedialog 0;";
			onMouseEnter = "((findDisplay 53000) displayCtrl 53003) ctrlSetBackgroundColor [1,1,1,1];\
			ctrlSetText[53004,""lyeed_IMG\data\global\option_exit_select.paa""];\
			ctrlShow[53002, false];";
			onMouseExit = "((findDisplay 53000) displayCtrl 53003) ctrlSetBackgroundColor [0,0,0,0.6];\
			ctrlSetText[53004,""lyeed_IMG\data\global\option_exit.paa""];\
			ctrlShow[53002, true];";
			tooltip = "Quitter";

			x = 0.309219 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class REQUIERE_FRAME: RscFrame
		{
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class REQUIERE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Requis</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REQUIERE_LIST: RscListbox
		{
			idc = 53005;

			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class AMOUNT_FRAME: RscFrame
		{
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class AMOUNT_HEADER: RscStructuredText
		{
			text = "<t align='center'>Montant</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class AMOUNT_EDIT: RscEdit
		{
			idc = 53006;

			x = 0.45875 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class WEIGHT_HEADER: RscStructuredText
		{
			text = "<t align='center'>Poids</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class WEIGHT_INFO: RscStructuredText
		{
			idc = 53013;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class WEIGHT_FRAME: RscFrame
		{
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TIMER_FRAME: RscFrame
		{
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TIME_HEADER: RscStructuredText
		{
			text = "<img image='lyeed_IMG\data\process\timer.paa'/> Temps approximatif";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TIME_INFO: RscStructuredText
		{
			idc = 53007;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.536093 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_FRAME: RscFrame
		{
			idc = 53008;
			colorText[] = {0,0,0,0.8};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BACKGROUND: RscStructuredText
		{
			idc = 53009;
			colorBackground[] = {0,0,0,0.6};

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 53010;
			colorBackground[] = {0,0,0,0};
			text = "<t align='left' size='1.3' color='#FFFFFF'>Traiter</t>";

			x = 0.572187 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 53011;
			text = "lyeed_IMG\data\process\action_process.paa";

			x = 0.538352 * safezoneW + safezoneX;
			y = 0.526922 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 53012;
			action = "closedialog 0; [g_interaction_process_type,parseNumber(ctrlText 53006),g_interaction_target] spawn public_fnc_process_action;";
			onMouseEnter = "\
			ctrlSetText[53011,""lyeed_IMG\data\process\action_process_select.paa""];\
			ctrlShow[53008, false];\
			((findDisplay 53000) displayCtrl 53009) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 53000) displayCtrl 53010) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Traiter</t>"";";
			onMouseExit = "\
			ctrlSetText[53011,""lyeed_IMG\data\process\action_process.paa""];\
			ctrlShow[53008, true];\
			((findDisplay 53000) displayCtrl 53009) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 53000) displayCtrl 53010) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Traiter</t>"";";

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
