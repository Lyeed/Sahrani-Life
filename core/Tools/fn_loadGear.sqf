/*
        ArmA 3 N'Ziwasogo Life RPG - ALYSIA
    Code written by Lyeed
    @Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
    YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
    More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_gear", "_handle", "_uniformGear", "_vestGear", "_backpackGear", "_goggles", "_headgear", "_assignedItems", "_primaryWeaponGear", "_secondaryWeaponGear", "_handgunWeaponGear", "_assignedItems"];
_gear = [_this, 0, [], [[]]] call BIS_fnc_param;

_handle = [] spawn AlysiaClient_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if (_gear isEqualTo []) then
{
    [] call AlysiaClient_fnc_init_loadout;
    player addItem "ItemGPS";
    player assignItem "ItemGPS";
    player addMagazine getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "CIV" >> "identity_item");
    [true, 2000] call AlysiaClient_fnc_handleCash;
} else {
    _uniformGear = [_gear, 0, [], [["", []]]] call BIS_fnc_param;
    if ((_uniformGear select 0) != "") then
    {
        player addUniform (_uniformGear select 0);
        {
            player addItemToUniform _x;
        } forEach (_uniformGear select 1);
    };

    _vestGear = [_gear, 1, [], [["", []]]] call BIS_fnc_param;
    if ((_vestGear select 0) != "") then
    {
        player addVest (_vestGear select 0);
        {
            player addItemToVest _x;
        } forEach (_vestGear select 1);
    };

    _backpackGear = [_gear, 2, [], [["", []]]] call BIS_fnc_param;
    if ((_backpackGear select 0) != "") then
    {
        player addBackpack (_backpackGear select 0);
        clearAllItemsFromBackpack player;
        {
            player addItemToBackpack _x;
        } forEach (_backpackGear select 1);
    };

    _goggles = [_gear, 3, "", [""]] call BIS_fnc_param;
    if (_goggles != "") then{
        player addGoggles _goggles;
    };

    _headgear = [_gear, 4, "", [""]] call BIS_fnc_param;
    if (_headgear != "") then {
        player addHeadgear _headgear;
    };

    _assignedItems = [_gear, 5, [], [[]]] call BIS_fnc_param;
    if (!(_assignedItems isEqualTo [])) then {
        {
            if (player canAddItemToBackpack _x) then {
                player addItemToBackpack _x;
                player assignItem _x;
            } else {
                if (player canAddItemToUniform _x) then {
                    player addItemToUniform _x;
                    player assignItem _x;
                } else {
                    if (player canAddItemToVest _x) then {
                        player addItemToVest _x;
                        player assignItem _x;
                    } else {
                        diag_log format["[ALYSIA:ERROR] Could not add assigned item [%1] to inventory : not enough place", _x];
                    };
                };
            };
        } forEach (_assignedItems);
    };

    _primaryWeaponGear = [_gear, 6, [], [["", [], [], 0]]] call BIS_fnc_param;
    if ((_primaryWeaponGear select 0) != "") then {
        player addWeapon (_primaryWeaponGear select 0);
        {
            player addPrimaryWeaponItem _x;
        } forEach ((_primaryWeaponGear select 1) + (_primaryWeaponGear select 2));
        player setAmmo [(_primaryWeaponGear select 0), (_primaryWeaponGear select 3)];
    };

    _secondaryWeaponGear = [_gear, 7, [], [["", [], []]]] call BIS_fnc_param;
    if ((_secondaryWeaponGear select 0) != "") then {
        player addWeapon (_secondaryWeaponGear select 0);
        {
            player addSecondaryWeaponItem _x;
        } forEach ((_secondaryWeaponGear select 1) + (_secondaryWeaponGear select 2));
    };

    _handgunWeaponGear = [_gear, 8, [], [["", [], [], 0]]] call BIS_fnc_param;
    if ((_handgunWeaponGear select 0) != "") then {
        player addWeapon (_handgunWeaponGear select 0);
        {
            player addHandgunItem _x;
        } forEach ((_handgunWeaponGear select 1) + (_handgunWeaponGear select 2));
        player setAmmo [(_handgunWeaponGear select 0), (_handgunWeaponGear select 3)];
    };
};
