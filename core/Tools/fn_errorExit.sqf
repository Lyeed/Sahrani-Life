/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_txt", "_time"];
_txt = [_this, 0, "", [""]] call BIS_fnc_param;
_time = [_this, 1, 6, [6]] call BIS_fnc_param;

diag_log _txt;
disableUserInput true;
player enableSimulation false;
while {_time > 0} do
{
	cutText [format["%1 Déconnexion dans %2 seconde%3", _txt, _time, if (_time > 1) then {"s"} else {""}], "BLACK FADED", 0, true];
	_time = _time - 1;
	sleep 1;
};

cutText [format["%1", _txt], "BLACK FADED", 0, true];
disableUserInput false;
"Bye" call BIS_fnc_endMission;