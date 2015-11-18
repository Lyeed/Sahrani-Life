/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

params [
	["_bank", ObjNull, [ObjNull]],
	["_door", "", [""]],
	["_tool", ObjNull, [ObjNull]]
];

systemChat format ["< Robbery System - Debug > robberyProcess - Porte: %1", _door];

if (!(_door isEqualTo "")) then 
{
	private ["_item"];
	systemChat format ["< Robbery System - Debug > robberyProcess - Pose de la bombe/foreuse"];
	player removeMagazine (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item"));
	_item = ((getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")) createVehicle [0,0,0]);
	_item attachTo [_bank, (getArray(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "pos"))];
	_item setDir (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "rot"));
	_item animate [(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "anim")), 1];
	_item setVariable ["owner", player, true];
	_item setVariable ["bank", _bank, true];
	_item setVariable ["active", true, true];
	_bank setVariable [(getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")), _item, true];
	[_item] spawn public_fnc_robberyTools;
}
else
{
	if ((_tool getVariable ["owner", ObjNull]) isEqualTo player) then
	{
		if ((format ["Démontage de %1", [(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "item"))] call public_fnc_fetchCfgDetails]), (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "defuseTime")), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
		{
			if (typeOf _tool isEqualTo "Bank_Bomb") then
			{
				[_tool, "bankDefused"] call CBA_fnc_globalSay3d;
			};

			player addItem (typeOf _tool);
			deleteVehicle _tool;
		};
	}
	else
	{
		if (!(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "item") in items player)) exitWith
		{
			[(format ["Vous avez besoin de <br/>%1<br/>", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call public_fnc_fetchCfgDetails) select 1])] call public_fnc_error;
		};

		if ((format ["Désamorçage de %1", [(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "item"))] call public_fnc_fetchCfgDetails]), (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "defuseTime")), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
		{
			player addItem (typeOf _tool);
		};

		if (typeOf _tool isEqualTo "Bank_Bomb") then
		{
			[_tool, "bankDefused"] call CBA_fnc_globalSay3d;
		};
		
		deleteVehicle _tool;
	};
};