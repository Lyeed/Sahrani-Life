/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_Btn1", "_Btn2", "_Btn3", "_Btn4", "_Btn5", "_Btn6", "_Btn7"];
g_pInact_curTarget = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull g_pInact_curTarget) exitWith {
	["Cible invalide"] call public_fnc_error; 
};

if (!(createDialog "pInteraction_Menu")) exitWith {};
disableSerialization;

_display = findDisplay 37400;
_Btn1 = _display displayCtrl 37450;
_Btn2 = _display displayCtrl 37451;
_Btn3 = _display displayCtrl 37452;
_Btn4 = _display displayCtrl 37453;
_Btn5 = _display displayCtrl 37454;
_Btn6 = _display displayCtrl 37455;
_Btn7 = _display displayCtrl 37456;

{
	_x ctrlShow false; 
} forEach ([_Btn1, _Btn2, _Btn3, _Btn4, _Btn5, _Btn6, _Btn7]);

if (g_pInact_curTarget in g_houses) then 
{
	/* TITLE */
	(_display displayCtrl 37401) ctrlSetText "Maison";

	/* BTN 1 - SELL */
	_Btn1 ctrlSetText "Vendre";
	if (((g_pInact_curTarget getVariable["house_owner", ["", ""]]) select 0) != (getPlayerUID player)) then {
		_Btn1 ctrlEnable false;
	};	
	_Btn1 buttonSetAction 
	"
		[g_pInact_curTarget] spawn public_fnc_sellHouse;
		closeDialog 0;
	";

	/* BTN 2 - STORAGE */
	_Btn2 ctrlSetText "Coffre";
	if (!(g_pInact_curTarget getVariable["containers", false])) then 
	{
		_Btn2 ctrlEnable false;
		_Btn2 ctrlSetTooltip "Aucun coffre";
	};
	_Btn2 buttonSetAction
	"
		[[g_pInact_curTarget, player], ""TON_fnc_crateCall"", false] spawn life_fnc_MP;
		closeDialog 0;
	";
	
	/* BTN 3 - LIGHTS */
	if (isNull (g_pInact_curTarget getVariable ["lightSource", ObjNull])) then {
		_Btn3 ctrlSetText "Lumieres ON";
	} else {
		_Btn3 ctrlSetText "Lumieres OFF";
	};
	_Btn3 buttonSetAction 
	"
		[g_pInact_curTarget] call public_fnc_lightHouseAction;
		closeDialog 0;
	";

	/* SHOW BTNS */
	_Btn1 ctrlShow true;
	_Btn2 ctrlShow true;
	_Btn3 ctrlShow true;
} else {
	if (count (g_pInact_curTarget getVariable["house_owner", []]) == 0) then 
	{
		if (playerSide != (call compile format["%1", (getText(missionConfigFile >> "ALYSIA_HOUSE" >> (typeOf g_pInact_curTarget) >> "side"))])) exitWith 
		{
			["Vous n'êtes pas autorisé à acheter ce type de bâtiment"] call public_fnc_info;
			closeDialog 0;
		};

		/* TITLE */
		(_display displayCtrl 37401) ctrlSetText "Achat";

		/* BTN 1 - BUY */
		_Btn1 ctrlSetText "Acheter";
		_Btn1 buttonSetAction 
		"
			[g_pInact_curTarget] spawn public_fnc_buyHouse;
			closeDialog 0;
		";
		_Btn1 ctrlShow true;
	} else {
		if (playerSide in [east, west]) then 
		{
			/* TITLE */
			(_display displayCtrl 37401) ctrlSetText "Fouille - Saisie";

			/* BTN 1 - OWNER */
			_Btn1 ctrlSetText "Propriétaire";
			_Btn1 buttonSetAction 
			"
				[g_pInact_curTarget] call public_fnc_houseOwner;
				closeDialog 0;
			";

			/* BTN 2 - STORAGE */
			_Btn2 ctrlSetText "Coffre";
			_Btn2 buttonSetAction 
			"
				[[g_pInact_curTarget, player], ""TON_fnc_crateCall"", false] spawn life_fnc_MP; 
				closeDialog 0;
			";

			/* RANK CHECKER */
			if (((call g_copLevel) < (getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "cop_search_rank_needed"))) && 
				((call g_onuLevel) < (getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "onu_search_rank_needed")))) then {
				_Btn1 ctrlEnable false;
				_Btn1 ctrlSetTooltip "Vous n'avez pas le grade suffisant pour effectuer cette action";
				_Btn2 ctrlEnable false;
				_Btn2 ctrlSetTooltip "Vous n'avez pas le grade suffisant pour effectuer cette action";
			} else {
				if (!(g_pInact_curTarget getVariable["containers", false])) then 
				{
					_Btn2 ctrlEnable false;
					_Btn2 ctrlSetTooltip "Aucun coffre";
				};
			};
			_Btn2 ctrlShow true;
			_Btn1 ctrlShow true;
		} else {
			["Cette maison n'est pas en vente"] call public_fnc_error; 
			closeDialog 0;
		};
	};
};
