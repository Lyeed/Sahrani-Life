/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list =  _display displayCtrl 8201;
lbClear _list;

{
	_index = _list lbAdd (_x select 0);
	_list lbSetData [_index, (_x select 1)];
} forEach ([
	["Mettre les mains sur la tête", "ALT+H"],
	["Menotter", "SHIFT+R"],
	["Ramasser une valise", "Windows+T"],
	["Interagir", "Windows"],
	["Assomer", "SHIFT+G"],
	["Ranger son arme", "SHIFT+H"],
	["Dégainer son arme", "CTRL+H"],
	["Vérouiller/dévérouiller son véhicule", "U"],
	["Accéder à l'inventaire virtuel d'un véhicule/maison", "T"],
	["Utiliser la nitro", "6"]
]);

_list lbSetCurSel 0;