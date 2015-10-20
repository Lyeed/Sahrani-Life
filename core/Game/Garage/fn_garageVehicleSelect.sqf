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
    ctrlShow[2801, false];
    ctrlShow[2803, false];
    ctrlShow[2804, false];
    ctrlShow[2806, false];
    ctrlShow[2807, false];
    ctrlShow[2810, false];
    ctrlShow[2811, false];
    ctrlShow[2812, false];
    ctrlShow[2813, false];
    ctrlShow[2814, false];
    ctrlShow[2815, false];
    ctrlShow[2816, false];
    ctrlShow[2817, false];
    ctrlShow[2818, false];
    ctrlShow[2819, false];
    ctrlShow[2820, false];
    ctrlShow[2821, false];
    ctrlShow[2822, false];
    ctrlShow[2823, false];
    ctrlShow[2824, false];
    ctrlShow[2825, false];
    ctrlShow[2809, false];
    ctrlShow[2827, false];
    ctrlShow[2828, false];
    ctrlShow[2829, false];
    ctrlShow[2830, false];
    ctrlShow[2831, false];
};

ctrlShow[2801, true];
ctrlShow[2803, true];
ctrlShow[2804, true];
ctrlShow[2806, true];
ctrlShow[2807, true];
ctrlShow[2810, true];
ctrlShow[2811, true];
ctrlShow[2812, true];
ctrlShow[2814, true];
ctrlShow[2815, true];
ctrlShow[2816, true];
ctrlShow[2818, true];
ctrlShow[2819, true];
ctrlShow[2820, true];
ctrlShow[2821, true];
ctrlShow[2822, true];
ctrlShow[2823, true];
ctrlShow[2824, true];
ctrlShow[2825, true];
ctrlShow[2809, true];
ctrlShow[2827, true];
ctrlShow[2828, true];
ctrlShow[2829, true];
ctrlShow[2830, true];
ctrlShow[2831, true];

_data = g_garage_vehicles select _arrayIndex;
_className = _data select 1;
_fuel = _data select 4;

(_display displayCtrl 2806) ctrlSetStructuredText parseText format
[
    "<t align='left'><img image='%2'/></t><t align='center'>%1</t><t align='right'><img image='%2'/></t>",
    (_data select 6),
    getText(configFile >> "CfgVehicles" >> _className >> "picture")
];

_trunkList = _display displayCtrl 2804;
lbClear _trunkList;
{
    _index = _trunkList lbAdd format["%1x %2", [(_x select 1)] call public_fnc_numberText, [(_x select 0)] call public_fnc_itemGetName];
    _trunkList lbSetPicture [_index, ([(_x select 0)] call public_fnc_itemGetImage)];
} forEach (_data select 5);
if ((lbSize _trunkList) isEqualTo 0) then {
	_trunkList lbAdd "Coffre vide";
};
_trunkList lbSetCurSel -1;

