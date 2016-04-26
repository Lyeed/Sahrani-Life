/*
        ArmA 3 N'Ziwasogo Life RPG - ALYSIA
    Code written by Lyeed
    @Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
    YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
    More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_gear", "_handle", "_uniformGear", "_vestGear", "_backpackGear", "_goggles", "_headgear", "_primaryWeaponGear", "_secondaryWeaponGear", "_handgunWeaponGear", "_oldVersion"];
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

    _primaryWeaponGear = [_gear, 6, ["", [], [], 0], [[]]] call BIS_fnc_param;
    if ((_primaryWeaponGear select 0) != "") then
    {
        player addWeapon (_primaryWeaponGear select 0);

        {
            if (_x != "") then {player addPrimaryWeaponItem _x};
        } forEach ((_primaryWeaponGear select 1) + (_primaryWeaponGear select 2));

        player setAmmo [(_primaryWeaponGear select 0), (_primaryWeaponGear select 3)];
    };

    _secondaryWeaponGear = [_gear, 7, [], [["", [], []]]] call BIS_fnc_param;
    if ((_secondaryWeaponGear select 0) != "") then
    {
        player addWeapon (_secondaryWeaponGear select 0);

        {
            if (_x != "") then {player addSecondaryWeaponItem _x};
        } forEach ((_secondaryWeaponGear select 1) + (_secondaryWeaponGear select 2));
    };

    _handgunWeaponGear = [_gear, 8, [], [["", [], [], 0]]] call BIS_fnc_param;
    if ((_handgunWeaponGear select 0) != "") then
    {
        player addWeapon (_handgunWeaponGear select 0);
        
        {
            if (_x != "") then {player addHandgunItem _x};
        } forEach ((_handgunWeaponGear select 1) + (_handgunWeaponGear select 2));
        
        player setAmmo [(_handgunWeaponGear select 0), (_handgunWeaponGear select 3)];
    };

    _uniformGear = [_gear, 0, [], [["", []]]] call BIS_fnc_param;
    if ((_uniformGear select 0) != "") then
    {
        player forceAddUniform (_uniformGear select 0);
    };

    _vestGear = [_gear, 1, [], [["", []]]] call BIS_fnc_param;
    if ((_vestGear select 0) != "") then
    {
        player addVest (_vestGear select 0);
    };

    _backpackGear = [_gear, 2, [], [["", []]]] call BIS_fnc_param;
    if ((_backpackGear select 0) != "") then
    {
        player addBackpack (_backpackGear select 0);
        clearAllItemsFromBackpack player;
    };

    _goggles = [_gear, 3, "", [""]] call BIS_fnc_param;
    if (_goggles != "") then {player addGoggles _goggles};

    _headgear = [_gear, 4, "", [""]] call BIS_fnc_param;
    if (_headgear != "") then {player addHeadgear _headgear};

    {
        switch (true) do
        {
            case (player canAddItemToBackpack _x):
            {
                player addItemToBackpack _x;
                player assignItem _x;
            };
            case (player canAddItemToUniform _x):
            {
                player addItemToUniform _x;
                player assignItem _x;
            };
            case (player canAddItemToVest _x):
            {
                player addItemToVest _x;
                player assignItem _x;
            };
        };
    } forEach ([_gear, 5, [], [[]]] call BIS_fnc_param);

    _magazines = _gear select 9;
    if (isNil "_magazines") then {
        _oldVersion = true;
    } else {
        _oldVersion = false;
    };

    {
        if (!isClass(configFile >> "CfgMagazines" >> _x) || _oldVersion) then
        {
            player addItemToUniform _x;
        };
    } forEach (_uniformGear select 1);

    {
        if (!isClass(configFile >> "CfgMagazines" >> _x) || _oldVersion) then
        {
            player addItemToVest _x;
        };        
    } forEach (_vestGear select 1);
        
    {
        if (!isClass(configFile >> "CfgMagazines" >> _x) || _oldVersion) then
        {
            player addItemToBackpack _x;
        };
    } forEach (_backpackGear select 1);

    if (!_oldVersion) then
    {
        {
            if ((_x select 4) != "") then
            {
                player addMagazine [(_x select 0), (_x select 1)];
            };
        } forEach _magazines;
    };
};
