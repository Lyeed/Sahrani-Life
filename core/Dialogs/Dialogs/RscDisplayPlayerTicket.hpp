class RscDisplayPlayerTicket: default_base_dialog
{
	idd = 17000;
	name = "RscDisplayPlayerTicket";
	
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
			text = "<t align='center' size='1.8'>Paiement</t>";

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class PRICE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class PRICE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Montant à payer</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PRICE_EDIT: RscEdit
		{
			idc = 17001;
			text = "100";

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class DESC_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};

			x = 0.335 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.264 * safezoneH;
		};
		class DESC_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Description</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.335 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class DESC_EDIT: RscEdit
		{
			idc = 17002;
			text = "";
			style = 16;
			
			x = 0.335 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class SEND_IMAGE: RscPicture
		{
			idc = 17003;
			text = "\lyeed_IMG\data\player_interactions\actions\action_ticket.paa";

			x = 0.551562 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SEND_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[] call public_fnc_interactionMenu_action_ticket_send;";
			tooltip = "Valider";
			onMouseEnter = "ctrlSetText[17003,""\lyeed_IMG\data\player_interactions\actions\action_ticket_select.paa""];";
			onMouseExit = "ctrlSetText[17003,""\lyeed_IMG\data\player_interactions\actions\action_ticket.paa""];";

			x = 0.551562 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};