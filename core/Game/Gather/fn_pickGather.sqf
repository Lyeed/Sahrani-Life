/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_mine", "_itemName", "_val", "_near", "_currentTool", "_actionSound"];
_near = [_this, 0, "", [""]] call BIS_fnc_param;

if (_near == "") exitWith {};
if (life_action_gathering || life_action_inUse) exitWith {};
if (vehicle player != player) exitWith { [(localize "STR_ISTR_Pick_MineVeh")] call ALYSIA_fnc_error; };
if (dialog) then { closeDialog 0; };

_ressourceInfo = [_near] call ALYSIA_fnc_pickCfg;
if (count _ressourceInfo == 0) exitWith {};
	
_mine = _ressourceInfo select 0;
_val = _ressourceInfo select 1;
_currentTool = _ressourceInfo select 2;
_actionSound = _ressourceInfo select 3;
_itemName = [([_mine, 0] call life_fnc_varHandle)] call life_fnc_varToStr;

if ((_currentTool != "") && ((currentWeapon player) != _currentTool)) exitWith {
	[format["Vous n'avez pas le bon outil<br/>Vous avez besoin de<br/><t align='center' color='#FF8000'>%1</t>", ([_currentTool] call life_fnc_fetchCfgDetails) select 1]] call ALYSIA_fnc_error; 
};
if ((([_mine] call life_fnc_itemWeight) + life_carryWeight) > life_maxWeight) exitWith { 
	["Vous n'avez pas assez de place pour commencer la récolte"] call ALYSIA_fnc_error; 
};
if ((_mine == "objvaleur") && (!(surfaceIsWater getPos player) || (((getPosASLW player) select 2) > -5))) exitWith { 
	["Vous devez être sous l'eau près de l'épave pour commencer la récolter"] call ALYSIA_fnc_error; 
};

titleText["* Déplacez-vous pour annuler la récolte *", "PLAIN DOWN"];
life_action_gathering = true;
life_action_inUse = true;
life_action_cancel = false;

while {(life_action_gathering && !life_action_cancel)} do
{
	private["_gatherVal", "_diff"];
	if (!(alive player) || life_coma || ((vehicle player) != player) || (player distance (getMarkerPos _near) > 40) || ((speed player) > 1) || (player getVariable["restrained", false]) ||
		(player getVariable["surrender", false]) || ((_currentTool != "") && (primaryWeapon player != _currentTool))) exitWith { 
		titleText ["* Récolte annulée *", "PLAIN DOWN"]; 
	};

	if (_val > 1) then 
	{
		_gatherVal = round(random(_val - 1) + 1);
		_diff = [_mine, _gatherVal, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
		while {(_gatherVal > 0) && (_diff == 0)} do 
		{
			_gatherVal = _gatherVal - 1;
			_diff = [_mine, _gatherVal, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
		};
	}
	else 
	{
		_gatherVal = _val;
		_diff = [_mine, _gatherVal, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
	};
	if (_diff == 0 || _gatherVal == 0) exitWith {
		["<t align='center'>Votre inventaire est plein</t>"] call ALYSIA_fnc_error; 
	};

	if (!life_action_gathering) exitWith {};
	for "_i" from 0 to 1 do
	{
		if (life_action_gathering) then
		{
			player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			if (_actionSound != "") then 
			{	
				playSound _actionSound;
			};
			waitUntil{(animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon") || (!life_action_gathering)};
			if (_currentTool == "") then 
			{	
				sleep 1.8; 
			} else { sleep 4.2; };
		};
	};

	if (!life_action_gathering) exitWith {};
	if ([true, _mine, _diff] call life_fnc_handleInv) then {
		titleText[format["Vous avez ramassé %1x %2", _diff, _itemName], "PLAIN"];
	}
	else { life_action_gathering = false; };

	if (!life_action_gathering) exitWith {};
	if (_mine == "artefact") then 
	{
		private["_nbRand"];
		_nbRand = random(100);
		if (_nbRand <= 1) then 
		{
			if ([true, "artefact_exrare", 1] call life_fnc_handleInv) then { 
				["Vous avez trouvé un artefact extrêmement rare"] call ALYSIA_fnc_info; 
			};
		};
		if (_nbRand > 1 && _nbRand < 4) then 
		{ 
			if ([true, "artefact_rare", 1] call life_fnc_handleInv) then { 
				["Vous avez trouvé un artefact rare"] call ALYSIA_fnc_info; }; 
			};
		if (_nbRand >= 4 && _nbRand <= 10) then 
		{
			if ([true, "artefact_common", 1] call life_fnc_handleInv) then { 
				["Vous avez trouvé un artefact inhabituel"] call ALYSIA_fnc_info; 
			};
		};
	};
};

if (life_action_cancel) then 
{
	titleText['* Récolte annulée *', 'PLAIN DOWN'];
	sleep 1.5;
};

life_action_gathering = false;
life_action_inUse = false;
