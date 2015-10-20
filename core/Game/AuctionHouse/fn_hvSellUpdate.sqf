/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_inventoryArma", "_inventoryAltis"];

_inventoryArma = [];
if (primaryWeapon player != "") then { _inventoryArma pushBack (primaryWeapon player); };
if (secondaryWeapon player != "") then { _inventoryArma pushBack (secondaryWeapon player); };
if (handgunWeapon player != "") then { _inventoryArma pushBack (handgunWeapon player); };
if (uniform player != "") then { _inventoryArma pushBack (uniform player); };
if (vest player != "") then { _inventoryArma pushBack (vest player); };
if (backpack player != "") then { _inventoryArma pushBack (backpack player); };
if (goggles player != "") then { _inventoryArma pushBack (goggles player); };
if (headgear player != "") then { _inventoryArma pushBack (headgear player); };
if (binocular player != "") then { _inventoryArma pushBack (binocular player); };	
{
	_inventoryArma pushBack _x;
} forEach ((primaryWeaponItems player) + (assignedItems player) + (uniformItems player) + (vestItems player));

_inventoryAltis = [];
{
	if (_x != "life_inv_illegal_money") then 
	{
		if ((missionNamespace getVariable[_x, 0]) > 0) then {
			_inventoryAltis pushBack _x;
		};
	};
} forEach (life_inv_items);

disableSerialization;
_list = (findDisplay 45700) displayCtrl 45703;
lbClear _list;

{
	private["_info"];
	_info = [_x] call life_fnc_fetchCfgDetails;
	if (count _info > 0) then
	{
		_list lbAdd (_info select 1);
		_list lbSetPicture[(lbSize _list) - 1, (_info select 2)];
		_list lbSetValue[(lbSize _list) - 1, 1];
		_list lbSetData[(lbSize _list) - 1, _x];
	};
} forEach (_inventoryArma);

{
	_list lbAdd ([_x] call life_fnc_varToStr);
	_list lbSetPicture[(lbSize _list) - 1, ([[_x, 1] call life_fnc_varHandle] call ALYSIA_fnc_getItemIMG)];
	_list lbSetValue[(lbSize _list) - 1, 2];
	_list lbSetData[(lbSize _list) - 1, ([_x, 1] call life_fnc_varHandle)];
} forEach (_inventoryAltis);

{
	if (!(isNull _x) && (alive _x) && ((player distance _x) < 20)) then
	{
		private["_info"];
		_info =  _x getVariable["dbInfo", []];
		if (count _info > 0) then
		{
			if ((_info select 0) == (getPlayerUID player)) then 
			{
				_list lbAdd (getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName"));
				_list lbSetPicture[(lbSize _list) - 1, ([(typeOf _x)] call life_fnc_fetchVehInfo) select 2];
				_list lbSetValue[(lbSize _list) - 1, 0];
				_list lbSetData[(lbSize _list) - 1, str(_forEachIndex)];
			};
		};		
	};
} forEach (life_vehicles);

if (((lbSize _list) - 1) == -1) then
{
	_list lbAdd "Vide";
	_list lbSetValue [(lbSize _control) - 1, -1];
};

_list lbSetCurSel 0;