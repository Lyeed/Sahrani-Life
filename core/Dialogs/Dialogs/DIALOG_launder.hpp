/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class DIALOG_LAUNDER_NAME : default_base_dialog
{
	idd = DIALOG_LAUNDER_IDD;
	name = #DIALOG_LAUNDER_NAME;

	class controlsBackground 
	{
		class Life_RscTitleBackground : Life_RscText 
		{
			idc = -1;
			text = "BLANCHIMENT";
			colorBackground[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.3843])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.7019])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.8862])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_A', 0.7])"
			};

			x = 0.3;	y = 0.2;
			w = 0.47;	h = (1 / 25);
		};
		
		class MainBackground : Life_RscText 
		{
			idc = -1;
			colorBackground[] =
			{
				0, 
				0, 
				0, 
				0.7
			};
			
			x = 0.3;	y = 0.2 + (11 / 250);
			w = 0.47;	h = 0.4 - (22 / 250);
		};
	};
	
	class controls 
	{
		class launderInfo : Life_RscStructuredText
		{
			idc = 29601;
			sizeEx = 0.020;
			text = "";
			class Attributes
			{
				align = "center";
				valign = "middle";
				shadow = 1;
				shadowColor = "#333333";
				size = 1;
			};

			x = 0.3;		y = 0.2 + (11 / 250);
			w = 0.46;		h = 0.21;
		};

		class launderSelfBtn: Life_RscButtonMenu 
		{
			idc = -1;
			onButtonClick = "[0] call ALYSIA_fnc_launderExecute;";
			text = "Mon compte";
			tooltip = "Blanchir de l'argent pour vous même vous fait perdre un pourcentage sur la somme totale, variant selon la quantité d'argent à blanchir";
			colorBackground[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 
				0.5
			};

			x = 0.2 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));	y = 0.45;
			w = (6.25 / 40);	h = (1 / 25);
		};

		class launderGangBtn : Life_RscButtonMenu 
		{
			idc = 29602;
			text = "Mon groupe";
			onButtonClick = "[1] call ALYSIA_fnc_launderExecute;";
			tooltip = "L'argent est envoyé dans les fonds de votre groupe";
			colorBackground[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", 
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 
				0.5
			};

			x = 0.4 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));	y = 0.45;
			w = (6.25 / 40);	h = (1 / 25);
		};

		class closeBtn : Life_RscButtonMenu 
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			text = "Quitter";

			x = 0.3;	y = 0.557;
			w = 0.47;	h = (1 / 25);
		};
	};
};
