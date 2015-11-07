// Message read page
#define PHONE_MESSAGE_READ_MESSAGE_FRAME_IDC 			8312
#define PHONE_MESSAGE_READ_MESSAGES_FRAME_IDC 			8313
#define PHONE_MESSAGE_READ_ACTION_HEADER_IDC 			8314
#define PHONE_MESSAGE_READ_BACK_IMAGE_IDC 				8317
#define PHONE_MESSAGE_READ_BACK_BUTTON_IDC 				8318
#define PHONE_MESSAGE_READ_LIST_HEADER_IDC 				8319
#define PHONE_MESSAGE_READ_LIST_INFO_IDC 				8320
#define PHONE_MESSAGE_READ_MESSAGE_HEADER_IDC 			8321
#define PHONE_MESSAGE_READ_MESSAGE_INFO_IDC 			8322
#define PHONE_MESSAGE_READ_DELETE_MESSAGE_IMAGE_IDC 	8323
#define PHONE_MESSAGE_READ_DELETE_MESSAGE_BUTTON_IDC	8324
#define PHONE_MESSAGE_READ_DELETE_ALL_IMAGE_IDC 		8325
#define PHONE_MESSAGE_READ_DELETE_ALL_BUTTON_IDC 		8326
#define PHONE_MESSAGE_READ_ANSWER_IMAGE_IDC 			8315
#define PHONE_MESSAGE_READ_ANSWER_BUTTON_IDC 			8316
#define PHONE_MESSAGE_READ_ADD_IMAGE_IDC 				8327
#define PHONE_MESSAGE_READ_ADD_BUTTON_IDC 				8328

PHONE_MESSAGES_READ_BACKGROUND = "\lyeed\images\back_phone_messages.jpg";
PHONE_MESSAGES_READ_IDCS[] =
{
	PHONE_MESSAGE_READ_MESSAGES_FRAME_IDC,
	PHONE_MESSAGE_READ_BACK_IMAGE_IDC,
	PHONE_MESSAGE_READ_BACK_BUTTON_IDC,
	PHONE_MESSAGE_READ_LIST_HEADER_IDC,
	PHONE_MESSAGE_READ_LIST_INFO_IDC
};

class PHONE_MESSAGE_READ_MESSAGE_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_READ_MESSAGE_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.176 * safezoneH;
};
class PHONE_MESSAGE_READ_MESSAGES_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_READ_MESSAGES_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.355781 * safezoneW;
	h = 0.154 * safezoneH;
};

class PHONE_MESSAGE_READ_ACTION_HEADER: Life_RscStructuredText
{
	idc = PHONE_MESSAGE_READ_ACTION_HEADER_IDC;
	colorBackground[] = {0,0,0,0.8};
	text = "<t align='center'>Actions</t>";

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_MESSAGE_READ_BACK_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_READ_BACK_IMAGE_IDC;
	text = "\lyeed\images\back.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_MESSAGE_READ_BACK_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_READ_BACK_BUTTON_IDC;
	action = "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	tooltip = "Retour";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

class PHONE_MESSAGE_READ_LIST_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_READ_LIST_HEADER_IDC;
	text = "";
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.355781 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_READ_LIST_INFO : Life_RscListBox
{
	idc = PHONE_MESSAGE_READ_LIST_INFO_IDC;
	onLBSelChanged = "[_this select 0, _this select 1] call public_fnc_APP_phone_messages_read_open;";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.355781 * safezoneW;
	h = 0.132 * safezoneH;
};

class PHONE_MESSAGE_READ_MESSAGE_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_READ_MESSAGE_HEADER_IDC;
	text = "";
	colorBackground[] = {0,0,0,0.8};

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_READ_MESSAGE_INFO : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_READ_MESSAGE_INFO_IDC;
	text = "";
	colorBackground[] = {0,0,0,0.6};

	x = 0.479375 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.154 * safezoneH;
};

class PHONE_MESSAGE_READ_DELETE_MESSAGE_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_READ_DELETE_MESSAGE_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_remove.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_MESSAGE_READ_DELETE_MESSAGE_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_READ_DELETE_MESSAGE_BUTTON_IDC;
	action = "[0] call public_fnc_APP_phone_messages_read_delete;";
	tooltip = "Supprimer le message sélectionné";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};

class PHONE_MESSAGE_READ_DELETE_ALL_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_READ_DELETE_ALL_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_removeall.paa";

	x = 0.360781 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_MESSAGE_READ_DELETE_ALL_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_READ_DELETE_ALL_BUTTON_IDC;
	action = "[1] call public_fnc_APP_phone_messages_read_delete;";
	tooltip = "Supprimer tous les messages";

	x = 0.360781 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};

