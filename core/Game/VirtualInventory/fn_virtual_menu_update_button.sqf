/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_item"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((isNull _list) || (_sel isEqualTo -1)) exitWith
{
	ctrlShow[85002, false];
	ctrlShow[85003, false];
};

if ((_list lbText 0) isEqualTo "Vide") exitWith
{
	ctrlShow[85002, false];
	ctrlShow[85003, false];
};

_item = lbData[85001, _sel];
if (_item isEqualTo "") exitWith
{
	ctrlShow[85002, false];
	ctrlShow[85003, false];	
};

if (getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use") isEqualTo "") then {
	ctrlShow[85002, false];
} else {
	ctrlShow[85002, true];
};

if ([_item] call public_fnc_itemIsRemovable) then {
	ctrlShow[85003, true];
} else {
	ctrlShow[85003, false];
};