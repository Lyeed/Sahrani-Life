class RscTitleIdentityCIV_NORTH
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 8;
	fadeout = 3;
	name = "RscTitleIdentityCIV_NORTH";
	onLoad = "uiNamespace setVariable ['RscTitleIdentityCIV_NORTH', (_this select 0)];";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\faction\CIV_identity_NORTH.paa";

			x = 0.247344 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.396 * safezoneH;
		};
	};

	class controls
	{
		class HEAD: RscPicture
		{
			idc = 79000;

			x = 0.412344 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class NAME: RscStructuredText
		{
			idc = 79001;

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class INFOS: RscStructuredText
		{
			idc = 79002;

			x = 0.267969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.121 * safezoneH;
		};
	};
};

class RscTitleIdentityEAST
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 8;
	fadeout = 3;
	name = "RscTitleIdentityEAST";
	onLoad = "uiNamespace setVariable ['RscTitleIdentityEAST', (_this select 0)];";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\faction\EAST_identity.paa";

			x = 0.190625 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.396 * safezoneH;
		};
	};

	class controls
	{
		class HEAD: RscPicture
		{
			idc = 79010;

			x = 0.335 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class NAME: RscStructuredText
		{
			idc = 79011;

			x = 0.200937 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class RANK: RscStructuredText
		{
			idc = 79012;

			x = 0.200937 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

class RscTitleIdentityWEST
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 8;
	fadeout = 3;
	name = "RscTitleIdentityWEST";
	onLoad = "uiNamespace setVariable ['RscTitleIdentityWEST', (_this select 0)];";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\faction\WEST_identity.paa";

			x = 0.190625 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.429 * safezoneH;
		};
	};

	class controls
	{
		class HEAD_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0654687 * safezoneW;
			h = 0.132926 * safezoneH;
		};
		class HEAD: RscPicture
		{
			idc = 79020;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class NAME: RscStructuredText
		{
			idc = 79021;

			x = 0.231875 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RANK: RscStructuredText
		{
			idc = 79022;

			x = 0.231875 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

class RscTitleIdentityGUER
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 7;
	fadeout = 3;
	name = "RscTitleIdentityGUER";
	onLoad = "uiNamespace setVariable ['RscTitleIdentityGUER', (_this select 0)];";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\faction\GUER_identity.paa";

			x = 0.195781 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.539 * safezoneH;
		};
	};

	class controls
	{
		class HEAD_FRAME: RscFrame
		{
			colorText[] = {0,0,0,1};

			x = 0.21125 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0482812 * safezoneW;
			h = 0.0995927 * safezoneH;
		};
		class HEAD: RscPicture
		{
			idc = 79030;

			x = 0.206094 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class NAME: RscStructuredText
		{
			idc = 79031;

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RANK: RscStructuredText
		{
			idc = 79032;

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

class RscTitleIdentityCIV_SOUTH
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 8;
	fadeout = 3;
	name = "RscTitleIdentityCIV_SOUTH";
	onLoad = "uiNamespace setVariable ['RscTitleIdentityCIV_SOUTH', (_this select 0)];";

	class controlsBackground 
	{
		class BACKGROUND: RscPicture
		{
			text = "lyeed_IMG\data\faction\CIV_identity_SOUTH.paa";

			x = 0.247344 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.396 * safezoneH;
		};
	};

	class controls
	{
		class HEAD: RscPicture
		{
			idc = 79040;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.11 * safezoneH;
		};
		class NAME: RscStructuredText
		{
			idc = 79041;

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class INFOS: RscStructuredText
		{
			idc = 79042;

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.066 * safezoneH;
		};
	};
};