class PHONE_MESSAGE_READ_ANSWER_IMAGE: RscPicture
{
	idc = PHONE_MESSAGE_READ_ANSWER_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_send_action.paa";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_MESSAGE_READ_ANSWER_BUTTON: RscButtonSilent
{
	idc = PHONE_MESSAGE_READ_ANSWER_BUTTON_IDC;
	action = "\
		private[""_index""];\
		_index = lbCurSel 8320;\
		if (_index isEqualTo -1) exitWith {};\
		[""phone_messages_send""] spawn public_fnc_tabletApp;\
		ctrlSetText[8336, (g_phone_messages select _index) select 0];\
	";
	tooltip = "Répondre";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};

class PHONE_MESSAGE_READ_ADD_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_READ_ADD_IMAGE_IDC;
	text = "\lyeed\images\phone_contacts_add.paa";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_MESSAGE_READ_ADD_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_READ_ADD_BUTTON_IDC;
	action = "\
		private[""_index""];\
		_index = lbCurSel 8320;\
		if (_index isEqualTo -1) exitWith {};\
		[""phone_contacts""] spawn public_fnc_tabletApp;\
		ctrlSetText[8384, (g_phone_messages select _index) select 0];\
	";
	tooltip = "Ajouter aux contacts";

	x = 0.438125 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.055 * safezoneH;
};

// Message send page
#define PHONE_MESSAGE_SEND_BACK_IMAGE_IDC 		8329
#define PHONE_MESSAGE_SEND_BACK_BUTTON_IDC 		8330
#define PHONE_MESSAGE_SEND_CONTACTS_HEADER_IDC 	8331
#define PHONE_MESSAGE_SEND_CONTACTS_LIST_IDC 	8332
#define PHONE_MESSAGE_SEND_CONTACTS_FRAME_IDC 	8344
#define PHONE_MESSAGE_SEND_MESSAGE_HEADER_IDC 	8333
#define PHONE_MESSAGE_SEND_MESSAGE_INFO_IDC 	8334
#define PHONE_MESSAGE_SEND_NUMBER_HEADER_IDC 	8335
#define PHONE_MESSAGE_SEND_NUMBER_INFO_IDC 		8336
#define PHONE_MESSAGE_SEND_NUMBER_FRAME_IDC 	8342
#define PHONE_MESSAGE_SEND_HIDE_HEADER_IDC 		8337
#define PHONE_MESSAGE_SEND_HIDE_INFO_IDC 		8338
#define PHONE_MESSAGE_SEND_HIDE_FRAME_IDC 		8341
#define PHONE_MESSAGE_SEND_IMAGE_IDC 			8339
#define PHONE_MESSAGE_SEND_BUTTON_IDC 			8340
#define PHONE_MESSAGE_SEND_PRICE_FRAME_IDC 		8343
#define PHONE_MESSAGE_SEND_PRICE_HEADER_IDC 	8346
#define PHONE_MESSAGE_SEND_PRICE_INFO_IDC 		8345

PHONE_MESSAGES_SEND_BACKGROUND = "\lyeed\images\back_phone_messages.jpg";
PHONE_MESSAGES_SEND_IDCS[] =
{
	PHONE_MESSAGE_SEND_BACK_IMAGE_IDC,
	PHONE_MESSAGE_SEND_BACK_BUTTON_IDC,
	PHONE_MESSAGE_SEND_CONTACTS_HEADER_IDC,
	PHONE_MESSAGE_SEND_CONTACTS_LIST_IDC,
	PHONE_MESSAGE_SEND_CONTACTS_FRAME_IDC,
	PHONE_MESSAGE_SEND_MESSAGE_HEADER_IDC,
	PHONE_MESSAGE_SEND_MESSAGE_INFO_IDC,
	PHONE_MESSAGE_SEND_NUMBER_HEADER_IDC,
	PHONE_MESSAGE_SEND_NUMBER_INFO_IDC,
	PHONE_MESSAGE_SEND_NUMBER_FRAME_IDC,
	PHONE_MESSAGE_SEND_HIDE_HEADER_IDC,
	PHONE_MESSAGE_SEND_HIDE_INFO_IDC,
	PHONE_MESSAGE_SEND_HIDE_FRAME_IDC,
	PHONE_MESSAGE_SEND_IMAGE_IDC,
	PHONE_MESSAGE_SEND_BUTTON_IDC,
	PHONE_MESSAGE_SEND_PRICE_FRAME_IDC,
	PHONE_MESSAGE_SEND_PRICE_HEADER_IDC,
	PHONE_MESSAGE_SEND_PRICE_INFO_IDC
};

