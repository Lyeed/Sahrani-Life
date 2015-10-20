class HUD_inv_message
{
	name = "HUD_inv_message";
	idd = -1;
	movingEnable = 0;
	duration = 99999999999999999999999999999999999999999999;
	fadein = 0;
	fadeout = 0;
	onLoad = "uiNamespace setVariable [""HUD_inv_message"", _this select 0]";
	class controlsBackground
	{
		class list : Life_RscListBox
		{
			idc = 900;
			text = "";
			sizeEx = 0.04;
			colorBackground[] = {0, 0, 0, 0};

			x = safezoneX + 0.02;
			y = safeZoneY + safezoneH * 2/3;
            w = 0.4 * safezoneW;
            h = 0.4;
		};
	};
};
