class HUD_inv_message
{
	name = "HUD_inv_message";
	idd = -1;
	movingEnable = 0;
	duration = 9999999999999999999999999999999999999;
	fadein = 1;
	fadeout = 1;
	onLoad = "uiNamespace setVariable [""HUD_inv_message"", _this select 0]";
	class controlsBackground
	{
		class list : RscListBox
		{
			idc = 900;
			sizeEx = 0.04;
			colorBackground[] = {-1, -1, -1, 0};

			x = safezoneX + 0.02;
			y = safeZoneY + safezoneH * 2/3;
            w = 0.4 * safezoneW;
            h = 0.4;
		};
	};
};
