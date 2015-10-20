/*
	Author : Bryan "Tonic" Boardwine
	Edit : Lyeed
*/
private["_vault", "_handle"];
_vault = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _vault) exitWith { [(localize "STR_ISTR_Blast_VaultOnly")] call ALYSIA_fnc_error; };
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith { [(localize "STR_ISTR_Blast_VaultOnly")] call ALYSIA_fnc_error; };
if (_vault getVariable["chargeplaced", false]) exitWith { [(localize "STR_ISTR_Blast_AlreadyPlaced")] call ALYSIA_fnc_error; };
if (_vault getVariable["safe_open",false]) exitWith { [(localize "STR_ISTR_Blast_AlreadyOpen")] call ALYSIA_fnc_error; };
if (!([false, "blastingcharge", 1] call life_fnc_handleInv)) exitWith { ["Vous n'avez pas de saccoche explosive"] call ALYSIA_fnc_error; };

_vault setVariable["chargeplaced", true, true];
[[(localize "STR_ISTR_Blast_Placed")],"ALYSIA_fnc_info", west] spawn life_fnc_MP;
[(localize "STR_ISTR_Blast_KeepOff")] call ALYSIA_fnc_info;

if (!(["Mise en place de la bombe", 25, true, "", false, _vault] call ALYSIA_fnc_showProgress)) exitWith {};

_handle = [] spawn life_fnc_demoChargeTimer;
[[], "life_fnc_demoChargeTimer", west] spawn life_fnc_MP;
waitUntil {scriptDone _handle};
sleep 0.9;
if (!(fed_bank getVariable["chargeplaced", false])) exitWith { [(localize "STR_ISTR_Blast_Disarmed")] call ALYSIA_fnc_info; };

"Bo_GBU12_LGB_MI10" createVehicle [(getPosATL fed_bank select 0), (getPosATL fed_bank select 1), (getPosATL fed_bank select 2) + 0.5];
fed_bank setVariable["chargeplaced", false, true];
fed_bank setVariable["safe_open", true, true];
[(localize "STR_ISTR_Blast_Opened")] call ALYSIA_fnc_info;