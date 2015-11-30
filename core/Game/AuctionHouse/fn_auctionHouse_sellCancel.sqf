/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_itemInfo"];

if (!dialog) exitWith {};
if ((time - life_action_delay) < 2) exitWith { ["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; };
if ([west, (visiblePosition player), 20] call life_fnc_nearUnits) exitWith {
	closeDialog 0;	
	["Vous ne pouvez pas interagir avec l'hôtel des ventes lorsque des militaires se trouvent à proximité"] call ALYSIA_fnc_error;
};

_price = lbValue[45602, (lbCurSel 45602)];
if (_price == -1) exitWith {};

ctrlEnable [45608, false];
life_action_delay = time;	
_itemInfo = call compile format["%1", lbData[45602, (lbCurSel 45602)]];
[[(_itemInfo select 0), (_itemInfo select 1), _price, player], "ALYSIA_fnc_hvRemove", false] spawn life_fnc_MP;
