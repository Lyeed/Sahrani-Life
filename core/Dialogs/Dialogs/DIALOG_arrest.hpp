class DIALOG_ARREST_NAME : default_base_dialog
{
	idd = DIALOG_ARREST_IDD;
	name = #DIALOG_ARREST_NAME;
	
	class controlsBackground 
	{
		class Life_RscTitleBackground : life_RscHeader 
		{
			x = 0.3;
			y = 0.2;
			w = 0.47;
		};
		
		class MainBackground : life_RscBackground 
		{
			x = 0.3;
			y = 0.2 + (11 / 250);
			w = 0.47;
			h = 0.45 - (22 / 250);
		};
	};
	
	class controls 
	{
		class Title : Life_RscTitle 
		{
			text = "Prison";
			colorBackground[] = 
			{
				0,
				0,
				0,
				0
			};
			
			x = 0.3;	y = 0.2;
			w = 0.6;	h = (1 / 25);
		};
		
		class minutsEdit : RscEdit 
		{
			idc = 89691;
			text = "1";
			sizeEx = 0.030;
			
			x = 0.40;	y = 0.30;
			w = 0.25;	h = 0.03;
		};

		class reasonEdit : RscEdit 
		{
			idc = 89692;
			text = "raison";
			sizeEx = 0.030;
			
			x = 0.40;	y = 0.37;
			w = 0.25;	h = 0.03;
		};

		class arrestBtn : life_RscButtonMenu_colored 
		{
			text = "Envoyer";
			onButtonClick = "[] call public_fnc_arrestButton;";
			
			x = 0.45;
			y = 0.5;
		};
	};
};
