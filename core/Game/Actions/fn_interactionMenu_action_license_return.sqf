/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_from"];
_from = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

g_action_inUse = true;

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil {((animationState player) isEqualTo "ainvpercmstpsnonwnondnon_putdown_amovpercmstpsnonwnondnon")};

g_action_inUse = false;

createDialog "RscDisplayPlayerRevokeLicense";

disableSerialization;
_display = findDisplay 18000;
if (isNull _display) exitWith {};

_list = _display displayCtrl 18001;
lbClear _list;

{
	_index = _list lbAdd ([_x] call AlysiaClient_fnc_licenseGetName);
	_list lbSetData [_index, _x];
} forEach ([_this, 0, [], [[]]] call BIS_fnc_param);
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Aucune";
	ctrlShow[18002, false];
	ctrlShow[18003, false];
};

_list lbSetCurSel 0;

while {!(isNull _display)} do
{
	if (isNull _from) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>Cible invalide."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["is_coma", false]) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>Vous êtes dans le coma."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};
	if ((player distance _from) > ((((boundingBox _from) select 1) select 0) + 2.5)) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>Vous êtes trop loin de la cible."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>Vous êtes menotté."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>Vous avez les mains sur la tête."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};
	if (_from getVariable ["is_coma", false]) exitWith
	{
		["Fouille <t color='#FFBF00'>interrompu</t>.<br/>La cible est dans le coma."] call AlysiaClient_fnc_info;
		closeDialog 0;
	};

	uiSleep 0.5;
};
