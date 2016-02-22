#define HEADER_COLOR \
{ \
	"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", \
	"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", \
	"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", \
	"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])" \
}

class RscDisplayWelcomeCharacter: RscDisplayDefault
{
	idd = 1500;
	name= "RscDisplayWelcomeCharacter";

	class controlsBackground {};
	class controls
	{
		class CHAR_BACKGROUND: RscText
		{
			colorBackground[] = {0,0,0,0.6};

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class CHAR_FRAME: RscFrame
		{
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class CHAR_HEADER: RscStructuredText
		{
			text = "<t align='center' size='2px'>Informations de votre personnage</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class CHAR_FIRSTNAME_HEADER: RscStructuredText
		{
			text = "<t align='center'>Prénom</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.01925 * safezoneH;
		};
		class CHAR_FIRSTNAME_EDIT: RscEdit
		{
			idc = 1501;
			tooltip = "Prénom de votre personnage";

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CHAR_LASTNAME_HEADER: RscStructuredText
		{
			text = "<t align='center'>Nom</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_LASTNAME_EDIT: RscEdit
		{
			idc = 1502;
			tooltip = "Nom de votre personnage";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CHAR_BIRTH_HEADER: RscStructuredText
		{
			text = "<t align='center'>Date de naissance</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_BIRTH_YEAR: RscCombo
		{
			idc = 1503;
			tooltip = "Année de naissance";

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_BIRTH_MONTH: RscCombo
		{
			idc = 1509;
			tooltip = "Mois de naissance";

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_BIRTH_DAY: RscCombo
		{
			idc = 1510;
			tooltip = "Jour de naissance";

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CHAR_ORIGIN_HEADER: RscStructuredText
		{
			text = "<t align='center'>Origine</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_ORIGIN_LIST: RscCombo
		{
			idc = 1504;
			tooltip = "origine de votre personnage";

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CHAR_SEXE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Sexe</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CHAR_SEXE_LIST: RscCombo
		{
			idc = 1505;
			tooltip = "Sexe de votre personnage";

			h = 0.022 * safezoneH;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
		};

		class VALIDATE_BUTTON: RscButtonMenu
		{
			text = "VALIDER";
			onButtonClick = "[] spawn AlysiaClient_fnc_welcomeMenu_Proceed;";
			colorBackground[] = HEADER_COLOR;

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class EXIT_BUTTON: RscButtonMenu
		{
			text = "QUITTER";
			onButtonClick = "['Annulation de la création de profil.'] spawn AlysiaClient_fnc_errorExit;";
			colorBackground[] = HEADER_COLOR;

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ERROR_DISPLAY: RscStructuredText
		{
			idc = 1508;
			colorBackground[] = {0,0,0,0};

			x = 0.332656 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class INFO_BACKGROUND: RscText
		{
			colorBackground[] = {0,0,0,0.6};

			x = 0.123594 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.154 * safezoneH;
		};
		class INFO_FRAME: RscFrame
		{
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.176 * safezoneH;
		};
		class INFO_HEADER: RscStructuredText
		{
			text = "<t align='center'>Informations de l'île</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.123594 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class INFO_DATE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Date</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.154531 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.01925 * safezoneH;
		};
		class INFO_DATE_INFO: RscStructuredText
		{
			idc = 1506;

			x = 0.154531 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class INFO_TIME_HEADER: RscStructuredText
		{
			text = "<t align='center'>Heure</t>";
			colorBackground[] = HEADER_COLOR;

			x = 0.154531 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.01925 * safezoneH;
		};
		class INFO_TIME_INFO: RscStructuredText
		{
			idc = 1507;

			x = 0.154531 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

class RscDisplayWelcomeFaction: RscDisplayDefault
{
	idd = 809;
	name = "RscDisplayWelcomeFaction";
	
	class controlsBackground {};
	class controls
	{
		class LEFT_BACKGROUND: RscText
		{
			idc = 850;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.66 * safezoneH;
		};
		class LEFT_FRAME: RscFrame
		{
			idc = 851;
			colorText[] = {0,0,0,1};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.682 * safezoneH;
		};

		class LEFT_HEADER: RscStructuredText
		{
			idc = 852;
			colorBackground[] = {0.709804,0.105882,0.105882,1};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LEFT_IMAGE: RscPicture
		{
			idc = 853;
			text = "lyeed_IMG\data\faction\EAST_logo.paa";

			x = 0.0720312 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.154 * safezoneH;
		};
		class LEFT_LAND_HEADER: RscStructuredText
		{
			idc = 854;
			text = "<t align='center'>Région</t>";
			colorBackground[] = {0.709804,0.105882,0.105882,1};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LEFT_LAND_INFO: RscStructuredText
		{
			idc = 855;
			text = "<t size='2px' align='center'>SUD</t>";
			colorBackground[] = {0,0,0,0};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class LEFT_DESC_HEADER: RscStructuredText
		{
			idc = 856;
			text = "<t align='center'>Description</t>";
			colorBackground[] = {0.709804,0.105882,0.105882,1};
			
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LEFT_DESC_INFO: RscStructuredText
		{
			idc = 857;
			colorBackground[] = {0,0,0,0};
			text = "<t align='left'>Appellation</t><t align='right'>République populaire</t><br/><t align='left'>Régime</t><t align='right'>Autoritaire</t><br/><t align='left'>Suffrage</t><t align='right'>Aucun</t><br/><t align='left'>Force gouvernementale</t><t align='right'>La Garde</t><br/>			";

			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.374 * safezoneH;
		};

		class RIGHT_FRAME: RscFrame
		{
			idc = 860;
			colorText[] = {0,0,0,1};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.682 * safezoneH;
		};
		class RIGHT_BACKGROUND: RscText
		{
			idc = 861;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.66 * safezoneH;
		};
		class RIGHT_HEADER: RscStructuredText
		{
			idc = 862;
			colorBackground[] = {0,0.470588,0.831373,1};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RIGHT_IMAGE: RscPicture
		{
			idc = 863;
			text = "lyeed_IMG\data\faction\WEST_logo.paa";
			
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.154 * safezoneH;
		};

		class RIGHT_LAND_HEADER: RscStructuredText
		{
			idc = 864;
			text = "<t align='center'>Région</t>";
			colorBackground[] = {0,0.470588,0.831373,1};

			x = 0.793906 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RIGHT_LAND_INFO: RscStructuredText
		{
			idc = 865;
			text = "<t size='2px' align='center'>NORD</t>";
			colorBackground[] = {0,0,0,0};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class RIGHT_DESC_HEADER: RscStructuredText
		{
			idc = 866;
			text = "<t align='center'>Description</t>";
			colorBackground[] = {0,0.470588,0.831373,1};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RIGHT_DESC_INFO: RscStructuredText
		{
			idc = 867;
			text = "<t align='left'>Appelation</t><t align='right'>République parlementaire</t><br/><t align='left'>Régime</t><t align='right'>Démocratie</t><br/><t align='left'>Suffrage</t><t align='right'>Universel direct</t><br/><t align='left'>Force gouvernementale</t><t align='right'>La Milice</t><br/>			";
			colorBackground[] = {0,0,0,0};
			
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.385 * safezoneH;
		};


		class CHOICE_HEADER: RscStructuredText
		{
			text = "<t align='center' size='1.8px'>Choisissez votre nationalité selon votre région de départ</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.53625 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class LEFT_CHOICE_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.242187 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class LEFT_CHOICE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Sibranak SUD</t>";
			colorBackground[] = {0.709804,0.105882,0.105882,1};
			
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LEFT_CHOICE_IMAGE: RscPicture
		{
			idc = 810;
			text = "lyeed_IMG\data\welcome\welcome_faction_left_fade.jpg";
			
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class LEFT_CHOICE_BUTTON: RscButtonSilent
		{
			onMouseEnter = "ctrlShow[850,true];ctrlShow[851,true];ctrlShow[852,true];ctrlShow[853,true];ctrlShow[854,true];ctrlShow[855,true];ctrlShow[856,true];ctrlShow[857,true];ctrlSetText[810,""lyeed_IMG\data\welcome\welcome_faction_left.jpg""];playMusic [""welcome_EAST"", random 220];";
			onMouseExit = "ctrlShow[850,false];ctrlShow[851,false];ctrlShow[852,false];ctrlShow[853,false];ctrlShow[854,false];ctrlShow[855,false];ctrlShow[856,false];ctrlShow[857,false];ctrlSetText[810,""lyeed_IMG\data\welcome\welcome_faction_left_fade.jpg""];playMusic """";";
			action = "[] spawn{_action =[""Êtes-vous bien sûr ?"",""Validation"",""Valider"",""Annuler""] call BIS_fnc_guiMessage;if (_action) then {g_choice = ""SOUTH"";playMusic """";};};";

			x = 0.242187 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.22 * safezoneH;
		};

		class RIGHT_CHOICE_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class RIGHT_CHOICE_HEADER: RscStructuredText
		{
			text = "<t align='center'>Sibranak NORD</t>";
			colorBackground[] = {0,0.470588,0.831373,1};
			
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RIGHT_CHOICE_IMAGE: RscPicture
		{
			idc = 811;
			text = "lyeed_IMG\data\welcome\welcome_faction_right_fade.jpg";

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class RIGHT_CHOICE_BUTTON: RscButtonSilent
		{
			onMouseEnter = "ctrlShow[860,true];ctrlShow[861,true];ctrlShow[862,true];ctrlShow[863,true];ctrlShow[864,true];ctrlShow[865,true];ctrlShow[866,true];ctrlShow[867,true];ctrlSetText[811,""lyeed_IMG\data\welcome\welcome_faction_right.jpg""];playMusic [""welcome_WEST"", random 200];";
			onMouseExit = "ctrlShow[860,false];ctrlShow[861,false];ctrlShow[862,false];ctrlShow[863,false];ctrlShow[864,false];ctrlShow[865,false];ctrlShow[866,false];ctrlShow[867,false];ctrlSetText[811,""lyeed_IMG\data\welcome\welcome_faction_right_fade.jpg""];playMusic """";";
			action = "[] spawn{_action =[""Êtes-vous bien sûr ?"",""Validation"",""Valider"",""Annuler""] call BIS_fnc_guiMessage;if (_action) then {g_choice = ""NORTH"";playMusic """";};};";

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.22 * safezoneH;
		};
	};
};

#undef HEADER_COLOR
