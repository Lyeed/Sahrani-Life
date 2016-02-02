/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_basic"];
_basic = [_this, 0, [], [[]]] call BIS_fnc_param;

if ((_basic isEqualTo []) || {!((getPlayerUID player) isEqualTo (_basic select 0))}) exitWith
{
	["Une erreur est survenue lors du chargement de vos données. Veuillez vous reconnecter ou contacter un administrateur si le problème persiste"] spawn public_fnc_errorExit;
	false;
};
if (!((_basic select 1) isEqualTo "") && !((_basic select 1) isEqualTo profileName)) exitWith
{
	[format["Vous n'êtes pas autorisé à changer d'identité. Votre pseudo actuel [%1] ne correspond pas à celui que vous aviez lors de votre inscription [%2].", profileName, (_basic select 1)]] spawn public_fnc_errorExit;
	false;
};
if ((face player) != (_basic select 37)) exitWith
{
	[format["Vous n'êtes pas autorisé à changer de visage. Votre visage actuel [%1] ne correspond pas à celui que vous aviez lors de votre inscription [%2].", (face player), (_basic select 37)]] spawn public_fnc_errorExit;
	false;
};

// WESTLevel
g_WESTLevel = compileFinal(_basic select 19);
// GuerLevel
g_GUERLevel = compileFinal(_basic select 20);
// EASTLevel
g_EASTLevel = compileFinal(_basic select 21);
// CIVLevel
g_CIVLevel = compileFinal(_basic select 22);

_allowed = switch (playerSide) do
{
	case civilian:
	{
		if (((call g_EASTLevel) > 0) || ((call g_WESTLevel) > 0) || ((call g_GUERLevel) > 0)) exitWith
		{
			["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
			false;
		};

		true;
	};
	case west:
	{
		if ((call g_WESTLevel) isEqualTo 0) exitWith 
		{
			[format["Ce slot est réservé aux membres de la faction : %1", [west] call public_fnc_sideToStr]] spawn public_fnc_errorExit;
			false;
		};

		if (((call g_EASTLevel) > 0) || ((call g_CIVLevel) > 0) || ((call g_GUERLevel) > 0)) exitWith
		{
			["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
			false;
		};

		true;
	};
	case east:
	{
		if ((call g_EASTLevel) isEqualTo 0) exitWith 
		{
			[format["Ce slot est réservé aux membres de la faction : %1", [east] call public_fnc_sideToStr]] spawn public_fnc_errorExit;
			false;
		};

		if (((call g_GUERLevel) > 0) || ((call g_CIVLevel) > 0) || ((call g_WESTLevel) > 0)) exitWith
		{
			["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
			false;
		};

		true;
	};
	case independent:
	{
		if ((call g_GUERLevel) isEqualTo 0) exitWith 
		{
			[format["Ce slot est réservé aux membres de la faction : %1", [independent] call public_fnc_sideToStr]] spawn public_fnc_errorExit;
			false;
		};

		if (((call g_EASTLevel) > 0) || ((call g_CIVLevel) > 0) || ((call g_WESTLevel) > 0)) exitWith
		{
			["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
			false;
		};

		true;
	};
	default {false};
};

if (!_allowed) exitWith {};

g_houses = [_this, 1, [], [[]]] call BIS_fnc_param;
{
	_marker = createMarkerLocal [format["house_%1", (_forEachIndex + 1)], (getPosATL _x)];
	_marker setMarkerTextLocal "Chez vous";
	_marker setMarkerColorLocal "ColorPink";
	_marker setMarkerTypeLocal "Fett_house";
	_marker setMarkerSizeLocal [0.6, 0.6];
} forEach g_houses;

g_vehicles = [_this, 2, [], [[]]] call BIS_fnc_param;

{
	_message = _x select 0;
	if (_x select 1) then {
		_message set [0, "Numéro caché"];
	};
	g_phone_messages pushBack _message;
} forEach ([_this, 3, [], [[]]] call BIS_fnc_param);

{
	if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "shown")) then {
		_x setMarkerAlphaLocal 1;
	} else {
		_x setMarkerAlphaLocal 0;
	}
} forEach g_dynamic_markers;

g_company = [_this, 4, objNull, [objNull]] call BIS_fnc_param;

g_laboratory = [_this, 5, objNull, [objNull]] call BIS_fnc_param;
if (!(isNull g_laboratory)) then
{
	_marker = createMarkerLocal ["laboratory", (getPosATL g_laboratory)];
	_marker setMarkerTextLocal "Laboratoire";
	_marker setMarkerColorLocal "ColorRed";
	_marker setMarkerTypeLocal "loc_Bunker";
};

g_session_query = _basic;
true;
