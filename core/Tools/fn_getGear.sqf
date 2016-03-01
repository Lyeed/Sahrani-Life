/*
        ArmA 3 N'Ziwasogo Life RPG - ALYSIA
    Code written by Lyeed
    @Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
    YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
    More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _target) || !(alive _target)) then {
    [];
} else {
    [
        [(uniform player), (uniformItems player)],
        [(vest player), (vestItems player)],
        [(backpack player), (backpackItems player)],
        (goggles player),
        (headgear player),
        (assignedItems player),
        [(primaryWeapon player), (primaryWeaponMagazine player), (primaryWeaponItems player), (player ammo (primaryWeapon player))],
        [(secondaryWeapon player), (secondaryWeaponMagazine player), (secondaryWeaponItems player)],
        [(handgunWeapon player), (handgunMagazine player), (handGunItems player), (player ammo (handgunWeapon player))]
    ];
};

/*
 
[
    [
        "uniform_className", 
        [
            "uniform_item_1_className", 
            "uniform_item_2_className", 
            "..._className"
        ]
    ],
    [
        "vest_className", 
        [
            "vest_item_1_className", 
            "vest_item_2_className", 
            "..._className"
        ]
    ],
    [
        "backpack_className", 
        [
            "backpack_item_1_className", 
            "backpack_item_2_className", 
            "..._className"
        ]
    ],
    "goggles_className",
    "headgear_className",
    [
        "assignedItems_1_className", 
        "assignedItems_2_className", 
        "..._className"
    ],
    [
        "primaryWeapon_className", 
        [
            "primaryWeapon_magazine_1_className", 
            "primaryWeapon_magazine_2_className",
            "..._className"
        ],
        [
            "primaryWeapon_item_1_className", 
            "primaryWeapon_item_2_className",
            "..._className"
        ],
        primaryWeapon_loadedmagazine_count
    ],
    [
        "secondaryWeapon_className", 
        [
            "secondayWeapon_magazine_1_className",
            "secondayWeapon_magazine_2_className",
            "..._className"
        ],
        [
            "secondayWeapon_item_1_className", 
            "secondayWeapon_item_2_className",
            "..._className"
        ]
    ],
    [
        "handgunWeapon_className", 
        [
            "handgunWeapon_magazine_1_className", 
            "handgunWeapon_magazine_2_className",
            "..._className"
        ],
        [
            "handgunWeapon_item_1_className",
            "handgunWeapon_item_2_className",
            "..._className"
        ], 
        handgunWeapon_loadedmagazine_count
    ]
];
*/
