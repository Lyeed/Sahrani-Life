/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_display"];

disableSerialization;
_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8101;
lbClear _list;

_list lbAdd "Licences";
_list lbSetData [0, "STORE_LICENSES"];
_list lbSetPicture [0, "lyeed\images\store_licenses.paa"];

_list lbAdd "Applications";
_list lbSetData [1, "STORE_APPLICATIONS"];
_list lbSetPicture [1, "lyeed\images\store_applications.paa"];

_list lbAdd "Forfaits mobiles";
_list lbSetData [2, "STORE_FORFAIT"];
_list lbSetPicture [2, "lyeed\images\phone_forfait.paa"];
