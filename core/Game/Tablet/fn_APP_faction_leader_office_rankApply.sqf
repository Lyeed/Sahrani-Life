/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_uid", "_rank", "_owner", "_oldRank", "_sel", "_max", "_myRank"];

_sel = lbCurSel 8736;

if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de membre à modifier"] call AlysiaClient_fnc_error;
};

_uid = lbData[8736, _sel];
if (_uid isEqualTo (getplayerUID player)) exitWith {
	["Vous ne pouvez pas effectuer cette action sur vous même"] call AlysiaClient_fnc_error;
};

_rank = ctrlText 8737;
if (!([_rank] call AlysiaClient_fnc_isNumber)) exitWith {
	[format["%1 n'est pas un nombre valide", _rank]] call AlysiaClient_fnc_error;
};

_rank = parseNumber(_rank);
_myRank = player getVariable["rank", 0];
if (_rank > _myRank) exitWith {
	["Vous ne pouvez pas nommer quelqu'un plus gradé que vous"] call AlysiaClient_fnc_error;
};

if (_rank < 0) exitWith {
	["Le rang ne peut pas être négatif"] call AlysiaClient_fnc_error;
};

_max = count(getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "ranks" >> "ranks_complet")) - 1;
if (_rank > _max) exitWith {
	[format["Le rang doit être compris entre<br/><t align='center'>0 : %1<br/>et<br/>%2 : %3</t>", ([playerSide, 0] call AlysiaClient_fnc_rankToStr), ([playerSide, _max] call AlysiaClient_fnc_rankToStr)]] call AlysiaClient_fnc_error;
};

_oldRank = lbValue[8736, _sel];
if (_myRank < _oldRank) exitWith {
	["Vous ne pouvez pas changer le grade de quelqu'un de plus gradé que vous"] call AlysiaClient_fnc_error;
};

[_uid, _rank, playerSide] remoteExec ["AlysiaServer_fnc_factionMemberModify", 2, false];
[format["Changement de grade effectué<br/><br/><t align='center'>Nouveau grade<br/><t color='#01DF3A'>%1</t></t>", ([playerSide, _rank] call AlysiaClient_fnc_rankToStr)]] call AlysiaClient_fnc_info;

_owner = [_uid] call AlysiaClient_fnc_getPlayerFromUID;
if (!(isNull _owner)) then
{
	[
		format
		[
			"Le %1 %2 a changé votre grade<br/><br/><t align='center'>Nouveau grade<br/><t color='#01DF3A'>%3</t></t>",
			([playerSide, _myRank] call AlysiaClient_fnc_rankToStr),
			(player getVariable["realname", profileName]),
			([playerSide, _rank] call AlysiaClient_fnc_rankToStr)
		]
	] remoteExecCall ["AlysiaClient_fnc_info", _owner, false];
	_owner setVariable["rank", _rank, true];
};