/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_handled"];

if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

closeDialog 0;
_handled = false;
_vehicle = cursorTarget;
if (!(isNull _vehicle)) then
{
	private["_owners", "_dbInfo", "_plateText"];
	_owners = _vehicle getVariable "vehicle_info_owners";
	_handled = true;

	if (isNil "_owners") exitWith { 
		["Impossible de récupérer les informations du véhicule"] call ALYSIA_fnc_error; 
	};

	_owners = [_owners] call life_fnc_vehicleOwners;
	if (_owners == "any<br/>") then { _owners = "Aucun propriétaire"; };

	_dbInfo = _vehicle getVariable["dbInfo", []];
	if (count (_dbInfo) > 0) then 
	{
		_plateText = _dbInfo select 1;
	} else { _plateText = ""; };

	hint parseText format
	[
		"<t size='1'><t align='center'>%4</t><br/><br/>	
		<t size='1'><t align='left'>Propriétaire</t><t align='right'>%1</t></t><br/>
		<t size='1'><t align='left'>Assuré</t><t align='right'>%2</t></t><br/>
		<t size='1'><t align='left'>Immatriculation</t><t align='right'>%3</t></t>",
		_owners,
		if ((_vehicle getVariable["isInsured", 0]) == 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
		_plateText,
		(getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"))
	];
};

if (!_handled) then
{
	private["_house"];
	_house = [(getPos player), sideUnknown] call ALYSIA_fnc_nearestHouse;
	if ((count _house) > 0) then
	{
		_house = _house select 0;
		hint parseText format["<t color='#FF0000'><t size='2'>" +(localize "STR_House_Raid_Owner")+ "</t></t><br/>%1", (_house getVariable "house_owner") select 1];
		_handled = true;
	};
};

if (!_handled) then {
	["Aucune cible valide"] call ALYSIA_fnc_error;
};