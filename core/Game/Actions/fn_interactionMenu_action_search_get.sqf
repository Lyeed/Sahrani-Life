/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_inv_arma", "_from"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

_inv_arma = [];
if ((primaryWeapon player) != "") then {_inv_arma pushBack (primaryWeapon player);};
if ((secondaryWeapon player) != "") then {_inv_arma pushBack (secondaryWeapon player);};
if ((handgunWeapon player) != "") then {_inv_arma pushBack (handgunWeapon player);};
if ((uniform player) != "") then {_inv_arma pushBack (uniform player);};
if ((vest player) != "") then {_inv_arma pushBack (vest player);};
if ((backpack player) != "") then {_inv_arma pushBack (backpack player);};
if ((goggles player) != "") then {_inv_arma pushBack (goggles player);};
if ((headgear player) != "") then {_inv_arma pushBack (headgear player);};
if ((binocular player) != "") then {_inv_arma pushBack (binocular player);};
{
	if (_x != "") then {
		_inv_arma pushBack _x;
	};
} forEach ((primaryWeaponItems player) + (assignedItems player) + (uniformItems player) + (vestItems player));

[([] call public_fnc_getInv), _inv_arma, g_cash] remoteExec ["public_fnc_interactionMenu_action_search_return", _from];
