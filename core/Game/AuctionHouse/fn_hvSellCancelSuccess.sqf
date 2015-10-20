/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_type", "_name"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;
_type = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_item == "") || (_type == -1)) exitWith {};

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

[format["Vous avez retiré<br/><t align='center' color='#FF8000'>%1<br/></t>des ventes", _name]] call ALYSIA_fnc_info;
if (dialog) then {
	closeDialog 0;
};