_vehicleInfo = [_className] call public_fnc_fetchVehInfo;
(_display displayCtrl 2825) ctrlSetStructuredText parseText format
[
		"<t align='left'>Immatriculation</t><t align='right'>%1</t><br/>"
    +	"<t align='left'>Assuré</t><t align='right'>%2</t><br/>"
    +	"<t align='left'>Prix de l'assurance</t><t align='right'><t color='#8cff9b'>%3</t>$</t><br/>"
    +	"<t align='left'>Prix de sortie</t><t align='right'><t color='#8cff9b'>%4</t>$</t><br/>"
    +	"<t align='left'>Prix de vente</t><t align='right'><t color='#8cff9b'>%5</t>$</t><br/>"
    +	"<t align='left'>Vitesse max</t><t align='right'>%6 km/h</t><br/>"
    +	"<t align='left'>Puissance</t><t align='right'>%7 ch</t><br/>"
    +	"<t align='left'>Sièges passagers</t><t align='right'>%8</t><br/>"
    +	"<t align='left'>Capacité du coffre</t><t align='right'>%9</t><br/>"
    +	"<t align='left'>Autonomie</t><t align='right'>%10 litres (%11%12 plein)</t><br/>",
    (_data select 2),
    if ((_data select 3) isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
    ([[[_className] call public_fnc_getVehAssurancePrice] call public_fnc_getDonatorReductionPrice] call public_fnc_numberText),
    ([[[_className] call public_fnc_getVehGaragePrice] call public_fnc_getDonatorReductionPrice] call public_fnc_numberText),
  	([[[_className] call public_fnc_getVehSellPrice] call public_fnc_getDonatorAugmentationPrice] call public_fnc_numberText),
  	(_vehicleInfo select 8),
  	(_vehicleInfo select 11),
  	(_vehicleInfo select 10),
  	([_className] call public_fnc_getVehVirtual),
  	(_vehicleInfo select 12),
  	if (_fuel < 50) then {format["<t color='#ff8c8c'>%1</t>", _fuel]} else {_fuel},
    "%"
];

if ((_data select 3) isEqualTo 1) then
{
    (_display displayCtrl 2812) ctrlSetText "\lyeed_IMG\data\garage\garage_noinsurance.paa";
    ctrlShow[2813, false];
} else {
    (_display displayCtrl 2812) ctrlSetText "\lyeed_IMG\data\garage\garage_insurance.paa";
    ctrlShow[2813, true];
};

if (_fuel < 100) then
{
    ctrlSetText[2816, "\lyeed_IMG\data\garage\garage_refuel.paa"];
    ctrlShow[2817, true];
} else {
    ctrlSetText[2816, "\lyeed_IMG\data\garage\garage_norefuel.paa"];
    ctrlShow[2817, false];
};

_storePos = [_data select 7, _data select 8, _data select 9];
_fourrierePos = [0,0,0]; // DEV // _fourrierePos = getMarkerPos "fourriere";
if (_storePos isEqualTo [0, 0, 0]) then
{
    (_display displayCtrl 2828) ctrlSetStructuredText parseText "<t align='center'><t size='3'>0</t><br/>mètre</t>";
    ctrlSetText[2814, "\lyeed_IMG\data\garage\garage_nolocalize.paa"];
    ctrlShow[2815, false];
    ctrlSetText[2818, "\lyeed_IMG\data\garage\garage_noimport.paa"];
    ctrlShow[2819, false];
    if ((player distance _fourrierePos) > 10) then
    {
        ctrlSetText[2810, "\lyeed_IMG\data\garage\garage_get.paa"];
        ctrlShow[2811, true];
    } else {
        ctrlSetText[2810, "\lyeed_IMG\data\garage\garage_noget.paa"];
        ctrlShow[2811, false];
    };
} else {
    _distance = player distance _storePos;
    (_display displayCtrl 2828) ctrlSetStructuredText parseText format["<t align='center'><t size='3'>%1</t><br/>mètre%2</t>", round(_distance), if (_distance > 1) then {"s"} else {""}];
	if (_distance > 40) then
	{
        ctrlSetText[2810, "\lyeed_IMG\data\garage\garage_noget.paa"];
        ctrlShow[2811, false];
      	if ((_storePos distance _fourrierePos) > 10) then
      	{
            ctrlSetText[2814, "\lyeed_IMG\data\garage\garage_localize.paa"];
            ctrlShow[2815, true];
            ctrlSetText[2818, "\lyeed_IMG\data\garage\garage_import.paa"];
            ctrlShow[2819, true];
        } else {
            ctrlSetText[2814, "\lyeed_IMG\data\garage\garage_nolocalize.paa"];
            ctrlShow[2815, false];
            ctrlSetText[2818, "\lyeed_IMG\data\garage\garage_noimport.paa"];
            ctrlShow[2819, false];
        };
  	} else {
        ctrlSetText[2810, "\lyeed_IMG\data\garage\garage_get.paa"];
        ctrlShow[2811, true];
        ctrlSetText[2814, "\lyeed_IMG\data\garage\garage_nolocalize.paa"];
        ctrlShow[2815, false];
        ctrlSetText[2818, "\lyeed_IMG\data\garage\garage_noimport.paa"];
        ctrlShow[2819, false];
  	};
};

if ((player distance _fourrierePos) < 10) then
{
    ctrlSetText[2814, "\lyeed_IMG\data\garage\garage_nolocalize.paa"];
    ctrlShow[2815, false];
    ctrlSetText[2818, "\lyeed_IMG\data\garage\garage_noimport.paa"];
    ctrlShow[2819, false];
};