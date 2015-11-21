/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_admin", "_amount"];
_admin = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_amount = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (isNull _admin) exitWith {};
if (_amount == -1) exitWith {};

life_atmcash = life_atmcash + _amount;
[format["<t align='center'>Vous avez reçu un versement sur votre compte de la part de l'équipe d'administration ALYSIA</t><br/><br/><t align='left'>Montant</t><t align='right' color='#8cff9b'>%1kn</t>", [_amount] call life_fnc_numberText]] call ALYSIA_fnc_info;
[[format["<t align='center'>%1<br/> a bien reçu votre remboursement</t><br/><br/><t align='left'>Montant</t><t align='right' color='#8cff9b'>%2kn</t", (name player), [_amount] call life_fnc_numberText]], "ALYSIA_fnc_info", _admin, false] spawn life_fnc_MP;