/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class DIALOG_AC_BUY_NAME : default_base_dialog
{
	idd = DIALOG_AC_BUY_IDD;
	name = #DIALOG_AC_BUY_NAME;
	
	class controlsBackground
	{
		class Life_RscTitleBackground : life_RscHeader
		{
			x = 0.1;
			y = 0.2;
			w = 0.8;
		};
		
		class MainBackground : life_RscBack
		{
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.7 - (22 / 250);
		};
		
		class Title : Life_RscTitle
		{
			text = "Hôtel des ventes";
			
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class ListHeader : life_RscHeader
		{
			text = "Ventes";

			x = 0.11;
			y = 0.26;
			w = 0.4;
		};
		
		class PriceHeader : life_RscHeader
		{
			idc = 45605;
			text = "Prix";
			
			x = 0.52;
			y = 0.35 - (1 / 25);
			w = 0.35;
		};

		class DescriptionHeader : life_RscHeader
		{
			idc = 45607;
			text = "Description";

			x = 0.52;
			y = 0.45 - (1 / 25);
			w = 0.35;
		};

		class CloseBtn : life_RscButtonClose
		{
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
			w = 0.8;
		};
	};
	
	class controls
	{
		class SellList : Life_RscListBox
		{
			idc = 45602;
			text = "";
			sizeEx = 0.04;
			onLBSelChanged = "call public_fnc_hvBuyUpdateInfo;";
			
			x = 0.11;	y = 0.302;
			w = 0.4;	h = 0.5;
		};
		
		class TypesList : Life_RscCombo
		{
			idc = 45601;
			onLBSelChanged = "call public_fnc_hvBuyUpdate;";

			x = 0.11;	y = 0.81;
			w = 0.4;	h = 0.03;
		};

		class PriceText : Life_RscStructuredText
		{
			idc = 45603;

			x = 0.52;
			y = 0.35;
			w = 0.35;
			h = 0.05;
		};

		class DescriptionText : Life_RscStructuredText
		{
			idc = 45606;

			x = 0.52;
			y = 0.45;
			w = 0.35;
			h = 0.2;
		};

		class BuyBtn : life_RscButtonMenu_colored 
		{
			idc = 45604;
			onButtonClick = "call public_fnc_hvBuyAction;";
			text = "Acheter";
			
			x = 0.63;
			y = 0.66;
		};

		class CancelBtn : life_RscButtonMenu_colored 
		{
			idc = 45608;
			onButtonClick = "call public_fnc_hvSellCancel;";
			text = "Récupérer";
			
			x = 0.63;
			y = 0.72;
		};
	};
};

class DIALOG_AC_SELL_NAME : default_base_dialog
{
	idd = DIALOG_AC_SELL_IDD;
	name = #DIALOG_AC_SELL_NAME;
	
	class controlsBackground
	{
		class Life_RscTitleBackground : life_RscHeader
		{
			x = 0.1;
			y = 0.2;
			w = 0.8;
		};
		
		class MainBackground : life_RscBack
		{
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.7 - (22 / 250);
		};
		
		class Title : Life_RscTitle
		{
			text = "Hôtel des ventes";
			
			x = 0.1;	y = 0.2;
			w = 0.8;	h = (1 / 25);
		};
		
		class ListHeader : life_RscHeader
		{
			text = "Inventaire";

			x = 0.11;
			y = 0.26;
			w = 0.4;
		};
		
		class PriceHeader : life_RscHeader
		{
			idc = 45701;
			text = "Prix";
			
			x = 0.52;
			y = 0.35 - (1 / 25);
			w = 0.35;
		};

		class DescriptionHeader : life_RscHeader
		{
			idc = 45706;
			text = "Description";

			x = 0.52;
			y = 0.45 - (1 / 25);
			w = 0.35;
		};

		class CloseBtn : life_RscButtonClose
		{
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
			w = 0.8;
		};
	};
	
	class controls
	{
		class InventoryList : Life_RscListBox
		{
			idc = 45703;
			text = "";
			sizeEx = 0.04;
			onLBSelChanged = "call public_fnc_hvSellUpdateInfo;";
			colorBackground[] = 
			{
				0.1,
				0.1,
				0.1,
				0.9
			};
			
			x = 0.11;	y = 0.302;
			w = 0.4;	h = 0.52;
		};

		class PriceEdit : Life_RscEdit
		{
			idc = 45704;
			text = "1500";
			sizeEx = 0.030;

			x = 0.52;	y = 0.35;
			w = 0.35;	h = 0.05;
		};

		class DescriptionEdit : Life_RscEdit
		{
			idc = 45705;
			style = 16;			
			text = "Description...";
			onMouseEnter = "if ((ctrlText 45705) == ""Description..."") then { ctrlSetText [45705, """"]; };";			

			x = 0.52;	y = 0.45;
			w = 0.35;	h = 0.2;
		};

		class SellBtn : life_RscButtonMenu_colored 
		{
			idc = 45702;
			onButtonClick = "[] spawn public_fnc_hvSellAction;";
			text = "Vendre";
			
			x = 0.63;
			y = 0.66;
		};
	};
};
