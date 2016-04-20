/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_bank", "_door", "_tool"];
_bank = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_door = [_this, 1, "", [""]] call BIS_fnc_param;
_tool = [_this, 2, ObjNull, [ObjNull]] call BIS_fnc_param;

if (_door isEqualTo "") then
{
	if ((_tool getVariable ["owner", ObjNull]) isEqualTo player) then
	{
		if (["Démontage de l'outil", (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "defuseTime") / 2),  objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress) then
		{
			if (typeOf _tool isEqualTo "Bank_Bomb") then {
				[_tool, "bankDefused"] call CBA_fnc_globalSay3d;
			};

			player addItem (typeOf _tool);
			deleteVehicle _tool;
		};
	} else {
		if (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "item") in (magazines player)) then
		{
			if (["Désamorçage de l'outil", (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_tool) >> "defuseTime")),objNull,"","AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress) then
			{
				player addItem (typeOf _tool);
				if ((typeOf _tool) isEqualTo "Bank_Bomb") then
				{
					[_tool, "bankDefused"] call CBA_fnc_globalSay3d;
				};
				deleteVehicle _tool;
			};
		} else {
			[format["Vous avez besoin de %1", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call AlysiaClient_fnc_fetchCfgDetails) select 1]] call AlysiaClient_fnc_error;
		};
	};
} else {
	
	player removeMagazine (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item"));
	
	_item = ((getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")) createVehicle [0, 0, 0]);
	_item attachTo [_bank, (getArray(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "pos"))];
	_item setDir (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "rot"));
	_item animateSource [(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "anim")), 1];
	
	_item setVariable ["owner", player, true];
	_item setVariable ["bank", _bank, true];
	_item setVariable ["active", true, true];
	_bank setVariable [getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item"), _item, true];
	
	[_item] spawn AlysiaClient_fnc_robberyTools;
};
