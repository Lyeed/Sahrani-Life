/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private
[
	"_target",
	"_type",
	"_requireTarget",
	"_processLicense",
	"_item_require",
	"_enoughText",
	"_oldItemWeight",
	"_maxAmount",
	"_item_receive",
	"_newItemWeight",
	"_itemsCheck",
	"_receiveText",
	"_sides",
	"_rank"
];

_type = [_this, 0, "", [""]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br>Revenez plus tard"] call public_fnc_error;
};
if ((player getVariable["restrained", false]) || (player getVariable["surrender", false])) exitWith {
	["Vous ne pouvez pas traiter lorsque vous êtes menotté ou avez les mains sur la tête"] call public_fnc_error;
};
if (!(alive player) || (player getVariable ["is_coma", false])) exitWith {
	["Vous devez être vivant pour traiter"] call public_fnc_error;
};
if ((vehicle player) != player) exitWith {
	["Vous devez être à pied pour traiter"] call public_fnc_error;
};

if (!isClass(missionConfigFile >> "ALYSIA_PROCESS" >> _type)) exitWith
{
	[format["Impossible de trouver les informations concernant le traitement <color='#FF8000'>%1</t>", _type]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Process %1 not defined in ALYSIA_PROCESS (class not found)", _type];
};

_requireTarget = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "requiere_target");
if ((_requireTarget isEqualTo 1) && (isNull _target)) exitWith {
	["Le traitement à besoin d'émaner d'une entité"] call public_fnc_error;
};
if ((_requireTarget isEqualTo 1) && ((player distance _target) > 5)) exitWith {
	["Vous êtes trop loin pour débuter le traitement"] call public_fnc_error;
};

_sides = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "sides");
if (!(str(playerSide) in _sides)) exitWith {
	[format[
		"Votre faction<br/><t color='#04B404'>%1</t> n'est pas autorisé à traiter ici<br/>Ce traitement (<t color='#2EFE9A'>%2</t>) est <t color='#FF0000'>réservé</t>",
		([playerSide] call public_fnc_sideToStr),
		getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "name")
	]] call public_fnc_error;
};

_processLicense = getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "license");
if ((playerSide isEqualTo civilian) && (_processLicense != "") && !(missionNamespace getVariable[format["license_%1", _processLicense], false])) exitWith {
	[format["Vous n'avez pas la license requise pour traiter<br/>Vous avez besoin de %1", ([_processLicense] call public_fnc_licenseGetName)]] call public_fnc_error;
};

_rank = getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "rank");
if ((playerSide != civilian) && ((player getVariable ["rank", 0]) < _rank)) exitWith {
	["Vous n'avez pas le rank suffisant pour traiter"] call public_fnc_error;
};

_item_require = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "require");
_enoughText = "";
_oldItemWeight = 0;
{
	private["_varMaxAmount", "_varAmount"];
	diag_log format["%1", _x];
	_varAmount = [(_x select 0)] call public_fnc_itemCount;
	_varMaxAmount = floor(_varAmount / (_x select 1));

	if (isNil "_maxAmount") then {
		_maxAmount = _varMaxAmount;
	} else {
		if (_varMaxAmount < _maxAmount) then {
			_maxAmount = _varMaxAmount;
		};
	};
	
	if (_varAmount < (_x select 1)) then {
		_enoughText = _enoughText + format["%1x %2<br/>", ((_x select 1) - _varAmount), ([(_x select 0)] call public_fnc_itemGetName)];
	};

	_oldItemWeight = _oldItemWeight + (([(_x select 0)] call public_fnc_itemGetWeight) * (_x select 1));
} forEach (_item_require);
if (_enoughText != "") exitWith {
	[format["Vous n'avez pas tous les élements requis<br/><br/>Vous avez besoin de<br/>%1<br/>en plus pour commencer à traiter</t>", _enoughText]] call public_fnc_error;
};

_item_receive = getArray(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "receive");
_newItemWeight = 0;
{
	_newItemWeight = _newItemWeight + (([(_x select 0)] call public_fnc_itemGetWeight) * (_x select 1));
} forEach (_item_receive);

if ((g_carryWeight - (_oldItemWeight * _maxAmount) + (_newItemWeight * _maxAmount)) > g_maxWeight) exitWith {
	[format["Vous n'aurez pas assez de place pour transporter les matériaux issues du traitement (%1/%2)", _tmpWeight, g_maxWeight]] call public_fnc_info;
};

if (!([
	getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "name"),
	(getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "time_per_item") * _maxAmount) + getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "time_default"),
	_target,
	getText(missionConfigFile >> "ALYSIA_PROCESS" >> _type >> "sound")
] call public_fnc_showProgress)) exitWith {};

_itemsCheck = true;
{
	if (!([false, (_x select 0), ((_x select 1) * _maxAmount)] call public_fnc_handleInv)) exitWith {
		_itemsCheck = false;
	};
} forEach (_item_require);
if (!_itemsCheck) exitWith {
	["Vous devez garder les matériaux sur vous pendant toute la durée du traitement"] call public_fnc_error;
};

_receiveText = "Vous avez reçu<br/>";
{
	_receiveText = _receiveText + format["%1x %2<br/>", ((_x select 1) * _maxAmount), [_x select 0] call public_fnc_itemGetName];
	[true, (_x select 0), ((_x select 1) * _maxAmount)] call public_fnc_handleInv;
} forEach (_item_receive);
[_receiveText] call public_fnc_info;
