/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_trunkList", "_vList", "_curSel", "_className", "_data", "_vehicleInfo", "_fuel", "_storePos", "_display", "_fourrierePos", "_arrayIndex"];
disableSerialization;

_vList = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_curSel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_curSel isEqualTo -1) exitWith {};

_display = findDisplay 2800;
if (isNull _display) exitWith {};

_arrayIndex = _vList lbValue _curSel;
if (_arrayIndex isEqualTo -1) exitWith
{
    {
        ctrlShow[_x, false];
    } forEach ([2801,2803,2804,2806,2807,2810,2811,2812,2813,2814,2815,2816,2817,2818,2819,2820,2821,2822,2823,2824,2825,2809,2827,2828,2829,2830,2831]);
};

{
    ctrlShow[_x, true];
} forEach ([2801,2803,2804,2806,2807,2810,2811,2812,2814,2815,2816,2818,2819,2820,2821,2822,2823,2824,2825,2809,2827,2828,2829,2830,2831]);

_data = g_garage_vehicles select _arrayIndex;
_className = _data select 0;
_fuel = _data select 3;

(_display displayCtrl 2806) ctrlSetStructuredText parseText format
[
    "<t align='left'><img image='%2'/></t><t align='center'>%1</t><t align='right'><img image='%2'/></t>",
    (_data select 5),
    getText(configFile >> "CfgVehicles" >> _className >> "picture")
];

_trunkList = _display displayCtrl 2804;
lbClear _trunkList;
{
    _index = _trunkList lbAdd format["%1x %2", [(_x select 1)] call AlysiaClient_fnc_numberText, [(_x select 0)] call AlysiaClient_fnc_itemGetName];
    _trunkList lbSetPicture [_index, ([(_x select 0)] call AlysiaClient_fnc_itemGetImage)];
} forEach (_data select 4);
if ((lbSize _trunkList) isEqualTo 0) then {
	_trunkList lbAdd "Coffre vide";
};
_trunkList lbSetCurSel -1;

_vehicleInfo = [_className] call AlysiaClient_fnc_fetchVehInfo;

(_display displayCtrl 2825) ctrlSetStructuredText parseText format
[
		"<t align='left'>Immatriculation</t><t align='right'>%1</t><br/>"
    +	"<t align='left'>Assuré</t><t align='right'>%2</t><br/>"
    +	"<t align='left'>Prix de l'assurance</t><t align='right'><t color='#8cff9b'>%3</t>kn</t><br/>"
    +	"<t align='left'>Prix de sortie</t><t align='right'><t color='#8cff9b'>%4</t>kn</t><br/>"
    +	"<t align='left'>Prix de vente</t><t align='right'><t color='#8cff9b'>%5</t>kn</t><br/>"
    +	"<t align='left'>Vitesse max</t><t align='right'>%6 km/h</t><br/>"
    +	"<t align='left'>Puissance</t><t align='right'>%7 ch</t><br/>"
    +	"<t align='left'>Sièges passagers</t><t align='right'>%8</t><br/>"
    +	"<t align='left'>Capacité du coffre</t><t align='right'>%9</t><br/>"
    +	"<t align='left'>Réservoir</t><t align='right'>%10/%11L - %12</t><br/>",
    (_data select 1),
    if ((_data select 2) isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
    ([[_className] call AlysiaClient_fnc_getVehAssurancePrice] call AlysiaClient_fnc_numberText),
    ([[_className] call AlysiaClient_fnc_getVehGaragePrice] call AlysiaClient_fnc_numberText),
  	([[_className] call AlysiaClient_fnc_getVehSellPrice] call AlysiaClient_fnc_numberText),
  	(_vehicleInfo select 8),
  	(_vehicleInfo select 11),
  	(_vehicleInfo select 10),
  	([_className] call AlysiaClient_fnc_getVehVirtual),
    (round (_fuel * ((_vehicleInfo select 12)) / 100)),
  	(round (_vehicleInfo select 12)),
    (if ((getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _className >> "fuel") >> "name")) in ["Essence Sans Plomb 95","Essence Sans Plomb 98"]) then
    {"Essence"} else {getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _className >> "fuel") >> "name")})
];

if ((_data select 2) isEqualTo 1) then
{
    (_display displayCtrl 2812) ctrlSetText "lyeed_IMG\data\garage\action_insurrance_disable.paa";
    ctrlShow[2813, false];
} else {
    (_display displayCtrl 2812) ctrlSetText "lyeed_IMG\data\garage\action_insurrance.paa";
    ctrlShow[2813, true];
};

if (_fuel < 100) then
{
    ctrlSetText[2816, "lyeed_IMG\data\garage\action_fuel.paa"];
    ctrlShow[2817, true];
} else {
    ctrlSetText[2816, "lyeed_IMG\data\garage\action_fuel_disable.paa"];
    ctrlShow[2817, false];
};

_storePos = [_data select 6, _data select 7, _data select 8];
if (_storePos isEqualTo [0, 0, 0]) then
{
    (_display displayCtrl 2828) ctrlSetStructuredText parseText "<t align='center'><t size='3'>0</t><br/>mètre</t>";

    ctrlSetText[2814, "lyeed_IMG\data\garage\action_localize_disable.paa"];
    ctrlShow[2815, false];
    ctrlSetText[2818, "lyeed_IMG\data\garage\action_import_disable.paa"];
    ctrlShow[2819, false];
    
    if (([getPos player] call AlysiaClient_fnc_posNearFourriere) isEqualTo "") then
    {
        ctrlSetText[2810, "lyeed_IMG\data\garage\action_get.paa"];
        ctrlShow[2811, true];
    } else {
        ctrlSetText[2810, "lyeed_IMG\data\garage\action_get_disable.paa"];
        ctrlShow[2811, false];
    };
} else {
    _distance = player distance _storePos;
    (_display displayCtrl 2828) ctrlSetStructuredText parseText format["<t align='center'><t size='3'>%1</t><br/>mètre%2</t>", round(_distance), if (_distance > 1) then {"s"} else {""}];
	if (_distance > 40) then
	{
        ctrlSetText[2810, "lyeed_IMG\data\garage\action_get_disable.paa"];
        ctrlShow[2811, false];

        if (([_storePos] call AlysiaClient_fnc_posNearFourriere) isEqualTo "") then
      	{
            ctrlSetText[2814, "lyeed_IMG\data\garage\action_localize.paa"];
            ctrlShow[2815, true];

            ctrlSetText[2818, "lyeed_IMG\data\garage\action_import.paa"];
            ctrlShow[2819, true];
        } else {
            ctrlSetText[2814, "lyeed_IMG\data\garage\action_localize_disable.paa"];
            ctrlShow[2815, false];

            ctrlSetText[2818, "lyeed_IMG\data\garage\action_import_disable.paa"];
            ctrlShow[2819, false];
        };
  	} else {
        ctrlSetText[2810, "lyeed_IMG\data\garage\action_get.paa"];
        ctrlShow[2811, true];

        ctrlSetText[2814, "lyeed_IMG\data\garage\action_localize_disable.paa"];
        ctrlShow[2815, false];

        ctrlSetText[2818, "lyeed_IMG\data\garage\action_import_disable.paa"];
        ctrlShow[2819, false];
  	};
};

if (([getPos player] call AlysiaClient_fnc_posNearFourriere) != "") then
{
    ctrlSetText[2814, "lyeed_IMG\data\garage\action_localize_disable.paa"];
    ctrlShow[2815, false];

    ctrlSetText[2818, "lyeed_IMG\data\garage\action_import_disable.paa"];
    ctrlShow[2819, false];
};