/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_data", "_vehicleClassname", "_vehicleAssurance", "_assurancePrice"];
_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call public_fnc_error;
};

_data = g_garage_vehicles select _index;
_vehicleClassname = _data select 0;

if ((getNumber(missionConfigFile >> "ALYSIA_VEHICLES" >> _vehicleClassname >> "insurance")) isEqualTo 0) exitWith {
	["Vous ne pouvez pas assurer ce type de véhicule"] call public_fnc_error;
};

_vehicleAssurance = _data select 2;
if (_vehicleAssurance isEqualTo 1) exitWith {
	["Ce véhicule est déjà assuré"] call public_fnc_error;
};

_assurancePrice = [_vehicleClassname] call public_fnc_getVehAssurancePrice;
if (_assurancePrice isEqualTo 0) exitWith {
	["Ce véhicule n'a pas de prix d'assurance"] call public_fnc_error;
};

if (_assurancePrice > g_atm) exitWith {
	[format["Il vous faut <t color='#ff8c8c'>%1$</t> pour assurer ce véhicule", [_assurancePrice] call public_fnc_numberText]] call public_fnc_error;
};

g_atm = g_atm - _assurancePrice;
[format["Vous avez assuré votre véhicule<br/><t color='#8cff9b' align='center'>%1$</t>", [_assurancePrice] call public_fnc_numberText], "buy"] call public_fnc_info;
(g_garage_vehicles select _index) set [2, 1];
closeDialog 0;
[(_data select 1), 1] remoteExec ["TON_fnc_vehicle_update_insurrance", 2];
[g_garage_vehicles] call public_fnc_garageOpen;