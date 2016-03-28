/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {0};

switch (true) do
{
	case (typeOf(_vehicle) isEqualTo "Land_Suitcase_F"):{95};
	case (typeOf(_vehicle) in ["Bank_Sahrani_N", "Bank_Sahrani_S"]): {5000};
	case (isClass(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(_vehicle))): {getNumber(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(_vehicle) >> "inventory")};
	case ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Tank") || (_vehicle isKindOf "Truck")): {[typeOf(_vehicle)] call AlysiaClient_fnc_getVehVirtual};
	case (_vehicle isEqualTo g_company):
	{
		_amount = getNumber(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> ((g_company getVariable 'company_info') select 2) >> 'storage' >> 'inventory');
		_members = count((g_company getVariable "company_members") select 0) - 1;
		_amount + (_members * 15);
	};
	default {0};
};
