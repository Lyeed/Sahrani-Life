/*	
	Author : Bryan "Tonic" Boardwine
	Edit : Lyeed
*/
private["_obj"];
_obj = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};
if ((player getVariable["surrender", false]) || (player getVariable["restrained", false]) || life_coma || dialog || (playerSide != civilian)) exitWith {};

if ((_obj getVariable["safe",-1]) < 1) exitWith { [(localize "STR_Civ_VaultEmpty")] call ALYSIA_fnc_error; };
if (_obj getVariable["inUse", false]) exitWith { ["Quelqu'un est déjà en train d'interagir avec le coffre"] call ALYSIA_fnc_error; };
if ({side _x == west} count playableUnits < 5) exitWith { ["Il n'y a pas assez de militaire pour braquer la banque"] call ALYSIA_fnc_error; };

life_safeObj = _obj;
if(!createDialog "Federal_Safe") exitWith { [(localize "STR_MISC_DialogError")] call ALYSIA_fnc_error; };
disableSerialization;
ctrlSetText[3501,(localize "STR_Civ_SafeInv")];
[life_safeObj] call life_fnc_safeInventory;
life_safeObj setVariable["inUse",true,true];
[life_safeObj] spawn
{
	waitUntil {isNull (findDisplay 3500)};
	(_this select 0) setVariable["inUse",false,true];
};
