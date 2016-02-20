class RscDisplayModifyArrest: RscDisplayDefaultInteraction
{	
	idd = 19000;
	name = "RscDisplayModifyArrest";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.262883 * safezoneW + safezoneX;
			y = 0.290923 * safezoneH + safezoneY;
			w = 0.474233 * safezoneW;
			h = 0.374138 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.262883 * safezoneW + safezoneX;
			y = 0.290923 * safezoneH + safezoneY;
			w = 0.474233 * safezoneW;
			h = 0.374138 * safezoneH;
		};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t size='1.5' align='center'>Gestion de Peine</t>";

			x = 0.262883 * safezoneW + safezoneX;
			y = 0.290923 * safezoneH + safezoneY;
			w = 0.474233 * safezoneW;
			h = 0.0330121 * safezoneH;
		};
		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.0439999 * safezoneH;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.0439999 * safezoneH;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.239735 * safezoneW + safezoneX;
			y = 0.355871 * safezoneH + safezoneY;
			w = 0.0154641 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.0309282 * safezoneW;
			h = 0.0440162 * safezoneH;
		};
		class OPTION_BACK_FRAME: OPTION_BACK_FRAME
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.400964 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.0439999 * safezoneH;
		};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.400964 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.0439999 * safezoneH;
		};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE
		{
			x = 0.239456 * safezoneW + safezoneX;
			y = 0.412045 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON
		{
			x = 0.231955 * safezoneW + safezoneX;
			y = 0.400964 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.0439999 * safezoneH;
		};
		class INFOS_FRAME: RscFrame
		{
			idc = 19001;

			x = 0.283502 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.297109 * safezoneH;
		};
		class INFOS_BACKGROUND: RscStructuredText
		{
			idc = 19002;

			x = 0.283502 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.297109 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class INFOS_TITLE: RscStructuredText
		{
			idc = 19003;
			text = "<t align='center'>Informations Prison</t>";

			x = 0.283502 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class INFOS_TXT_1_L: RscStructuredText
		{
			idc = 19004;
			text = "<t align='left' size='0.8'>Nom</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFO_TXT_2_L: RscStructuredText
		{
			idc = 19005;
			text = "<t align='left' size='0.8'>Propriétaires</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFO_TXT_3_L: RscStructuredText
		{
			idc = 19006;
			text = "<t align='left' size='0.8'>Cellules</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_4_L: RscStructuredText
		{
			idc = 19007;
			text = "<t align='left' size='0.8'>Durée minimale</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_5_L: RscStructuredText
		{
			idc = 19008;
			text = "<t align='left' size='0.8'>Durée maximale</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.511004 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_6_L: RscStructuredText
		{
			idc = 19009;
			text = "<t align='left' size='0.8'>Caution</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.544016 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_7_L: RscStructuredText
		{
			idc = 19010;
			text = "<t align='left' size='0.8'>Caution Minimale</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.577028 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_8L: RscStructuredText
		{
			idc = 19011;
			text = "<t align='left' size='0.8'>Caution Maximale</t>";

			x = 0.288657 * safezoneW + safezoneX;
			y = 0.61004 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_1_R: RscStructuredText
		{
			idc = 19012;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_2_R: RscStructuredText
		{
			idc = 19013;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_3_R: RscStructuredText
		{
			idc = 19014;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_4_R: RscStructuredText
		{
			idc = 19015;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_5_R: RscStructuredText
		{
			idc = 19016;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.511004 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_6_R: RscStructuredText
		{
			idc = 19017;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.544016 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_7_R: RscStructuredText
		{
			idc = 19018;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.577028 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class INFOS_TXT_8_R: RscStructuredText
		{
			idc = 19019;

			x = 0.335049 * safezoneW + safezoneX;
			y = 0.61004 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_FRAME: RscFrame
		{
			idc = 19020;

			x = 0.432989 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.297109 * safezoneH;
		};	
		class PEINE_BACKGOUND: RscStructuredText
		{
			idc = 19021;

			x = 0.432989 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.297109 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class PEINE_TITLE: RscStructuredText
		{
			idc = 19022;
			text = "<t align='center'>Peine Actuelle</t>";

			x = 0.432989 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.128868 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class PEINE_TXT_1_L: RscStructuredText
		{
			idc = 19023;
			text = "<t align='left' size='0.8'>Nom</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_2_L: RscStructuredText
		{
			idc = 19024;
			text = "<t align='left' size='0.8'>Age</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_3_L: RscStructuredText
		{
			idc = 19025;
			text = "<t align='left' size='0.8'>Nationnalité</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_4_L: RscStructuredText
		{
			idc = 19026;
			text = "<t align='left' size='0.8'>Numéro de cellule</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_5_L: RscStructuredText
		{
			idc = 19027;
			text = "<t align='left' size='0.8'>Durée de la peine</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.511004 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_6_L: RscStructuredText
		{
			idc = 19028;
			text = "<t align='left' size='0.8'>Caution de la peine</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.544016 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_1_R: RscStructuredText
		{
			idc = 19029;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_2_R: RscStructuredText
		{
			idc = 19030;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_3_R: RscStructuredText
		{
			idc = 19031;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_4_R: RscStructuredText
		{
			idc = 19032;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_5_R: RscStructuredText
		{
			idc = 19033;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.511004 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_TXT_6_R: RscStructuredText
		{
			idc = 19034;

			x = 0.484536 * safezoneW + safezoneX;
			y = 0.544016 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_REASON_FRAME: RscFrame
		{
			idc = 19035;
			x = 0.438143 * safezoneW + safezoneX;
			y = 0.577028 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0550202 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class PEINE_REASON_TITLE: RscStructuredText
		{
			idc = 19036;
			text = "<t align='left' size='0.8'>Raison de la peine :</t>";

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.577028 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PEINE_REASON_TEXT: RscStructuredText
		{
			idc = 19037;

			x = 0.438143 * safezoneW + safezoneX;
			y = 0.599036 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0330121 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_FRAME: RscFrame
		{
			idc = 19038;

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.242089 * safezoneH;
		};
		class MODIFY_BACKGROUND: RscStructuredText
		{
			idc = 19039;

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.242089 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class MODIFY_TITLE: RscStructuredText
		{
			idc = 19040;
			text = "<t align='center'>Modifier Peine</t>";

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.345943 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class MODIFY_TXT_1: RscStructuredText
		{
			idc = 19041;
			text = "<t align='left' size='0.8'>Numéro cellule</t>";

			x = 0.58763 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_TXT_2: RscStructuredText
		{
			idc = 19042;
			text = "<t align='left' size='0.8'>Durée peine</t>";

			x = 0.58763 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_TXT_3: RscStructuredText
		{
			idc = 19043;
			text = "<t align='left' size='0.8'>Caution peine</t>";

			x = 0.58763 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.0721659 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_EDIT_1: RscEdit
		{
			idc = 19044;
			text = "";
			x = 0.659796 * safezoneW + safezoneX;
			y = 0.378956 * safezoneH + safezoneY;
			w = 0.0515471 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class MODIFY_EDIT_2: RscEdit
		{
			idc = 19045;
			text = "";
			x = 0.659796 * safezoneW + safezoneX;
			y = 0.411968 * safezoneH + safezoneY;
			w = 0.0515471 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class MODIFY_EDIT_3: RscEdit
		{
			idc = 19046;
			text = "";
			x = 0.659796 * safezoneW + safezoneX;
			y = 0.44498 * safezoneH + safezoneY;
			w = 0.0515471 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class MODIFY_REASON_FRAME: RscFrame
		{
			idc = 19047;
			x = 0.58763 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.123713 * safezoneW;
			h = 0.0550202 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class MODIFY_REASON_TITLE: RscStructuredText
		{
			idc = 19048;
			text = "<t align='left' size='0.8'>Raison de la peine :</t>";

			x = 0.58763 * safezoneW + safezoneX;
			y = 0.477992 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_REASON_EDIT: RscEdit
		{
			idc = 19049;

			x = 0.592785 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.113404 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class MODIFY_COMFIRM_TXT: RscStructuredText
		{
			idc = 19050;
			text = "<t align='left' size='0.8'>Comfirmer modifications</t>";

			x = 0.58763 * safezoneW + safezoneX;
			y = 0.55502 * safezoneH + safezoneY;
			w = 0.118558 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class MODIFY_COMFIRM_CHECKBOX: RscCheckbox
		{
			idc = 19051;
			x = 0.690724 * safezoneW + safezoneX;
			y = 0.55502 * safezoneH + safezoneY;
			w = 0.0154641 * safezoneW;
			h = 0.0220081 * safezoneH;
		};
		class RELEASE_BACKGROUND: RscStructuredText
		{
			idc = 19052;

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.588032 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.0550202 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class RELEASE_FRAME: RscFrame
		{
			idc = 19053;

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.588032 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.0550202 * safezoneH;
		};
		class RELEASE_TEXT: RscStructuredText
		{
			idc = 19054;
			text = "<t align='center' size='1.5'>Libérer</t>";

			x = 0.618558 * safezoneW + safezoneX;
			y = 0.599036 * safezoneH + safezoneY;
			w = 0.08763 * safezoneW;
			h = 0.0330121 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class RELEASE_IMAGE: RscPicture
		{
			idc = 19055;
			text = "lyeed_IMG\data\housing\actions\action_exit.paa";

			x = 0.588042 * safezoneW + safezoneX;
			y = 0.595955 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375185 * safezoneH;
		};
		class RELEASE_BUTTON: RscButtonSilent
		{
			idc = 19056;
			action = "[] spawn AlysiaClient_fnc_prisonModifyMenu_use_release;";
			onMouseEnter = "			ctrlShow[19053, false];			ctrlSetText[19055,""lyeed_IMG\data\auctionHouse\actions\action_exit_select.paa""];			((findDisplay 19000) displayCtrl 19052) ctrlSetBackgroundColor [1,1,1,1];			((findDisplay 19000) displayCtrl 19054) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#000000'>Libérer</t>"";";
			onMouseExit = "			ctrlShow[19053, true];			ctrlSetText[19055,""lyeed_IMG\data\auctionHouse\actions\action_exit.paa""];			((findDisplay 19000) displayCtrl 19052) ctrlSetBackgroundColor [0,0,0,0.6];			((findDisplay 19000) displayCtrl 19054) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#FFFFFF'>Libérer</t>"";";

			x = 0.582475 * safezoneW + safezoneX;
			y = 0.588032 * safezoneH + safezoneY;
			w = 0.134022 * safezoneW;
			h = 0.0550202 * safezoneH;
		};
	};
};

class RscDisplayArrest: RscDisplayDefaultInteraction
{	
	idd = 20000;
	name = "RscDisplayArrest";
	
	class controlsBackground: DEFAULT_controlsBackground
	{
		class BACKGROUND: BACKGROUND
		{
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.228437 * safezoneW;
			h = 0.374 * safezoneH;
		};
		class FRAME: FRAME
		{
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.228437 * safezoneW;
			h = 0.374 * safezoneH;
		};
	};

	class controls: DEFAULT_controls
	{
		class TITLE: TITLE
		{
			text = "<t align='center' size='1.5'>Arrestation</t>";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.227917 * safezoneW;
			h = 0.033 * safezoneH;
 		};

		class OPTION_EXIT_FRAME: OPTION_EXIT_FRAME
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BACKGROUND: OPTION_EXIT_BACKGROUND
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_IMAGE: OPTION_EXIT_IMAGE
		{
			x = 0.362864 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
		};
		class OPTION_EXIT_BUTTON: OPTION_EXIT_BUTTON
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
		};

		class OPTION_BACK_FRAME: OPTION_BACK_FRAME
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
		};
		class OPTION_BACK_BACKGROUND: OPTION_BACK_BACKGROUND
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
		};
		class OPTION_BACK_IMAGE: OPTION_BACK_IMAGE
		{
			x = 0.363385 * safezoneW + safezoneX;
			y = 0.433074 * safezoneH + safezoneY;
		};
		class OPTION_BACK_BUTTON: OPTION_BACK_BUTTON
		{
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
		};

		class CELLULE_TXT: RscStructuredText
		{
			idc = 20001;
			text = "<t align='left' size='1'>Cellule</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TIME_TXT: RscStructuredText
		{
			idc = 20002;
			text = "<t align='left' size='1'>Durée</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BAIL_TXT: RscStructuredText
		{
			idc = 20003;
			text = "<t align='left' size='1'>Caution</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SUSPECT_TXT: RscStructuredText
		{
			idc = 20004;
			colorBackground[] = {0,0,0,0.8};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class SUSPECT_FRAME: RscFrame
		{
			idc = 20005;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CELLULE_LISTBOX: RscCombo
		{
			idc = 20006;
			colorBackground[] = {0,0,0,1};

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TIME_FRAME: RscFrame
		{
			idc = 20007;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BAIL_FRAME: RscFrame
		{
			idc = 20008;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CELLULE_FRAME: RscFrame
		{
			idc = 20009;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TIME_EDIT: RscEdit
		{
			idc = 20010;
			text = "0";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BAIL_EDIT: RscEdit
		{
			idc = 20011;
			text = "0";

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REASON_EDIT: RscEdit
		{
			idc = 20012;
			text = "0";

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class REASON_TITLE_FRAME: RscFrame
		{
			idc = 20013;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REASON_TITLE: RscStructuredText
		{
			idc = 20014;
			text = "<t align='center' size='1'>Raison</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class REASON_EDIT_FRAME: RscFrame
		{
			idc = 20015;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class VALIDATE_BACKGROUND: RscStructuredText
		{
			idc = 20016;
			colorBackground[] = {0,0,0,0.6};

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_FRAME: RscFrame
		{
			idc = 20017;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class VALIDATE_IMAGE: RscPicture
		{
			idc = 20018;
			text = "lyeed_IMG\data\interactions\player_to_player_basics\action_arrest.paa";

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.61858 * safezoneH + safezoneY;
			w = 0.0216146 * safezoneW;
			h = 0.0375186 * safezoneH;
		};
		class VALIDATE_TEXT: RscStructuredText
		{
			idc = 20019;
			text = "<t align='center' size='1.5'>Arrêter</t>";

			x = 0.484531 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class VALIDATE_BUTTON: RscButtonSilent
		{
			idc = 20020;
			action = "[] call AlysiaClient_fnc_prisonMenu_use_validate;";
			onMouseEnter = "ctrlShow[20017, false];ctrlSetText[20018,""lyeed_IMG\data\interactions\player_to_player_basics\action_arrest_select.paa""];((findDisplay 20000) displayCtrl 20016) ctrlSetBackgroundColor [1,1,1,1];((findDisplay 20000) displayCtrl 20019) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#000000'>Arrêter</t>"";";
			onMouseExit = "ctrlShow[20017, true];ctrlSetText[20018,""lyeed_IMG\data\interactions\player_to_player_basics\action_arrest.paa""];((findDisplay 20000) displayCtrl 20016) ctrlSetBackgroundColor [0,0,0,0.6];((findDisplay 20000) displayCtrl 20019) ctrlSetStructuredText parseText ""<t align='center' size='1.5' color='#FFFFFF'>Arrêter</t>"";";

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
