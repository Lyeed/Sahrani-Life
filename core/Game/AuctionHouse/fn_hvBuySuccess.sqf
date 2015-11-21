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

switch (_type) do
{
	case 0: 
	{
		_name = getText(configFile >> "CfgVehicles" >> _item >> "displayName");
		titleText["* Le véhicule a été transféré dans votre garage *", "PLAIN"];
	};
	case 1: 
	{
		_name = ([_item] call life_fnc_fetchCfgDetails) select 1;
		[_item, true] call life_fnc_handleItem;
	};
	case 2: 
	{
		_name = [[_item, 0] call life_fnc_varHandle] call life_fnc_varToStr;
		[true, _item, 1] call life_fnc_handleInv;
	};
};

closeDialog 0;
[format["Vous avez acheté<br/><t align='center' color='#FF8000'>%1<br/><br/></t><t align='left'>Prix</t><t align='right' color='#8cff9b'>%2kn</t>", _name, [_price] call life_fnc_numberText]] call ALYSIA_fnc_info;
playSound "buy";
life_cash = life_cash - _price;
