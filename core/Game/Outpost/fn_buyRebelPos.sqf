/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_marker", "_randPos"];
_price = [_this, 3, "", [""]] call BIS_fnc_param;

if (playerSide != civilian) exitWith {};
if (_price == "") exitWith {};
if ((count ALYSIA_outpostPos) == 0) exitWith { 
	["Plus aucune cache rebelle n'est disponible pour le moment"] call ALYSIA_fnc_error; 
};

_price = parseNumber(_price);
if (life_cash < _price) exitWith { 
	[format["Vous n'avez pas assez d'argent pour payer l'information<br/><br/><t align='left'>Manquant</t><t align='right' color='#8cff9b'>%1$</t>", [(_price - life_cash)] call life_fnc_numberText]] call ALYSIA_fnc_error; 
};

if (isNil "ALYSIA_discover") then {
	ALYSIA_discover = [];
};

if (count (ALYSIA_discover) == 3) exitWith {
	["Je n'ai plus d'informations à vous apprendre aujourd'hui"] call ALYSIA_fnc_error;
};

playSound "buy";
life_cash = life_cash - _price;
waitUntil {!dialog};
openMap true;
waitUntil {visibleMap};
["L'informateur vous montre sur votre carte où il pense qu'une cache rebelle peut se trouver<br/><br/>Le marqueur s'effacera lors de votre déconnexion<br/><br/>N'oubliez pas de noter la position"] call ALYSIA_fnc_info;

_randPos = ALYSIA_outpostPos call BIS_fnc_selectRandom;
if (count ALYSIA_discover > 0) then {
	while {((ALYSIA_discover find _randPos) != -1)} do {
		_randPos = ALYSIA_outpostPos call BIS_fnc_selectRandom;
	};
};

_marker = format["outpost_%1", count(ALYSIA_discover) + 1];
createMarkerLocal [_marker, _randPos];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "o_hq";
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerTextLocal "Cache rebelle";
ALYSIA_discover pushBack _randPos;