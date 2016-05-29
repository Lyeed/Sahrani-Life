/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_history", "_list", "_display", "_button", "_company"];
_history = [_this, 0, [], [[]]] call BIS_fnc_param;
_company = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if (isNull _company) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

g_interaction_target = _company;

createDialog "RscDisplayDefaultListChoice";

disableSerialization;
_display = findDisplay 69000;

(_display displayCtrl 69001) ctrlSetStructuredText parseText "<t size='1.5' align='center'>Livre des comptes</t>";
(_display displayCtrl 69008) ctrlSetText "lyeed_IMG\data\companies\background.jpg";

_list = _display displayCtrl 69002;
lbClear _list;

_list lbAdd format["Actuel : %1kn", [(_company getVariable ["company_bank", 0])] call AlysiaClient_fnc_numberText];
_list lbSetPicture [0, "lyeed_IMG\data\interactions\player_to_company\action_book.paa"];

{
	_index = _list lbAdd format["%1kn le %2 de %3 (%4)", ([_x select 3] call AlysiaClient_fnc_numberText), _x select 1, _x select 0, _x select 4];
	if ((_x select 2) isEqualTo 1) then {
		_list lbSetPicture [_index, "lyeed_IMG\data\global\ope_plus.paa"];
		_list lbSetColor [_index, [0,1,0,1]];
	} else {
		_list lbSetPicture [_index, "lyeed_IMG\data\global\ope_minus.paa"];
		_list lbSetColor [_index, [1,0,0,1]];
	};
	_list lbSetTooltip [_index, (_list lbText _index)];
} forEach _history;

if ((lbSize _list) isEqualTo 1) then {
	_list lbAdd "Historique vide";
};

if ((["central_com"] call AlysiaClient_fnc_hasLicense) || (["gov_money"] call AlysiaClient_fnc_hasLicense)) then
{
	(_display displayCtrl 69006) ctrlSetStructuredText parseText "<t align='left' size='1.3'>Vider</t>";

	_button = _display displayCtrl 69007;
	_button buttonSetAction
	"
		[g_interaction_target, player] remoteExec ['AlysiaServer_fnc_company_history_clear', 2];
		closeDialog 0;
	";

	_button ctrlSetEventHandler["MouseEnter",
		"((findDisplay 69000) displayCtrl 69005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>Vider</t>"";
		((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [1,1,1,1];
		ctrlSetText[69005, ""lyeed_IMG\data\global\validate_select.paa""];
		ctrlShow[69003, false];"
	];

	_button ctrlSetEventHandler["MouseExit",
		"((findDisplay 69000) displayCtrl 69005) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>Vider</t>"";
		((findDisplay 69000) displayCtrl 69004) ctrlSetBackgroundColor [0,0,0,0.6];
		ctrlSetText[69005, ""lyeed_IMG\data\global\validate.paa""];
		ctrlShow[69003, true];"
	];
} else {
	ctrlShow[69003, false];
	ctrlShow[69004, false];
	ctrlShow[69005, false];
	ctrlShow[69006, false];
	ctrlShow[69007, false];
};
