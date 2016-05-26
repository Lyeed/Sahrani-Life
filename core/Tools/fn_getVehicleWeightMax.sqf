/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_wm_target";
_wm_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _wm_target) exitWith {0};

switch (true) do
{
	case (typeOf(_wm_target) isEqualTo "Land_Suitcase_F"):{95};
	case (typeOf(_wm_target) in ["Bank_Sahrani_N", "Bank_Sahrani_S"]): {5000};
	case (isClass(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(_wm_target))): {getNumber(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(_wm_target) >> "inventory")};
	case ((_wm_target isKindOf "Car") || (_wm_target isKindOf "Ship") || (_wm_target isKindOf "Air") || (_wm_target isKindOf "Tank") || (_wm_target isKindOf "Truck")): {[typeOf(_wm_target)] call AlysiaClient_fnc_getVehVirtual};
	case (_wm_target isEqualTo g_company):
	{
		_amount = getNumber(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> ((g_company getVariable 'company_info') select 2) >> 'storage' >> 'inventory');
		_members = count((g_company getVariable "company_members") select 0) - 1;
		_amount + (_members * 15);
	};
	case (isClass(missionConfigFile >> "ALYSIA_LABORATORIES" >> typeOf(_wm_target))): {280};
	default {0};
};
