#define SOLDE_ATM_BACKGROUND_IDC       7600
#define SOLDE_ATM_FRAME_IDC            7601
#define SOLDE_ATM_PICTURE_IDC          7602
#define SOLDE_ATM_INFO_IDC             7603
#define SOLDE_SALARY_AMOUNT_FRAME_IDC  7604
#define SOLDE_SALARY_AMOUNT_HEADER_IDC 7605
#define SOLDE_SALARY_AMOUNT_INFO_IDC   7606
#define SOLDE_SALARY_EACH_FRAME_IDC    7607
#define SOLDE_SALARY_EACH_HEADER_IDC   7608
#define SOLDE_SALARY_EACH_INFO_IDC     7609
#define SOLDE_SALARY_NEXT_FRAME_IDC    7610
#define SOLDE_SALARY_NEXT_HEADER_IDC   7611
#define SOLDE_SALARY_NEXT_INFO_IDC     7612
#define SOLDE_BILLS_HEADER_IDC         7613
#define SOLDE_BILLS_FRAME_IDC          7614
#define SOLDE_BILLS_INFO_IDC           7615

SOLDE_BACKGROUND = "lyeed_IMG\data\tablet\backgrounds\back_bank.jpg";
SOLDE_IDCS[] =
{
	SOLDE_ATM_BACKGROUND_IDC,
	SOLDE_ATM_FRAME_IDC,
	SOLDE_ATM_PICTURE_IDC,
	SOLDE_ATM_INFO_IDC,
	SOLDE_SALARY_AMOUNT_FRAME_IDC,
	SOLDE_SALARY_AMOUNT_HEADER_IDC,
	SOLDE_SALARY_AMOUNT_INFO_IDC,
	SOLDE_SALARY_EACH_FRAME_IDC,
	SOLDE_SALARY_EACH_HEADER_IDC,
	SOLDE_SALARY_EACH_INFO_IDC,
	SOLDE_SALARY_NEXT_FRAME_IDC,
	SOLDE_SALARY_NEXT_HEADER_IDC,
	SOLDE_SALARY_NEXT_INFO_IDC,
	SOLDE_BILLS_HEADER_IDC,
	SOLDE_BILLS_FRAME_IDC,
	SOLDE_BILLS_INFO_IDC
};

class SOLDE_ATM_BACKGROUND: RscText
{
	idc = SOLDE_ATM_BACKGROUND_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.556719 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.055 * safezoneH;
};
class SOLDE_ATM_FRAME: RscFrame
{
	idc = SOLDE_ATM_FRAME_IDC;
	colorText[] = {0,0,0,0.8};
	
	x = 0.556719 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.055 * safezoneH;
};
class SOLDE_ATM_PICTURE: RscPicture
{
	idc = SOLDE_ATM_PICTURE_IDC;
	text = "lyeed_IMG\data\tablet\solde\atm.paa";
	
	x = 0.55925 * safezoneW + safezoneX;
	y = 0.383073 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
};
class SOLDE_ATM_INFO: RscStructuredText
{
	idc = SOLDE_ATM_INFO_IDC;
	colorBackground[] = {0,0,0,0};
	
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
};

class SOLDE_SALARY_AMOUNT_FRAME: RscFrame
{
	idc = SOLDE_SALARY_AMOUNT_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.044 * safezoneH;
};
class SOLDE_SALARY_AMOUNT_HEADER: RscStructuredText
{
	idc = SOLDE_SALARY_AMOUNT_HEADER_IDC;
	text = "<t align='center'>Montant du salaire</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SOLDE_SALARY_AMOUNT_INFO: RscStructuredText
{
	idc = SOLDE_SALARY_AMOUNT_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class SOLDE_SALARY_EACH_FRAME: RscFrame
{
	idc = SOLDE_SALARY_EACH_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.044 * safezoneH;
};
class SOLDE_SALARY_EACH_HEADER: RscStructuredText
{
	idc = SOLDE_SALARY_EACH_HEADER_IDC;
	text = "<t align='center'>Temps entre salaire</t>";
	colorBackground[] = {0,0,0,0.8};
	
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SOLDE_SALARY_EACH_INFO: RscStructuredText
{
	idc = SOLDE_SALARY_EACH_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class SOLDE_SALARY_NEXT_FRAME: RscFrame
{
	idc = SOLDE_SALARY_NEXT_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.044 * safezoneH;
};
class SOLDE_SALARY_NEXT_HEADER: RscStructuredText
{
	idc = SOLDE_SALARY_NEXT_HEADER_IDC;
	text = "<t align='center'>Prochain salaire</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class SOLDE_SALARY_NEXT_INFO: RscStructuredText
{
	idc = SOLDE_SALARY_NEXT_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.567031 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class SOLDE_BILLS_HEADER: RscStructuredText
{
	idc = SOLDE_BILLS_HEADER_IDC;
	text = "<t align='center'>Relevé</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.022 * safezoneH;
};
class SOLDE_BILLS_FRAME: RscFrame
{
	idc = SOLDE_BILLS_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.341 * safezoneH;
};
class SOLDE_BILLS_INFO: RscListbox
{
	idc = SOLDE_BILLS_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.319 * safezoneH;
};
