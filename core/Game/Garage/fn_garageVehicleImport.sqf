/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_importPrice", "_vehicleInfo", "_action", "_vehicleName", "_tmpPos", "_curSel", "_vehicleID"];
_curSel = lbCurSel 2802;

if (_curSel == -1) exitWith { ["Vous n'avez pas sélectionné de véhicule"] call ALYSIA_fnc_error; };

_tmpPos = getPos player; // NEED REVISE
_vehicleInfo = lbData[2802, _curSel];
_vehicleInfo = (call compile format["%1", _vehicleInfo]);
if (isNil "_vehicleInfo") exitWith { ["Erreur de sélection"] call ALYSIA_fnc_error; };

_importPrice = [(([(_vehicleInfo select 0)] call ALYSIA_fnc_getVehBuyPrice) * (getNumber(missionConfigFile >> "ALYSIA_VEHICLES_INFO" >> "transfert_percentage")))] call ALYSIA_fnc_getDonatorReductionPrice;
if (_importPrice > life_atmcash) exitWith { 
	[format["Il vous faut <t color='#ff8c8c'>%1$</t> pour rapatrier ce véhicule", [_importPrice] call life_fnc_numberText]] call ALYSIA_fnc_error; 
};

_vehicleName = lbText[2802, _curSel];
_vehicleID = lbValue[2802, _curSel];
closeDialog 0;
_action = 
[
	format["Voulez-rapatrier votre <t color='#FF8000'>%1</t> pour <t color='#8cff9b'>%2$</t>", _vehicleName, [_importPrice] call life_fnc_numberText],
	"Rapatriement",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then
{
	life_atmcash = life_atmcash - _importPrice;
	playSound "buy";
	[format["Livraison de %1 en cours...", _vehicleName], 10] call ALYSIA_fnc_showProgress;
	[format["Vous avez rapatrié <t color='#FF8000'>%1</t> pour <t color='#8cff9b'>%2$</t>", _vehicleName, [_importPrice] call life_fnc_numberText]] call ALYSIA_fnc_info;
	[[_vehicleID, _tmpPos], "ALYSIA_fnc_vehicleServerImport", false] spawn life_fnc_MP;
};
