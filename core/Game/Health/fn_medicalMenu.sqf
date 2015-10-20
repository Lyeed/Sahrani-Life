/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_Btn1", "_Btn2", "_Btn3", "_Btn4", "_Btn5"];
g_pInact_curTarget = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull g_pInact_curTarget) exitWith {
	["Cible invalide"] call public_fnc_error;
};

if (!(g_pInact_curTarget getVariable["is_coma", false])) exitWith {
	["La cible n'est pas dans le coma"] call public_fnc_error;
};

if (!(createDialog "pInteraction_Menu")) exitWith {};
disableSerialization;

_display = findDisplay 37400;
_Btn1 = _display displayCtrl 37450;
_Btn2 = _display displayCtrl 37451;
_Btn3 = _display displayCtrl 37452;
_Btn4 = _display displayCtrl 37453;
_Btn5 = _display displayCtrl 37454;

(_display displayCtrl 37401) ctrlSetText "Menu médical";

_Btn1 ctrlSetText "Massage cardiaque";
_Btn1 buttonSetAction 
"
	closeDialog 0;
	[g_pInact_curTarget, ""main""] spawn public_fnc_massageCardiaque;"
;

_Btn2 ctrlSetText "Défibriler";
_Btn2 buttonSetAction 
"
	closeDialog 0;
	[g_pInact_curTarget, ""defibriler""] spawn public_fnc_massageCardiaque;
";
if ((backpack player) != "B_Defibrilateur_khk") then 
{
	_Btn2 ctrlEnable false;
	_Btn2 ctrlSetTooltip "Vous n'avez pas de défibrilateur";
};
if (((playerSide in [east, west] && (call g_MEDICLevel) == 0)) || ((playerSide == civilian) && !(missionNamespace getVariable["license_doc", false]))) then 
{
	_Btn2 ctrlEnable false; 
	_Btn2 ctrlSetTooltip "Vous n'êtes pas médecin";
};

_Btn3 ctrlSetText "Adrénaline";
_Btn3 buttonSetAction 
"
	closeDialog 0;
	[g_pInact_curTarget] spawn public_fnc_epinephrineUse;
";
if (!("SkylineItems_Adrenaline" in (magazines player))) then 
{
	_Btn3 ctrlEnable false;
	_Btn3 ctrlSetTooltip "Vous n'avez pas de seringue d'adrénaline";
};

_Btn4 ctrlSetText "Egorger";
_Btn4 buttonSetAction 
"
	closeDialog 0;
	[g_pInact_curTarget] spawn public_fnc_killProcess;
";
if (!("SkylineItems_Couteau" in (magazines player))) then
{
	_Btn4 ctrlEnable false;
	_Btn4 ctrlSetTooltip "Vous n'avez pas de couteau";
};

_Btn5 ctrlSetText "Trainer";
_Btn5 buttonSetAction 
"
	closeDialog 0;
	[g_pInact_curTarget] spawn public_fnc_bodyDrag;
";

(_display displayCtrl 37455) ctrlShow false;
(_display displayCtrl 37456) ctrlShow false;