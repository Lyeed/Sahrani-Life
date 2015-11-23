/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_station", ObjNull, [ObjNull]]
]) exitWith {};

_vehicle = ["OWNER"] call public_fnc_nearestVehicle;

if (isNull _vehicle) exitWith {["Aucun de vos véhicules proche de vous."] call public_fnc_error};

if (isEngineOn _vehicle) exitWith {["Veuillez couper le moteur de votre véhicule avant de faire le plein."] call public_fnc_error};

