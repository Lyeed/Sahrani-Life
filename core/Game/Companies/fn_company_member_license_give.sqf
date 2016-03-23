/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_company", "_uid", "_license", "_info"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_uid = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _company) || (_uid isEqualTo "")) exitWith {};

_info = _company getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de récupérer les informations de l'entreprise."] call AlysiaClient_fnc_error;
};

_license = getText(missionConfigFile >>  "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "license");
if (_license isEqualTo "") exitWith {
	["Votre type d'entreprise ne vous donne accès à aucune license supplémentaire."] call AlysiaClient_fnc_error;
};

_target = [_uid] call AlysiaClient_fnc_getPlayerFromUID;
if (isNull _target) exitWith {
	["La personne a besoin d'être présente sur l'île pour pouvoir lui payer la license d'entreprise."] call AlysiaClient_fnc_error;
};

_action =
[
	format
	[
		"Vous êtes sur le point de payer la licence : <t color='#FF4000'>%1</t>.<br/>Prix : <t color='#8cff9b'>%2</t>kn.<br/>Validez-vous ?", 
		[_license] call AlysiaClient_fnc_licenseGetName,
		[getNumber(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "factions" >> str(_target) >> "price")] call AlysiaClient_fnc_numberText
	],
	"Validation",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then {[player, _license, _company] remoteExecCall ["AlysiaClient_fnc_company_member_license_receive", _target]};
