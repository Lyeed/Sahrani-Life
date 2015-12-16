/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class RscDisplayAuctionHouse: default_base_dialog
{
	idd = 45600;
	name = "RscDisplayAuctionHouse";
	
	class controlsBackground
	{
		class FRAME: RscFrame
		{
			idc = -1;
			colorText[] = {0,0,0,1};
			
			x = 0.335 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.451 * safezoneH;
		};
		class BACKGROUND: RscPicture
		{
			idc = -1;
			text = "\lyeed_IMG\data\auctionHouse\background.jpg";

			x = 0.335 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.334115 * safezoneW;
			h = 0.406778 * safezoneH;
		};
	};
	
	class controls
	{
		class TITLE: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' size='1.8'>Hôtel des ventes</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.335 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class STOCK_FRAME: RscFrame
		{
			idc = 45618;
			colorText[] = {0,0,0,0.8};

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.341 * safezoneH;
		};
		class STOCK_HEADER: RscStructuredText
		{
			idc = 45619;
			text = "<t align='center'>Stock</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STOCK_LIST: RscListbox
		{
			idc = 45602;
			onLBSelChanged = "_this call public_fnc_auctionHouse_menu_update;";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class SELECT_PRICE_HEADER: RscStructuredText
		{
			idc = 45603;
			text = "<t align='center'>Prix</t>";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SELECT_PRICE_INFO: RscStructuredText
		{
			idc = 45604;
			colorBackground[] = {0,0,0,0.6};

			x = 0.561875 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ACTION_EXIT_BACKGROUND: RscText
		{
			idc = 45605;
			colorBackground[] = {0,0,0,0.6};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_FRAME: RscFrame
		{
			idc = 45606;
			colorText[] = {0,0,0,0.8};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_EXIT_TEXT: RscStructuredText
		{
			idc = 45607;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_IMAGE: RscPicture
		{
			idc = 45608;
			text = "\lyeed_IMG\data\auctionHouse\actions\action_exit.paa";

			x = 0.572187 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_EXIT_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "closeDialog 0;";
			onMouseEnter = "\
			ctrlSetText[45608,""\lyeed_IMG\data\auctionHouse\actions\action_exit_select.paa""];\
			ctrlShow[45606, false];\
			((findDisplay 45600) displayCtrl 45605) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45600) displayCtrl 45607) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Quitter</t>"";";
			onMouseExit = "\
			ctrlSetText[45608,""\lyeed_IMG\data\auctionHouse\actions\action_exit.paa""];\
			ctrlShow[45606, true];\
			((findDisplay 45600) displayCtrl 45605) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45600) displayCtrl 45607) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Quitter</t>"";";

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_BACKGROUND: RscText
		{
			idc = 45609;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_FRAME: RscFrame
		{
			idc = 45610;
			colorText[] = {0,0,0,0.8};
			
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_BUY_TEXT: RscStructuredText
		{
			idc = 45611;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_BUY_IMAGE: RscPicture
		{
			idc = 45612;
			text = "\lyeed_IMG\data\auctionHouse\actions\action_buy.paa";

			x = 0.569948 * safezoneW + safezoneX;
			y = 0.51637 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_BUY_BUTTON: RscButtonSilent
		{
			idc = 45613;
			action = "[] spawn public_fnc_auctionHouse_action_buy;";
			onMouseEnter = "\
			ctrlSetText[45612,""\lyeed_IMG\data\auctionHouse\actions\action_buy_select.paa""];\
			ctrlShow[45610, false];\
			((findDisplay 45600) displayCtrl 45609) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45600) displayCtrl 45611) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Acheter</t>"";";
			onMouseExit = "\
			ctrlSetText[45612,""\lyeed_IMG\data\auctionHouse\actions\action_buy.paa""];\
			if (ctrlVisible 45612) then {\
				ctrlShow[45610, true];\
			};\
			((findDisplay 45600) displayCtrl 45609) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45600) displayCtrl 45611) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Acheter</t>"";";

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class TYPE_BUY_TEXT: RscStructuredText
		{
			idc = 45615;
			text = "<t align='center' size='1.3' color='#FFFFFF'>Acheter</t>";
			colorBackground[] = {0,0,0,1};
			
			x = 0.335 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class TYPE_BUY_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[0] call public_fnc_auctionHouse_menu_filter;";
			onMouseEnter = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 0) then {\
				((findDisplay 45600) displayCtrl 45615) ctrlSetBackgroundColor [1,1,1,1];\
				((findDisplay 45600) displayCtrl 45615) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#000000'>Acheter</t>"";\
			};";
			onMouseExit = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 0) then {\
				((findDisplay 45600) displayCtrl 45615) ctrlSetBackgroundColor [0,0,0,1];\
				((findDisplay 45600) displayCtrl 45615) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#FFFFFF'>Acheter</t>"";\
			};";

			x = 0.335 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TYPE_SELL_TEXT: RscStructuredText
		{
			idc = 45617;
			colorBackground[] = {0,0,0,1};
			text = "<t align='center' size='1.3' color='#FFFFFF'>Vendre</t>";
			
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class TYPE_SELL_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[1] call public_fnc_auctionHouse_menu_filter;";
			onMouseEnter = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 1) then {\
				((findDisplay 45600) displayCtrl 45617) ctrlSetBackgroundColor [1,1,1,1];\
				((findDisplay 45600) displayCtrl 45617) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#000000'>Vendre</t>"";\
			};";
			onMouseExit = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 1) then {\
				((findDisplay 45600) displayCtrl 45617) ctrlSetBackgroundColor [0,0,0,1];\
				((findDisplay 45600) displayCtrl 45617) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#FFFFFF'>Vendre</t>"";\
			};";

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TYPE_MY_TEXT: RscStructuredText
		{
			idc = 45614;
			text = "<t align='center' size='1.3' color='#FFFFFF'>Mes ventes</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.469062 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class TYPE_MY_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[2] call public_fnc_auctionHouse_menu_filter;";
			onMouseEnter = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 2) then {\
				((findDisplay 45600) displayCtrl 45614) ctrlSetBackgroundColor [1,1,1,1];\
				((findDisplay 45600) displayCtrl 45614) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#000000'>Mes ventes</t>"";\
			};";
			onMouseExit = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != 2) then {\
				((findDisplay 45600) displayCtrl 45614) ctrlSetBackgroundColor [0,0,0,1];\
				((findDisplay 45600) displayCtrl 45614) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#FFFFFF'>Mes ventes</t>"";\
			};";

			x = 0.469062 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TYPE_INFOS_TEXT: RscStructuredText
		{
			idc = 45644;
			text = "<t align='center' size='1.3' color='#FFFFFF'>Infos</t>";
			colorBackground[] = {0,0,0,1};

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class TYPE_INFOS_BUTTON: RscButtonSilent
		{
			idc = -1;
			action = "[-1] call public_fnc_auctionHouse_menu_filter;";
			onMouseEnter = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != -1) then {\
				((findDisplay 45600) displayCtrl 45644) ctrlSetBackgroundColor [1,1,1,1];\
				((findDisplay 45600) displayCtrl 45644) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#000000'>Infos</t>"";\
			};";
			onMouseExit = "\
			if ((uiNamespace getVariable ['AH_selected', -1]) != -1) then {\
				((findDisplay 45600) displayCtrl 45644) ctrlSetBackgroundColor [0,0,0,1];\
				((findDisplay 45600) displayCtrl 45644) ctrlSetStructuredText parseText ""<t align='center' size='1.3' color='#FFFFFF'>Infos</t>"";\
			};";

			x = 0.556719 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class SELECT_PRICE_EDIT: RscEdit
		{
			idc = 45620;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class MISC_LIST: RscListbox
		{
			idc = 45621;
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class ACTION_RECUP_BACKGROUND: RscText
		{
			idc = 45622;
			colorBackground[] = {0,0,0,0.6};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_RECUP_FRAME: RscFrame
		{
			idc = 45623;
			colorText[] = {0,0,0,0.8};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_RECUP_TEXT: RscStructuredText
		{
			idc = 45624;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Récup.</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_RECUP_IMAGE: RscPicture
		{
			idc = 45625;
			text = "\lyeed_IMG\data\auctionHouse\actions\action_recup.paa";

			x = 0.569948 * safezoneW + safezoneX;
			y = 0.51637 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_RECUP_BUTTON: RscButtonSilent
		{
			idc = 45626;
			action = "[] spawn public_fnc_auctionHouse_action_cancel;";
			onMouseEnter = "\
			ctrlSetText[45625,""\lyeed_IMG\data\auctionHouse\actions\action_recup_select.paa""];\
			ctrlShow[45623, false];\
			((findDisplay 45600) displayCtrl 45622) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45600) displayCtrl 45624) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Récup.</t>"";";
			onMouseExit = "\
			ctrlSetText[45625,""\lyeed_IMG\data\auctionHouse\actions\action_recup.paa""];\
			if (ctrlVisible 45625) then {\
				ctrlShow[45623, true];\
			};\
			((findDisplay 45600) displayCtrl 45622) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45600) displayCtrl 45624) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Récup.</t>"";";

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_SELL_BACKGROUND: RscText
		{
			idc = 45627;
			colorBackground[] = {0,0,0,0.6};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_SELL_FRAME: RscFrame
		{
			idc = 45628;
			colorText[] = {0,0,0,0.8};

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ACTION_SELL_TEXT: RscStructuredText
		{
			idc = 45629;
			text = "<t align='left' size='1.3' color='#FFFFFF'>Vendre</t>";
			colorBackground[] = {-1,-1,-1,0};
			
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_SELL_IMAGE: RscPicture
		{
			idc = 45630;
			text = "\lyeed_IMG\data\auctionHouse\actions\action_buy.paa";

			x = 0.569948 * safezoneW + safezoneX;
			y = 0.51637 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.0429629 * safezoneH;
		};
		class ACTION_SELL_BUTTON: RscButtonSilent
		{
			idc = 45631;
			action = "[] spawn public_fnc_auctionHouse_action_sell;";
			onMouseEnter = "\
			ctrlSetText[45630,""\lyeed_IMG\data\auctionHouse\actions\action_buy_select.paa""];\
			ctrlShow[45628, false];\
			((findDisplay 45600) displayCtrl 45627) ctrlSetBackgroundColor [1,1,1,1];\
			((findDisplay 45600) displayCtrl 45629) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Vendre</t>"";";
			onMouseExit = "\
			ctrlSetText[45630,""\lyeed_IMG\data\auctionHouse\actions\action_buy.paa""];\
			if (ctrlVisible 45630) then {\
				ctrlShow[45628, true];\
			};\
			((findDisplay 45600) displayCtrl 45627) ctrlSetBackgroundColor [0,0,0,0.6];\
			((findDisplay 45600) displayCtrl 45629) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Vendre</t>"";";

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ACTION_REFRESH_IMAGE: RscPicture
		{
			idc = 45632;
			text = "\lyeed_IMG\data\auctionHouse\actions\action_refresh.paa";

			x = 0.551562 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ACTION_REFRESH_BUTTON: RscButtonSilent
		{
			idc = 45633;
			action = "[0] call public_fnc_auctionHouse_menu_filter;";
			onMouseEnter = "ctrlSetText[45632,""\lyeed_IMG\data\auctionHouse\actions\action_refresh_select.paa""];";
			onMouseExit = "ctrlSetText[45632,""\lyeed_IMG\data\auctionHouse\actions\action_refresh.paa""];";
			
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class PRESENTATION: RscStructuredText
		{
			idc = 45634;
			colorBackground[] = {0,0,0,0};
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.324844 * safezoneW;
			h = 0.209 * safezoneH;
		};

		class STATS_GLOBAL_FRAME: RscFrame
		{
			idc = 45635;
			colorText[] = {0,0,0,0.8};
			
			x = 0.355626 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			h = 0.022 * safezoneH;
			w = 0.216563 * safezoneW;
		};
		class STATS_GLOBAL_NUMBER: RscStructuredText
		{
			idc = 45636;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STATS_GLOBAL_INFO: RscStructuredText
		{
			idc = 45637;
			text = "objets et véhicules en vente dans le pays";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class STATS_NORTH_FRAME: RscFrame
		{
			idc = 45638;
			colorText[] = {0,0,0,0.8};

			x = 0.355626 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STATS_NORTH_NUMBER: RscStructuredText
		{
			idc = 45639;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STATS_NORTH_INFO: RscStructuredText
		{
			idc = 45640;
			text = "ventes dans le Nord";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class STATS_SOUTH_FRAME: RscFrame
		{
			idc = 45641;
			colorText[] = {0,0,0,0.8};

			x = 0.355625 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STATS_SOUTH_NUMBER: RscStructuredText
		{
			idc = 45642;
			colorBackground[] = {0,0,0,0.6};
			
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class STATS_SOUTH_INFO: RscStructuredText
		{
			idc = 45643;
			text = "ventes dans le Sud";
			colorBackground[] = {0,0,0,0.8};
			
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};
};
