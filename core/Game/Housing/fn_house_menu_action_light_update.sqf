/*
	Author: Bryan "Tonic" Boardwine
*/
private["_house", "_mode", "_lightSource"];
_house = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_mode = [_this, 1, false, [false]] call BIS_fnc_param;

if (isNull _house) exitWith {};
if (_mode) then 
{
	_lightSource = "#lightpoint" createVehicleLocal [0,0,0];
	_lightSource setLightColor [250,150,50];
	_lightSource setLightAmbient [1,1,0.2];
	_lightSource setLightAttenuation [1,0,0,0];
	_lightSource setLightIntensity 10;
	_lightSource setLightUseFlare true;
	_lightSource setLightFlareSize 0.2;
	_lightSource setLightFlareMaxDistance 50;
	_house setVariable["lightSource", _lightSource];
} else {
	_lightSource = _house getVariable["lightSource", objNull];
	if (!(isNull _lightSource)) then {
		deleteVehicle _lightSource;
	};
};