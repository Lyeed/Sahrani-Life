/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_data", "_vehicleInfo", "_assurancePrice"];

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call AlysiaClient_fnc_error;
};

_data = g_garage_vehicles select _index;
if ((_data select 2) isEqualTo 1) exitWith {
	["Ce véhicule est déjà assuré"] call AlysiaClient_fnc_error;
};

_vehicleInfo = [_data select 0] call AlysiaClient_fnc_fetchVehInfo;
if ((_vehicleInfo select 12) isEqualTo 0) exitWith {
	["Vous ne pouvez pas assurer ce type de véhicule"] call AlysiaClient_fnc_error;
};
_assurancePrice = _vehicleInfo select 18;
if (_assurancePrice isEqualTo 0) exitWith {
	["Ce véhicule n'a pas de prix d'assurance"] call AlysiaClient_fnc_error;
};
if (_assurancePrice > g_atm) exitWith {
	[format["Il vous faut <t color='#ff8c8c'>%1kn</t> pour assurer ce véhicule", [_assurancePrice] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
};

[false, _assurancePrice, format["Assurance véhicule (%1)", (_data select 5)]] call AlysiaClient_fnc_handleATM;
[format["Vous avez assuré votre véhicule<br/><t color='#8cff9b' align='center'>%1kn</t>", [_assurancePrice] call AlysiaClient_fnc_numberText], "buy"] call AlysiaClient_fnc_info;
(g_garage_vehicles select _index) set [2, 1];
closeDialog 0;
[(_data select 1), 1] remoteExec ["AlysiaServer_fnc_vehicle_update_insurrance", 2];
[g_garage_vehicles] call AlysiaClient_fnc_garageOpen;
