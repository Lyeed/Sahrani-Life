class RscDisplayPlayerSearch: default_base_dialog
{
	idd = 16000;
	name = "RscDisplayPlayerSearch";
	
	class controlsBackground
	{
		class BORDER: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\frames\frame_2_borderless.paa";

			x = 0.311797 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.329479 * safezoneW;
			h = 0.505074 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\player_interactions\background.jpg";
		
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.462 * safezoneH;
		};
	};

	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.8};
			text = "<t align='center' size='1.8'>Fouille</t>";

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class INVENTORY_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class INVENTORY_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Inventaire</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class INVENTORY_LIST: RscListbox
		{
			idc = 16002;
			colorBackground[] = {0,0,0,0.6};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class EQUIPMENT_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class EQUIPMENT_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Equipement</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class EQUIPMENT_LIST: RscListbox
		{
			idc = 16003;
			colorBackground[] = {0,0,0,0.6};

			x = 0.479375 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.297 * safezoneH;
		};

		class MONEY_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class MONEY_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Porte-feuille</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MONEY_INFO: RscStructuredText
		{
			idc = 16001;
			text = "<t align='center'>0$</t>";
			colorBackground[] = {0,0,0,0.6};

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};