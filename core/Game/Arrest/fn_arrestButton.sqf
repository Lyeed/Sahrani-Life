/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_time", "_reason"];

if (isNil "life_cop_arrestTarget") exitWith { ["Cible invalide"] call ALYSIA_fnc_info; };
if (isNull life_cop_arrestTarget) exitWith { ["Cible invalide"] call ALYSIA_fnc_info; };
_time = parseNumber(ctrlText 89691);

if (_time == 0) exitWith { ["Le temps de prison ne peut pas être égal à zéro"] call ALYSIA_fnc_error; };
if (_time < 0) exitWith { ["Le temps de prison ne peut pas être négatif"] call ALYSIA_fnc_error; };
if (_time > 20) exitWith { ["Le temps ne peut pas accéder 20 minutes"] call ALYSIA_fnc_error; };
_reason = ctrlText 89692;

if (_reason == "") exitWith { ["Veuillez entrer une raison"] call ALYSIA_fnc_error; };

closeDialog 0;
[format["Vous avez mis %1 en <t color='#ff8c8c'>prison</t><br/><br/><t align='left'>Temps</t><t align='right'><t color='#00FF40'>%2</t> minutes</t><br/><t align='left'>Raison</t><br/>%3", (life_cop_arrestTarget getVariable "realname"), _time, _reason]] call ALYSIA_fnc_info;
[[_time, _reason], "ALYSIA_fnc_putInJail", life_cop_arrestTarget] spawn life_fnc_MP;
life_cop_arrestTarget = ObjNull;
