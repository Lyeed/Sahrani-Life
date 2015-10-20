/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((isNil "g_EASTLevel") || ((call g_EASTLevel) isEqualTo 0)) exitWith 
{
	["Ce slot est réservé, vous devez être sur la whiteliste pour pouvoir vous y connecter"] spawn public_fnc_errorExit;
	false;
};

if ((((call g_GUERLevel) > 0) || ((call g_REBLevel) > 0) || ((call g_WESTLevel) > 0)) && ((call g_adminlevel) isEqualTo 0)) exitWith
{
	["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
	false;
};

[] call public_fnc_hideIllegalArea;

true;