class PHONE_MESSAGE_SEND_BACK_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_SEND_BACK_IMAGE_IDC;

	text = "\lyeed\images\back.paa";
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_MESSAGE_SEND_BACK_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_SEND_BACK_BUTTON_IDC;
	action = "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	tooltip = "Retour";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

class PHONE_MESSAGE_SEND_CONTACTS_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_CONTACTS_HEADER_IDC;
	text = "<t align='center'>Contacts</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_CONTACTS_LIST : Life_RscListBox
{
	idc = PHONE_MESSAGE_SEND_CONTACTS_LIST_IDC;
	onLBSelChanged ="\
		private[""_txt"", ""_index""];\
		_index = _this select 1;\
		if (_index isEqualTo -1) exitWith {};\
		_txt = ctrlText 8336;\
		if (_txt isEqualTo """") then {\
			ctrlSetText[8336, (_this select 0) lbData _index];\
		} else {\
			ctrlSetText[8336, format[""%1,%2"", _txt, (_this select 0) lbData _index]];\
		};";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.264 * safezoneH;
};
class PHONE_MESSAGE_SEND_CONTACTS_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_SEND_CONTACTS_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.286 * safezoneH;
};

class PHONE_MESSAGE_SEND_MESSAGE_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_MESSAGE_HEADER_IDC;
	text = "<t align='center'>Message</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_MESSAGE_INFO : Life_RscEdit
{
	idc = PHONE_MESSAGE_SEND_MESSAGE_INFO_IDC;
	text = "";
	colorBackground[] = {0,0,0,0.6};
	style = 16;

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.165 * safezoneH;
};

class PHONE_MESSAGE_SEND_NUMBER_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_NUMBER_HEADER_IDC;
	text = "<t align='center'>Numéro(s)</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_NUMBER_INFO : Life_RscEdit
{
	idc = PHONE_MESSAGE_SEND_NUMBER_INFO_IDC;
	text = "";
	tooltip = "Vous pouvez envoyer votre message jusqu'a cinq personnes en séparant vos numéros par des ',' (ex: 0000,0001,0002...)";
	style = 530;

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_NUMBER_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_SEND_NUMBER_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.427812 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.231 * safezoneH;
};

class PHONE_MESSAGE_SEND_HIDE_HEADER : Life_RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_HIDE_HEADER_IDC;
	text = "<t align='center'>Masquer son numéro</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_HIDE_INFO : RscCheckBox
{
	idc = PHONE_MESSAGE_SEND_HIDE_INFO_IDC;
	tooltip = "Votre numéro sera caché à votre destinataire";

	x = 0.620677 * safezoneW + safezoneX;
	y = 0.383518 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_MESSAGE_SEND_HIDE_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_SEND_HIDE_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.5825 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.066 * safezoneH;
};

class PHONE_MESSAGE_SEND_IMAGE : life_RscPicture
{
	idc = PHONE_MESSAGE_SEND_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_send_action.paa";

	x = 0.525781 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_MESSAGE_SEND_BUTTON : RscButtonSilent
{
	idc = PHONE_MESSAGE_SEND_BUTTON_IDC;
	action = "[] call public_fnc_APP_phone_messages_send_action;";
	tooltip = "Envoyer";

	x = 0.525781 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.055 * safezoneH;
};

class PHONE_MESSAGE_SEND_PRICE_FRAME: RscFrame
{
	idc = PHONE_MESSAGE_SEND_PRICE_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_MESSAGE_SEND_PRICE_HEADER: RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_PRICE_HEADER_IDC;
	text = "<t align='center'>Prix du SMS</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_MESSAGE_SEND_PRICE_INFO: RscStructuredText
{
	idc = PHONE_MESSAGE_SEND_PRICE_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
};

// SETTINGS
#define PHONE_SETTING_RING_HEADER_IDC 			8350
#define PHONE_SETTING_RING_LIST_IDC 			8351
#define PHONE_SETTING_RING_FRAME_IDC 			8352
#define PHONE_SETTINGS_RING_VALIDATE_IMAGE_IDC 	8353
#define PHONE_SETTINGS_RING_VALIDATE_BUTTON_IDC 8354
#define PHONE_SETTINGS_RING_LISTEN_IMAGE_IDC 	8355
#define PHONE_SETTINGS_RING_LISTEN_BUTTON_IDC 	8356
#define PHONE_SETTINGS_BACK_IMAGE_IDC 			8357
#define PHONE_SETTINGS_BACK_BUTTON_IDC 			8358
#define PHONE_SETTINGS_SILENT_HEADER_IDC 		8359
#define PHONE_SETTINGS_SILENT_CHECK_IDC 		8360
#define PHONE_SETTINGS_SILENT_FRAME_IDC 		8361

PHONE_SETTINGS_BACKGROUND = "\lyeed\images\back.jpg";
PHONE_SETTINGS_IDCS[] =
{
	PHONE_SETTING_RING_HEADER_IDC,
	PHONE_SETTING_RING_LIST_IDC,
	PHONE_SETTING_RING_FRAME_IDC,
	PHONE_SETTINGS_RING_VALIDATE_IMAGE_IDC,
	PHONE_SETTINGS_RING_VALIDATE_BUTTON_IDC,
	PHONE_SETTINGS_RING_LISTEN_IMAGE_IDC,
	PHONE_SETTINGS_RING_LISTEN_BUTTON_IDC,
	PHONE_SETTINGS_BACK_IMAGE_IDC,
	PHONE_SETTINGS_BACK_BUTTON_IDC,
	PHONE_SETTINGS_SILENT_HEADER_IDC,
	PHONE_SETTINGS_SILENT_CHECK_IDC,
	PHONE_SETTINGS_SILENT_FRAME_IDC
};

class PHONE_SETTING_RING_HEADER: Life_RscStructuredText
{
	idc = PHONE_SETTING_RING_HEADER_IDC;
	text = "Sonneries SMS";
	colorBackground[] = {0,0,0,0.8};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_SETTING_RING_LIST: Life_RscListBox
{
	idc = PHONE_SETTING_RING_LIST_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.209 * safezoneH;
};
class PHONE_SETTING_RING_FRAME: Life_RscFrame
{
	idc = PHONE_SETTING_RING_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.335 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.231 * safezoneH;
};
class PHONE_SETTINGS_RING_VALIDATE_IMAGE: life_RscPicture
{
	idc = PHONE_SETTINGS_RING_VALIDATE_IMAGE_IDC;
	text = "\lyeed_IMG\data\global\validate_settings.paa";

	x = 0.54125 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_SETTINGS_RING_VALIDATE_BUTTON : RscButtonSilent
{
	idc = PHONE_SETTINGS_RING_VALIDATE_BUTTON_IDC;
	action = "\
		profileNamespace setVariable[""ALYSIA_phone_recv"", (lbCurSel 8351) + 1];\
		[] call public_fnc_APP_phone_settings;\
	";
	tooltip = "Sauvegarder la sonnerie";

	x = 0.54125 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_SETTINGS_RING_LISTEN_IMAGE: life_RscPicture
{
	idc = PHONE_SETTINGS_RING_LISTEN_IMAGE_IDC;
	text = "\lyeed_IMG\data\tablet\listen.paa";

	x = 0.54125 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_SETTINGS_RING_LISTEN_BUTTON : RscButtonSilent
{
	idc = PHONE_SETTINGS_RING_LISTEN_BUTTON_IDC;
	action = "playSound (lbData[8351, lbCurSel 8351]);";
	tooltip = "Ecouter la sonnerie";

	x = 0.54125 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class PHONE_SETTINGS_BACK_IMAGE : life_RscPicture
{
	idc = PHONE_SETTINGS_BACK_IMAGE_IDC;
	text = "\lyeed\images\back.paa";

	x = 0.319531 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_SETTINGS_BACK_BUTTON : RscButtonSilent
{
	idc = PHONE_SETTINGS_BACK_BUTTON_IDC;
	action = "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	tooltip = "Retour";

	x = 0.319531 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

class PHONE_SETTINGS_SILENT_HEADER: Life_RscStructuredText
{
	idc = PHONE_SETTINGS_SILENT_HEADER_IDC;
	text = "Mode silencieux";
	colorBackground[] = {0,0,0,0.8};

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_SETTINGS_SILENT_CHECK: RscCheckBox
{
	idc = PHONE_SETTINGS_SILENT_CHECK_IDC;
	onCheckedChanged = "\
	if ((_this select 1) isEqualTo 0) then {\
		profileNamespace setVariable[""ALYSIA_phone_SILENT"", false];\
	} else {\
		profileNamespace setVariable[""ALYSIA_phone_SILENT"", true];\
		playSound ""message_rcv_silent"";\
	};";

	x = 0.62375 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_SETTINGS_SILENT_FRAME: Life_RscFrame
{
	idc = PHONE_SETTINGS_SILENT_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.055 * safezoneH;
};

// Contacts page

#define PHONE_CONTACTS_BACK_IMAGE_IDC 			8370
#define PHONE_CONTACTS_BACK_BUTTON_IDC 			8371
#define PHONE_CONTACTS_LIST_FRAME_IDC 			8372
#define PHONE_CONTACTS_LIST_HEADER_IDC 			8373
#define PHONE_CONTACTS_LIST_INFO_IDC 			8374
#define PHONE_CONTACTS_REMOVE_IMAGE_IDC 		8375
#define PHONE_CONTACTS_REMOVE_BUTTON_IDC 		8376
#define PHONE_CONTACTS_SEND_IMAGE_IDC 			8377
#define PHONE_CONTACTS_SEND_BUTTON_IDC 			8378
#define PHONE_CONTACTS_ADD_HEADER_IDC 			8379
#define PHONE_CONTACTS_ADD_FRAME_IDC 			8380
#define PHONE_CONTACTS_ADD_IMAGE_IDC 			8381
#define PHONE_CONTACTS_ADD_BUTTON_IDC 			8382
#define PHONE_CONTACTS_ADD_NUMBER_HEADER_IDC 	8383
#define PHONE_CONTACTS_ADD_NUMBER_INFO_IDC 		8384
#define PHONE_CONTACTS_ADD_NAME_HEADER_IDC 		8385
#define PHONE_CONTACTS_ADD_NAME_INFO_IDC 		8386

PHONE_CONTACTS_BACKGROUND = "\lyeed\images\back_phone_contacts.jpg";
PHONE_CONTACTS_IDCS[] =
{
	PHONE_CONTACTS_BACK_IMAGE_IDC,
	PHONE_CONTACTS_BACK_BUTTON_IDC,
	PHONE_CONTACTS_LIST_FRAME_IDC,
	PHONE_CONTACTS_LIST_HEADER_IDC,
	PHONE_CONTACTS_LIST_INFO_IDC
};

class PHONE_CONTACTS_BACK_IMAGE : life_RscPicture
{
	idc = PHONE_CONTACTS_BACK_IMAGE_IDC;
	text = "\lyeed\images\back.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_CONTACTS_BACK_BUTTON : RscButtonSilent
{
	idc = PHONE_CONTACTS_BACK_BUTTON_IDC;
	action = "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	tooltip = "Retour";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

class PHONE_CONTACTS_LIST_FRAME: RscFrame
{
	idc = PHONE_CONTACTS_LIST_FRAME_IDC;
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.297 * safezoneH;
	colorText[] = {0,0,0,0.8};
};
class PHONE_CONTACTS_LIST_HEADER : Life_RscStructuredText
{
	idc = PHONE_CONTACTS_LIST_HEADER_IDC;
	text = "<t align='center'>Contacts</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CONTACTS_LIST_INFO : Life_RscListBox
{
	idc = PHONE_CONTACTS_LIST_INFO_IDC;

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.275 * safezoneH;
};

class PHONE_CONTACTS_REMOVE_IMAGE : life_RscPicture
{
	idc = PHONE_CONTACTS_REMOVE_IMAGE_IDC;
	text = "\lyeed\images\phone_contacts_remove.paa";

	x = 0.546406 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_CONTACTS_REMOVE_BUTTON : RscButtonSilent
{
	idc = PHONE_CONTACTS_REMOVE_BUTTON_IDC;
	action = "\
		private[""_sel""];\
		_sel = lbCurSel 8374;\
		if (_sel isEqualTo -1) exitWith {};\
		g_phone_contacts deleteAt _sel;\
		[""phone_contacts""] spawn public_fnc_tabletApp;\
	";
	tooltip = "Supprimer";

	x = 0.546406 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class PHONE_CONTACTS_SEND_IMAGE: RscPicture
{
	idc = PHONE_CONTACTS_SEND_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_send_action.paa";

	x = 0.546406 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};
class PHONE_CONTACTS_SEND_BUTTON : RscButtonSilent
{
	idc = PHONE_CONTACTS_SEND_BUTTON_IDC;
	action = "\
		private[""_index""];\
		_index = lbCurSel 8374;\
		if (_index isEqualTo -1) exitWith {};\
		[""phone_messages_send""] spawn public_fnc_tabletApp;\
		ctrlSetText[8336, (g_phone_contacts select _index) select 1];\
	";
	tooltip = "Envoyer un message";

	x = 0.546406 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.044 * safezoneH;
};

class PHONE_CONTACTS_ADD_HEADER : Life_RscStructuredText
{
	idc = PHONE_CONTACTS_ADD_HEADER_IDC;
	text = "<t align='center'>Ajouter un contact</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.551562 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CONTACTS_ADD_FRAME: RscFrame
{
	idc = PHONE_CONTACTS_ADD_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.551562 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.209 * safezoneH;
};

class PHONE_CONTACTS_ADD_IMAGE : life_RscPicture
{
	idc = PHONE_CONTACTS_ADD_IMAGE_IDC;
	text = "\lyeed\images\phone_contacts_add.paa";

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};
class PHONE_CONTACTS_ADD_BUTTON : RscButtonSilent
{
	idc = PHONE_CONTACTS_ADD_BUTTON_IDC;
	action = "[ctrlText 8386, ctrlText 8384] call public_fnc_APP_phone_contacts_add;";
	tooltip = "Ajouter";

	x = 0.592812 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.066 * safezoneH;
};

class PHONE_CONTACTS_ADD_NUMBER_HEADER : Life_RscStructuredText
{
	idc = PHONE_CONTACTS_ADD_NUMBER_HEADER_IDC;
	text = "<t align='center'>Numéro</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.577344 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CONTACTS_ADD_NUMBER_INFO : Life_RscEdit
{
	idc = PHONE_CONTACTS_ADD_NUMBER_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	text = "";

	x = 0.577344 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CONTACTS_ADD_NAME_HEADER : Life_RscStructuredText
{
	idc = PHONE_CONTACTS_ADD_NAME_HEADER_IDC;
	text = "<t align='center'>Nom</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.577344 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CONTACTS_ADD_NAME_INFO : Life_RscEdit
{
	idc = PHONE_CONTACTS_ADD_NAME_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};
	text = "";

	x = 0.577344 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};

// faction
#define PHONE_FACTION_BACK_IMAGE_IDC			8390
#define PHONE_FACTION_BACK_BUTTON_IDC 			8391
#define PHONE_FACTION_MESSAGE_HEADER_IDC 		8392
#define PHONE_FACTION_MESSAGE_INFO_IDC 			8393
#define PHONE_FACTION_MESSAGE_SEND_IMAGE_IDC 	8394
#define PHONE_FACTION_MESSAGE_SEND_BUTTON_IDC	8395

PHONE_FACTION_BACKGROUND = "\lyeed\images\back.jpg";
PHONE_FACTION_IDCS[] =
{
	PHONE_FACTION_BACK_IMAGE_IDC,
	PHONE_FACTION_BACK_BUTTON_IDC,
	PHONE_FACTION_MESSAGE_HEADER_IDC,
	PHONE_FACTION_MESSAGE_INFO_IDC,
	PHONE_FACTION_MESSAGE_SEND_IMAGE_IDC,
	PHONE_FACTION_MESSAGE_SEND_BUTTON_IDC,
};

class PHONE_FACTION_BACK_IMAGE : life_RscPicture
{
	idc = PHONE_FACTION_BACK_IMAGE_IDC;
	text = "\lyeed\images\back.paa";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};
class PHONE_FACTION_BACK_BUTTON : RscButtonSilent
{
	idc = PHONE_FACTION_BACK_BUTTON_IDC;
	action = "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	tooltip = "Retour";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

class PHONE_FACTION_MESSAGE_HEADER: RscStructuredText
{
	idc = PHONE_FACTION_MESSAGE_HEADER_IDC;
	text = "<t align='center'>Message</t>";
	colorBackground[] = {0,0,0,1};

	x = 0.381406 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_FACTION_MESSAGE_INFO: RscEdit
{
	idc = PHONE_FACTION_MESSAGE_INFO_IDC;

	x = 0.381406 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.252656 * safezoneW;
	h = 0.242 * safezoneH;
};

class PHONE_FACTION_MESSAGE_SEND_IMAGE: RscPicture
{
	idc = PHONE_FACTION_MESSAGE_SEND_IMAGE_IDC;
	text = "\lyeed\images\phone_messages_send_action.paa";

	x = 0.484531 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.055 * safezoneH;
};
class PHONE_FACTION_MESSAGE_SEND_BUTTON: RscButtonSilent
{
	idc = PHONE_FACTION_MESSAGE_SEND_BUTTON_IDC;
	action = "[ctrlText 8393, playerSide] call public_fnc_APP_phone_faction_send;";
	tooltip = "Envoyer";

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
};

// Main page
#define PHONE_CATEGORY_NUMBER_HEADER_IDC	8500
#define PHONE_CATEGORY_NUMBER_INFO_IDC 		8501
#define PHONE_CATEGORY_NUMBER_FRAME_IDC 	8502
#define PHONE_CATEGORY_FORFAIT_HEADER_IDC 	8503
#define PHONE_CATEGORY_FORFAIT_INFO_IDC 	8504
#define PHONE_CATEGORY_FORFAIT_FRAME_IDC 	8505
#define PHONE_CATEGORY_APP_1_PICTURE_IDC 	8506
#define PHONE_CATEGORY_APP_1_BUTTON_IDC 	8507
#define PHONE_CATEGORY_APP_1_TITLE_IDC 		8508
#define PHONE_CATEGORY_APP_2_PICTURE_IDC 	8509
#define PHONE_CATEGORY_APP_2_BUTTON_IDC 	8510
#define PHONE_CATEGORY_APP_2_TITLE_IDC 		8511
#define PHONE_CATEGORY_APP_3_PICTURE_IDC 	8512
#define PHONE_CATEGORY_APP_3_BUTTON_IDC 	8513
#define PHONE_CATEGORY_APP_3_TITLE_IDC 		8514
#define PHONE_CATEGORY_APP_4_PICTURE_IDC 	8515
#define PHONE_CATEGORY_APP_4_BUTTON_IDC 	8516
#define PHONE_CATEGORY_APP_4_TITLE_IDC 		8517
#define PHONE_CATEGORY_APP_5_PICTURE_IDC 	8518
#define PHONE_CATEGORY_APP_5_BUTTON_IDC 	8519
#define PHONE_CATEGORY_APP_5_TITLE_IDC 		8520
#define PHONE_CATEGORY_APP_6_PICTURE_IDC 	8521
#define PHONE_CATEGORY_APP_6_BUTTON_IDC 	8522
#define PHONE_CATEGORY_APP_6_TITLE_IDC 		8523
#define PHONE_CATEGORY_APP_7_PICTURE_IDC 	8524
#define PHONE_CATEGORY_APP_7_BUTTON_IDC 	8525
#define PHONE_CATEGORY_APP_7_TITLE_IDC 		8526
#define PHONE_CATEGORY_APP_8_PICTURE_IDC 	8527
#define PHONE_CATEGORY_APP_8_BUTTON_IDC 	8528
#define PHONE_CATEGORY_APP_8_TITLE_IDC 		8529

PHONE_CATEGORY_BACKGROUND = "\lyeed\images\back.jpg";
PHONE_CATEGORY_IDCS[] =
{
	PHONE_CATEGORY_NUMBER_HEADER_IDC,
	PHONE_CATEGORY_NUMBER_INFO_IDC,
	PHONE_CATEGORY_NUMBER_FRAME_IDC,
	PHONE_CATEGORY_FORFAIT_HEADER_IDC,
	PHONE_CATEGORY_FORFAIT_INFO_IDC,
	PHONE_CATEGORY_FORFAIT_FRAME_IDC,
	PHONE_CATEGORY_APP_1_PICTURE_IDC,
	PHONE_CATEGORY_APP_1_BUTTON_IDC,
	PHONE_CATEGORY_APP_1_TITLE_IDC,
	PHONE_CATEGORY_APP_2_PICTURE_IDC,
	PHONE_CATEGORY_APP_2_BUTTON_IDC,
	PHONE_CATEGORY_APP_2_TITLE_IDC,
	PHONE_CATEGORY_APP_3_PICTURE_IDC,
	PHONE_CATEGORY_APP_3_BUTTON_IDC,
	PHONE_CATEGORY_APP_3_TITLE_IDC,
	PHONE_CATEGORY_APP_4_PICTURE_IDC,
	PHONE_CATEGORY_APP_4_BUTTON_IDC,
	PHONE_CATEGORY_APP_4_TITLE_IDC,
	PHONE_CATEGORY_APP_5_PICTURE_IDC,
	PHONE_CATEGORY_APP_5_BUTTON_IDC,
	PHONE_CATEGORY_APP_5_TITLE_IDC,
	PHONE_CATEGORY_APP_6_PICTURE_IDC,
	PHONE_CATEGORY_APP_6_BUTTON_IDC,
	PHONE_CATEGORY_APP_6_TITLE_IDC,
	PHONE_CATEGORY_APP_7_PICTURE_IDC,
	PHONE_CATEGORY_APP_7_BUTTON_IDC,
	PHONE_CATEGORY_APP_7_TITLE_IDC,
	PHONE_CATEGORY_APP_8_PICTURE_IDC,
	PHONE_CATEGORY_APP_8_BUTTON_IDC,
	PHONE_CATEGORY_APP_8_TITLE_IDC
};

class PHONE_CATEGORY_NUMBER_HEADER: RscStructuredText
{
	idc = PHONE_CATEGORY_NUMBER_HEADER_IDC;
	text = "<t align='center'>Numéro</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CATEGORY_NUMBER_INFO: RscStructuredText
{
	idc = PHONE_CATEGORY_NUMBER_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CATEGORY_NUMBER_FRAME: RscFrame
{
	idc = PHONE_CATEGORY_NUMBER_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.324687 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.044 * safezoneH;
};

class PHONE_CATEGORY_FORFAIT_HEADER: RscStructuredText
{
	idc = PHONE_CATEGORY_FORFAIT_HEADER_IDC;
	text = "<t align='center'>Forfait</t>";
	colorBackground[] = {0,0,0,0.8};

	x = 0.603125 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CATEGORY_FORFAIT_INFO: RscStructuredText
{
	idc = PHONE_CATEGORY_FORFAIT_INFO_IDC;
	colorBackground[] = {0,0,0,0.6};

	x = 0.603125 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class PHONE_CATEGORY_FORFAIT_FRAME: RscFrame
{
	idc = PHONE_CATEGORY_FORFAIT_FRAME_IDC;
	colorText[] = {0,0,0,0.8};

	x = 0.603125 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.044 * safezoneH;
};

class PHONE_CATEGORY_APP_1_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_1_PICTURE_IDC;
	text = "\lyeed\images\phone_messages_read.paa";
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_1_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_1_BUTTON_IDC;
	action = "[""phone_messages_read""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8506,""\lyeed\images\phone_messages_readblanc.paa""];";
	onMouseExit = "ctrlSetText[8506,""\lyeed\images\phone_messages_read.paa""];";
	tooltip = "Lire vos messages";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_1_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_1_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Vos messages</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.329844 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_2_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_2_PICTURE_IDC;
	text = "\lyeed\images\phone_contacts.paa";

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_2_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_2_BUTTON_IDC;
	action = "[""phone_contacts""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8509,""\lyeed\images\phone_contactsblanc.paa""];";
	onMouseExit = "ctrlSetText[8509,""\lyeed\images\phone_contacts.paa""];";
	tooltip = "Gérer vos contacts";

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_2_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_2_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Contacts</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.4175 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_3_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_3_PICTURE_IDC;
	text = "\lyeed\images\phone_messages_send.paa";

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_3_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_3_BUTTON_IDC;
	action = "[""phone_messages_send""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8512,""\lyeed\images\phone_messages_sendblanc.paa""];";
	onMouseExit = "ctrlSetText[8512,""\lyeed\images\phone_messages_send.paa""];";
	tooltip = "Envoyer un message";

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_3_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_3_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Envoyer un message</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.494844 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_4_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_4_PICTURE_IDC;
	text = "\lyeed\images\phone_forfait.paa";

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_4_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_4_BUTTON_IDC;
	action = "[""store_forfait""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8515,""\lyeed\images\phone_forfaitblanc.paa""];";
	onMouseExit = "ctrlSetText[8515,""\lyeed\images\phone_forfait.paa""];";
	tooltip = "Changer de forfait";

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_4_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_4_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Changer de forfait</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_5_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_5_PICTURE_IDC;
	text = "\lyeed\images\phone_numberchang.paa";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_5_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_5_BUTTON_IDC;
	action = "[""phone_change""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8518,""\lyeed\images\phone_numberchangblanc.paa""];";
	onMouseExit = "ctrlSetText[8518,""\lyeed\images\phone_numberchang.paa""];";
	tooltip = "Changer de numéro";

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_5_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_5_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Changer de numéro</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.329844 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_6_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_6_PICTURE_IDC;
	text = "\lyeed\images\phone_block.paa";

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_6_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_6_BUTTON_IDC;
	action = "[""phone_blacklist""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8521,""\lyeed\images\phone_blockblanc.paa""];";
	onMouseExit = "ctrlSetText[8521,""\lyeed\images\phone_block.paa""];";
	tooltip = "Bloquer un numéro";

	x = 0.443281 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_6_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_6_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Bloquer un numéro</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.4175 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_7_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_7_PICTURE_IDC;
	text = "\lyeed\images\phone_settings.paa";

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_7_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_7_BUTTON_IDC;
	action = "[""phone_settings""] spawn public_fnc_tabletApp;";
	onMouseEnter = "ctrlSetText[8524,""\lyeed\images\phone_settingsblanc.paa""];";
	onMouseExit = "ctrlSetText[8524,""\lyeed\images\phone_settings.paa""];";
	tooltip = "Réglages";

	x = 0.520625 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_7_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_7_TITLE_IDC;
	text = "<t align='center' font='PuristaSemiBold' size='0.7'>Réglages</t>";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.494844 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

class PHONE_CATEGORY_APP_8_PICTURE: RscPicture
{
	idc = PHONE_CATEGORY_APP_8_PICTURE_IDC;
	text = "";

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_8_BUTTON: RscButtonSilent
{
	idc = PHONE_CATEGORY_APP_8_BUTTON_IDC;
	action = "[""phone_faction""] spawn public_fnc_tabletApp;";
	tooltip = "Envoyer un message faction";

	x = 0.597969 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class PHONE_CATEGORY_APP_8_TITLE: RscStructuredText
{
	idc = PHONE_CATEGORY_APP_8_TITLE_IDC;
	text = "";
	colorBackground[] = {-1,-1,-1,0};

	x = 0.572187 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
};

// phone change number
PHONE_CHANGE_IDCS[] = {};
PHONE_CHANGE_BACKGROUND = "\lyeed\images\back.jpg";