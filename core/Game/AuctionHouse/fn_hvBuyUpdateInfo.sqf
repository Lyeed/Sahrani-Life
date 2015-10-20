/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_itemInfo"];

if (!dialog) exitWith {};
_price = lbValue[45602, (lbCurSel 45602)];
_itemInfo = call compile format["%1", lbData[45602, (lbCurSel 45602)]];

if (_price == -1) exitWith
{
	ctrlShow [45603, false];
	ctrlShow [45604, false];
	ctrlShow [45605, false];
	ctrlShow [45606, false];
	ctrlShow [45607, false];
	ctrlShow [45608, false];
};

ctrlShow [45603, true];
ctrlShow [45604, true];
ctrlShow [45605, true];
ctrlShow [45606, true];
ctrlShow [45607, true];
((findDisplay 45600) displayCtrl 45603) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1$</t><br/>",
	[_price] call life_fnc_numberText,
	if (life_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if ((getPlayerUID player) != (_itemInfo select 3)) then
{
	ctrlShow [45608, false];
	((findDisplay 45600) displayCtrl 45608) ctrlSetTooltip "";
	if (life_cash < _price) then
	{
		ctrlEnable [45604, false];
		((findDisplay 45600) displayCtrl 45604) ctrlSetTooltip "Vous n'avez pas assez d'argent";
	}
	else 
	{
		ctrlEnable [45604, true];
		((findDisplay 45600) displayCtrl 45604) ctrlSetTooltip ""; 
	};
} else {
	ctrlEnable [45604, false];
	ctrlShow [45608, true];
	((findDisplay 45600) displayCtrl 45604) ctrlSetTooltip "Vous ne pouvez pas acheter vos propres objets";
	((findDisplay 45600) displayCtrl 45608) ctrlSetTooltip "Annule la vente";	
};

((findDisplay 45600) displayCtrl 45606) ctrlSetStructuredText parseText format["%1", (_itemInfo select 2)];
