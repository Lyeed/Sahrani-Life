class RscDisplayPlayerRevokeLicense: default_base_dialog
{
	idd = 18000;
	name = "RscDisplayPlayerRevokeLicense";
	
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
			text = "<t align='center' size='1.8'>Licenses</t>";

			x = 0.324687 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.0384445 * safezoneH;
		};

		class LICENSE_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.396 * safezoneH;
		};
		class LICENSE_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Licenses possédées</t>";
			colorBackground[] = {0,0,0,0.8};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LICENSE_LIST: RscListbox
		{
			idc = 18001;
			colorBackground[] = {0,0,0,0.6};

			x = 0.329844 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.374 * safezoneH;
		};

		class ACTIONS_BACKGROUND: RscText
		{
			idc = -1;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class ACTION_FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class ACTIONS_HEADER: RscStructuredText
		{
			idc = -1;
			text = "<t align='center'>Actions</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class REVOKE_IMAGE: RscPicture
		{
			idc = 18002;
			text = "\lyeed_IMG\data\license_revoke\action_revoke.paa";

			x = 0.530937 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class REVOKE_BUTTON: RscButtonSilent
		{
			idc = 18003;
			action = "[(lbData[18001, (lbCurSel 18001)]), player] remoteExecCall [""public_fnc_interactionMenu_action_license_revoke"", g_interaction_target];";
			tooltip = "Retirer";
			onMouseEnter = "ctrlSetText[17003,""\lyeed_IMG\data\license_revoke\action_revoke_select.paa""];";
			onMouseExit = "ctrlSetText[17003,""\lyeed_IMG\data\license_revoke\action_revoke.paa""];";

			x = 0.530937 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.099 * safezoneH;
		};
	};
};