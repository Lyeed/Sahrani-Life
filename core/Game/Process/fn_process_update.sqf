/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list_require", "_maxAmount", "_can", "_receive_weight", "_require_weight", "_newWeight", "_list_receive", "_receive"];

disableSerialization;
_display = findDisplay 53000;
if (isNull _display) exitWith {};

_maxAmount = round(parseNumber(ctrlText 53006));
if (_maxAmount < 1) then
{
	_maxAmount = 1;
	ctrlSetText[53006, "1"];
} else {
	if (_maxAmount > 150) then
	{
		_maxAmount = 150;
		ctrlSetText[53006, "150"];
	};
};

_can = true;

_list_require = _display displayCtrl 53005;
lbClear _list_require;
_require_weight = 0;
{
	_index = _list_require lbAdd format["%1x %2", (_maxAmount * (_x select 1)), [(_x select 0)] call public_fnc_itemGetName];
	if ([(_x select 0)] call public_fnc_itemCount >= (_maxAmount * (_x select 1))) then {
		_list_require lbSetPicture [_index, "lyeed_IMG\data\process\items_ok.paa"];
	} else {
		_list_require lbSetPicture [_index, "lyeed_IMG\data\process\items_missing.paa"];
		_can = false;
	};

	_require_weight = _require_weight + ((([(_x select 0)] call public_fnc_itemGetWeight) * (_x select 1)) * _maxAmount);
} forEach getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "require");

_list_receive = _display displayCtrl 53014;
lbClear _list_receive;

_receive = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "receive");

_receive_weight = 0;
{
	_index = _list_receive lbAdd format["%1x %2", (_maxAmount * (_x select 1)), [(_x select 0)] call public_fnc_itemGetName];
	_list_receive lbSetPicture [_index, [(_x select 0)] call public_fnc_itemGetImage];

	_receive_weight = _receive_weight + ((([(_x select 0)] call public_fnc_itemGetWeight) * (_x select 1)) * _maxAmount);
} forEach (_receive select 0);

{
	_info = [_x] call public_fnc_fetchcfgDetails;
	for "_i" from 1 to _maxAmount do
	{
		_index = _list_receive lbAdd (_info select 1);
		_list_receive lbSetPicture [_index, (_info select 2)];
	};
} forEach (_receive select 1);

if ((_receive select 3) > 0) then
{
	_index = _list_receive lbAdd format["%1kn", [((_receive select 3) * _maxAmount)] call public_fnc_numberText];
	_list_receive lbSetPicture [_index, "alysia_items_virtual\data\money.paa"];
};

(_display displayCtrl 53007) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	[
		(getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "time_per_item") * _maxAmount) + getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "time_default"), 
		"M:SS"
	] call CBA_fnc_formatElapsedTime
];

_newWeight = g_carryWeight - _require_weight + _receive_weight;
if (_newWeight > g_maxWeight) then {
	_can = false;
};
if (_newWeight < 0) then {
	_newWeight = 0;
};

(_display displayCtrl 53013) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1/%3 <t size='0.8'><img image='lyeed_IMG\data\vehicle\trunk\right_arrow_single_select.paa'/></t> <t color='%4'>%2</t>/%3</t>",
	g_carryWeight,
	_newWeight,
	g_maxWeight,
	if (_newWeight <= g_maxWeight) then {"#8cff9b"} else {"#ff8c8c"}
];

if (_can) then {
	ctrlShow[53008, true];
	ctrlShow[53009, true];
	ctrlShow[53010, true];
	ctrlShow[53011, true];
	ctrlShow[53012, true];
} else {
	ctrlShow[53008, false];
	ctrlShow[53009, false];
	ctrlShow[53010, false];
	ctrlShow[53011, false];
	ctrlShow[53012, false];
};
