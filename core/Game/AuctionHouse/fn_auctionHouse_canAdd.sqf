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

_ret = switch (_type) do
{
	case 0:
	{
		if (([_item, 1, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff) isEqualTo 1) exitWith {
			"";
		} else {
			"Vous n'avez pas assez de place dans votre inventaire"
		};
	};
	case 1:
	{
		_itemCfg = [_item] call public_fnc_fetchCfgDetails;
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((primaryWeapon player) != "") && ((_itemCfg select 4) isEqualTo 1)) exitWith
		{
			format["Veuillez ranger votre arme principale<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(primaryWeapon player)] call public_fnc_fetchCfgDetails) select 1];
		};
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((handgunWeapon player) != "") && ((_itemCfg select 4) isEqualTo 2)) exitWith
		{
			format["Veuillez ranger votre arme secondaire<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(handgunWeapon player)] call public_fnc_fetchCfgDetails) select 1];
		};
		if (((_itemCfg select 6) isEqualTo "CfgWeapons") && ((secondaryWeapon player) != "") && ((_itemCfg select 4) isEqualTo 4)) exitWith
		{
			format["Veuillez ranger votre lanceur<br/><t align='center'>%1</t><br/>avant d'acheter une autre arme du même type", ([(secondaryWeapon player)] call public_fnc_fetchCfgDetails) select 1];
		};

		""
	};
	case 2:
	{
		""
	};
};

_ret;
