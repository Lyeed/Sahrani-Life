class RscDisplayCompanyCreate: RscDisplayDefaultInteraction
{
	idd = 90000;
	name = "RscDisplayCompanyCreate";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\companies\background.jpg";

			x = 0.314375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.429 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t align='center' size='1.5'>Création d'entreprise</t>";

			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.290656 * safezoneW + safezoneX;
			y = 0.3361 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};

		class ACTION_BACKGROUND: RscText
		{
			idc = 90001;
			colorBackground[] = {0,0,0,0.6};

			x = 0.530937 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_FRAME: RscFrame
		{
			idc = 90002;

			x = 0.530937 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_TEXT: RscStructuredText
		{
			idc = 90003;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Créer</t>";

			x = 0.565587 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_IMAGE: RscPicture
		{
			idc = 90004;
			text = "lyeed_IMG\data\companies\action_company.paa";

			x = 0.532907 * safezoneW + safezoneX;
			y = 0.644934 * safezoneH + safezoneY;
			w = 0.0257291 * safezoneW;
			h = 0.0466666 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 90005;
			action = "[] spawn public_fnc_company_create_action;";
			onMouseEnter = "			ctrlSetText[90004,""lyeed_IMG\data\companies\action_company_select.paa""];			ctrlShow[90002, false];			((findDisplay 90000) displayCtrl 90001) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 90000) displayCtrl 90003) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Créer</t>"";";
			onMouseExit = "			ctrlSetText[90004,""lyeed_IMG\data\companies\action_company.paa""];			if (ctrlVisible 90004) then {				ctrlShow[90002, true];			};			((findDisplay 90000) displayCtrl 90001) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 90000) displayCtrl 90003) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Créer</t>"";";

			x = 0.530937 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class TYPES_FRAME: RscFrame
		{
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.363 * safezoneH;
		};
		class TYPES_HEADER: RscStructuredText
		{
			text = "<t align='center'>Types</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TYPES_LIST: RscListbox
		{
			idc = 90006;
			onLBSelChanged = "_this call public_fnc_company_create_update;";
			rowHeight = 0.05;

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class SELECT_FRAME: RscFrame
		{
			idc = 90007;

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class SELECT_TITLE: RscStructuredText
		{
			idc = 90008;
			colorBackground[] = {0,0,0,0.8};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_INFO: RscStructuredText
		{
			idc = 90009;
			colorBackground[] = {0,0,0,0.6};

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.209 * safezoneH;
		};

		class SELECT_EDIT_HEADER: RscStructuredText
		{
			idc = 90010;
			text = "<t align='center'>Nom de l'entreprise</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_EDIT: RscEdit
		{
			idc = 90011;

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

class RscDisplayCompanyConstruction: RscDisplayDefaultInteraction
{
	idd = 91000;
	name = "RscDisplayCompanyConstruction";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\companies\background.jpg";

			x = 0.314375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.429 * safezoneH;
		};
	};
	
	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t align='center' size='1.5'>Matériaux</t>";

			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.360937 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.290656 * safezoneW + safezoneX;
			y = 0.3361 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
		};

		class REQUIRE_FRAME: RscFrame
		{
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.363 * safezoneH;
		};
		class REQUIRE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Types</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REQUIRE_LIST: RscListbox
		{
			idc = 91001;

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class INVENTORY_FRAME: RscFrame
		{
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.363 * safezoneH;
		};
		class INVENTORY_HEADER: RscStructuredText
		{
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INVENTORY_LIST: RscListbox
		{
			idc = 91002;
			onLBSelChanged = "_this call public_fnc_company_construction_update_select;";

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class ACTION_IMAGE: RscPicture
		{
			idc = 91003;
			text = "lyeed_IMG\data\companies\create\arrow_left.paa";

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class ACTION_BUTTON: RscButtonSilent
		{
			idc = 91004;
			action = "[] spawn public_fnc_company_construction_action;";
			onMouseEnter = "ctrlSetText[91003,""lyeed_IMG\data\companies\create\arrow_left_select.paa""];";
			onMouseExit = "ctrlSetText[91003,""lyeed_IMG\data\companies\create\arrow_left.paa""];";

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};

class RscDisplayCompanyInfo: RscDisplayDefaultInteraction
{
	idd = 92000;
	name = "RscDisplayCompanyInfo";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			text = "lyeed_IMG\data\companies\background.jpg";
		};
		class FRAME: FRAME {};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Entreprise</t>";
		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME {};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND {};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE {};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON {};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME {};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND {};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE {};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON {};

		class NAME_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class NAME_HEADER: RscStructuredText
		{
			text = "<t align='center'>Nom</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class NAME_INFO: RscStructuredText
		{
			idc = 92001;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TYPE_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class TYPE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Type</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TYPE_INFO: RscStructuredText
		{
			idc = 92002;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class OWNER_FRAME: RscFrame
		{
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class OWNER_HEADER: RscStructuredText
		{
			text = "<t align='center'>Propriétaire</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OWNER_INFO: RscStructuredText
		{
			idc = 92003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
