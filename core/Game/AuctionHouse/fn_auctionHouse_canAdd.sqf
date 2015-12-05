/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_type", "_ret"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;

_ret = "";
switch (_type) do
{
	case 0:
	{
		if (([_item, 1, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff) != 1) then {
			_ret = "Vous n'avez pas assez de place dans votre inventaire";
		};
	};
	case 1:
	{
		_itemCfg = [_item] call public_fnc_fetchCfgDetails;
		switch (_itemCfg select 6) do
		{
			case "CfgWeapons":
			{
				switch (_itemCfg select 4) do
				{
					case 1:
					{
						if ((primaryWeapon player) != "") then {
							_ret = format["Veuillez ranger votre arme principale<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(primaryWeapon player)] call public_fnc_fetchCfgDetails) select 1];
						};
					};
					case 2:
					{
						if ((handgunWeapon player) != "") then {
							_ret = format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(handgunWeapon player)] call public_fnc_fetchCfgDetails) select 1];
						};
					};
					case 4:
					{
						if ((secondaryWeapon player) != "") then {
							_ret = format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(secondaryWeapon player)] call public_fnc_fetchCfgDetails) select 1];
						};
					};
				};
			};
		};
	};
	case 2:
	{

	};
};

_ret;
