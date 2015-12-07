/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((((call g_EASTLevel) > 0) || ((call g_WESTLevel) > 0) || ((call g_GUERLevel) > 0)) && ((call g_adminlevel) isEqualTo 0)) exitWith
{
	["Vous n'êtes pas autorisé à changer de faction"] spawn public_fnc_errorExit;
	false;
};

if (g_launder > 0) then
{
	[] spawn
	{
		sleep ((60 * random(15)) + 3);
		[] call public_fnc_launderReceive;
	};
};

true;