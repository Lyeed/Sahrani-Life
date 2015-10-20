/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_dialog"];
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;
_dialog = uiNamespace getVariable["tablet", displayNull];

if ((isNull _list) || (isNull _dialog) || (_index isEqualTo -1)) exitWith {};
if ((_list lbText 0) isEqualTo "Vide") then
{
	[[8003, 8012], false] call public_fnc_tabletShow;
} else {
	private["_item", "_weight"];
	_item = _list lbData _index;
	_weight = [_item] call public_fnc_itemGetWeight;
	
	(_dialog displayCtrl 8007) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", _weight];
	(_dialog displayCtrl 8009) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", _weight * ([_item] call public_fnc_itemCount)];	

	[[8003, 8009], true] call public_fnc_tabletShow;
	
	if (getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use") isEqualTo "") then
	{
		[8010, false] call public_fnc_tabletShow;
		[8011, false] call public_fnc_tabletShow;
	} else {
		[8010, true] call public_fnc_tabletShow;
		[8011, true] call public_fnc_tabletShow;
	};

	if ([_item] call public_fnc_itemIsRemovable) then
	{
		[8012, true] call public_fnc_tabletShow;
		[8013, true] call public_fnc_tabletShow;
	} else {
		[8012, false] call public_fnc_tabletShow;
		[8013, false] call public_fnc_tabletShow;
	};
};