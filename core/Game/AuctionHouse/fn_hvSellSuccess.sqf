/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_price", "_name", "_type"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;
_price = [_this, 1, -1, [-1]] call BIS_fnc_param;
_type = [_this, 2, -1, [-1]] call BIS_fnc_param;

if ((_item == "") || (_price == -1) || (_type == -1)) exitWith {};
_name = switch (_type) do
{
	case 0: {getText(configFile >> "CfgVehicles" >> _item >> "displayName")};
	case 1: {([_item] call life_fnc_fetchCfgDetails) select 1};
	case 2: {[[_item, 0] call life_fnc_varHandle] call life_fnc_varToStr};
};

_price = _price - (_price * 0.05);
[format["Vous avez vendu<br/><t align='center' color='#FF8000'>%1</t><br/><br/><t color='#8cff9b' align='center'>%2$</t>", _name, [_price] call life_fnc_numberText]] call ALYSIA_fnc_info;
playSound "buy";
life_atmcash = life_atmcash + _price;
