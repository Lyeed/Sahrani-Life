/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicleInfo", "_vid", "_vehicleClassname", "_sellPrice", "_action", "_vehicleName"];

if (!dialog) exitWith {};
if (lbCurSel 2802 isEqualTo -1) exitWith {["Vous n'avez pas sélectionné de véhicule"] call ALYSIA_fnc_error;};

disableSerialization;
_vehicleInfo = (call compile format["%1", lbData[2802, (lbCurSel 2802)]]);
if (isNil "_vehicleInfo") exitWith {
	["Impossible de trouver les informations concernant votre véhicule"] call ALYSIA_fnc_error;
};
if (life_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call ALYSIA_fnc_error;
};

life_action_inUse = true;
_vid = lbValue[2802, (lbCurSel 2802)];
_vehicleClassname = _vehicleInfo select 0;
closeDialog 0;

_sellPrice = [_vehicleClassname] call ALYSIA_fnc_getVehSellPrice;
if (_sellPrice != -1) then {
	_vehicleName = getText(configFile >> "CfgVehicles" >> _vehicleClassname >> "displayName");
	_action = [
		format["Vous êtes sur le point de <t color='#DF0101'>vendre</t> votre <t color='#FF8000'>%2</t> pour <t color='#8cff9b'>%1kn</t>", [_sellPrice] call life_fnc_numberText, _vehicleName], 
		"Vente",
		"Valider",
		"Annuler"
	] call BIS_fnc_guiMessage;
	if (_action) then {
		life_atmcash = life_atmcash + _sellPrice;
		playSound "buy";
		[format[
			"Vous avez vendu votre<br/><t color='#FF8000'>%2</t><br/><br/><t align='left'>Prix de vente</t><t align='right' color='#8cff9b'>%1kn</t>", 
			[_sellPrice] call life_fnc_numberText, 
			_vehicleName]
		] call ALYSIA_fnc_info;
		[[_vid], "ALYSIA_fnc_vehicleDestroy", false] spawn life_fnc_MP;
	};
} else {
	["Ce véhicule n'a pas de prix de vente"] call ALYSIA_fnc_error; 	
};

life_action_inUse = false;