#define SAVE_UINAMESPACE(VAR) uiNamespace setVariable[#VAR, _this select 0]

/* DIALOGS IDD & NAME */

#define DIALOG_ADMIN_IDD 2900
#define DIALOG_ADMIN_NAME life_admin_menu
#define DIALOG_ADMIN_REMBOURSEMENT_IDD 2950
#define DIALOG_ADMIN_REMBOURSEMENT_NAME life_admin_remboursement

#define DIALOG_ARREST_IDD 89690
#define DIALOG_ARREST_NAME dialog_arrest

#define DIALOG_ATM_IDD 2700
#define DIALOG_ATM_NAME Skyline_ATM_Dialog

#define DIALOG_AC_BUY_IDD 45600
#define DIALOG_AC_BUY_NAME ALYSIA_HVBuy
#define DIALOG_AC_SELL_IDD 45700
#define DIALOG_AC_SELL_NAME ALYSIA_HVSell

#define DIALOG_CRAFT_IDD 666
#define DIALOG_CRAFT_NAME life_craft

#define DIALOG_FEDERAL_IDD 3500
#define DIALOG_FEDERAL_NAME Federal_Safe

#define DIALOG_GANG_IDD 2620
#define DIALOG_GANG_NAME life_my_gang_menu
#define DIALOG_GANG_CREATE_IDD 2520
#define DIALOG_GANG_CREATE_NAME life_my_gang_menu_create

#define DIALOG_LAUNDER_IDD 29600
#define DIALOG_LAUNDER_NAME ALYSIA_launder

#define DIALOG_MARKET_IDD 88000
#define DIALOG_MARKET_NAME ALYSIA_market

#define DIALOG_PINTERACTION_IDD 37400
#define DIALOG_PINTERACTION_NAME pInteraction_Menu

#define DIALOG_TRADE_GIVE_IDD 10000
#define DIALOG_TRADE_GIVE_NAME life_player_trade
#define DIALOG_TRADE_RECEIVE_IDD 10500
#define DIALOG_TRADE_RECEIVE_NAME life_player_receive

#define DIALOG_SHOPCLOTHING_IDD 3100
#define DIALOG_SHOPCLOTHING_NAME Life_Clothing

#define DIALOG_SHOPITEM_IDD 2400
#define DIALOG_SHOPITEM_NAME shops_menu

#define DIALOG_SHOPVEHICLE_IDD 2300
#define DIALOG_SHOPVEHICLE_NAME life_vehicle_shop

#define DIALOG_SHOPWEAPON_IDD 38400
#define DIALOG_SHOPWEAPON_NAME life_weapon_shop

#define DIALOG_TICKET_GIVE_IDD 2650
#define DIALOG_TICKET_GIVE_NAME life_ticket_give
#define DIALOG_TICKET_PAY_IDD 2600
#define DIALOG_TICKET_PAY_NAME life_ticket_pay

#define DIALOG_VEHSTEAL_IDD 39400
#define DIALOG_VEHSTEAL_NAME Chop_Shop

#define DIALOG_VEHTRUNK_IDD 3500
#define DIALOG_VEHTRUNK_NAME TrunkMenu

#define DIALOG_WELCOME_MENU_IDD 1500
#define DIALOG_WELCOME_MENU_NAME welcome_menu
/* =================================================== */

/* Background transparency */
#define BG_COLOR_NO_FADE 0
#define BG_COLOR_HALF_FADE 0.6
#define BG_COLOR_FULL_FADE 0.8
/* ======================= */

/* Fonts */
#define PURISTA_LIGHT "PuristaLight"
#define PUTISTA_MEDIUM "PuristaMedium"
#define PURISTA_SEMIBOLD "PuristaSemiBold"
#define PURISTA_BOLD "PuristaBold"
#define LUCIDA "LucidaConsoleB"
#define ETELKA_MONOSPACE "EtelkaMonospacePro"
#define ETELKA_MONOSPACE_BOLD "EtelkaMonospaceProBold"
#define ETELKA_NARROW "EtelkaNarrowMediumPro"
#define TAHOMA "TahomaB"
/* ======================= */

/* Complex macros */
#define CONTROL_PICTURE(IDC,NAME,TEXT,X,Y,W,H) \
	class NAME : life_RscPicture \
	{ \
		idc = IDC; \
		text = TEXT; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_PICTURE_BUTTON(IDC,NAME,TEXT,X,Y,W,H,ACTION) \
	class NAME##_IMAGE : life_RscPicture \
	{ \
		idc = IDC; \
		text = TEXT; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	}; \
	class NAME##_BUTTON : RscButtonSilent \
	{ \
		idc = IDC + 1; \
		action = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_STRUCT_TEXT(IDC,NAME,TEXT,X,Y,W,H,BG_FADE,FONT) \
	class NAME : Life_RscStructuredText \
	{ \
		idc = IDC; \
		text = TEXT; \
		colorBackground[] = {0, 0, 0, BG_FADE}; \
		font = FONT; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_SILENT_BUTTON(IDC,NAME,ACTION,X,Y,W,H) \
	class NAME : RscButtonSilent \
	{ \
		idc = IDC; \
		action = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_LISTBOX(IDC,NAME,ACTION,X,Y,W,H) \
	class NAME : Life_RscListBox \
	{ \
		idc = IDC; \
		onLBSelChanged = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_EDIT(IDC,NAME,TXT,X,Y,W,H) \
	class NAME : Life_RscEdit \
	{ \
		idc = IDC; \
		text = TXT; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_MAP(IDC,NAME,ALPHA,STARTSCALE,ENDSCALE,X,Y,W,H) \
	class NAME : Life_RscMapControl \
	{ \
		idc = IDC; \
		maxSatelliteAlpha = ALPHA; \
		alphaFadeStartScale = STRTSCALE; \
		alphaFadeEndScale = ENDSCALE; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_SLIDER(IDC,NAME,ACTION,X,Y,W,H) \
	class NAME : life_RscXSliderH \
	{ \
		idc = IDC; \
		onSliderPosChanged = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_CHECK(IDC,NAME,ACTION,X,Y) \
	class NAME : Life_Checkbox \
	{ \
		idc = IDC; \
		onCheckedChanged = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
	};

#define CONTROL_COLORED_BUTTON(IDC,NAME,ACTION,X,Y,W,H,TXT) \
	class NAME : life_RscButtonMenu_colored \
	{ \
		idc = IDC; \
		text = TXT; \
		action = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};

#define CONTROL_COMBO(IDC,NAME,ACTION,X,Y,W,H) \
	class NAME : Life_RscCombo \
	{ \
		idc = IDC; \
		onLBSelChanged = ACTION; \
		x = X * safezoneW + safezoneX; \
		y = Y * safezoneH + safezoneY; \
		w = W * safezoneW; \
		h = H * safezoneH; \
	};
