/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (lbCurSel 2902 == -1) exitWith {["Vous n'avez pas sélectionné de joueur"] call ALYSIA_fnc_error;};

private["_player"];
_player = lbData[2902,lbCurSel (2902)];
_player = call compile format["%1", _player];

if (isNil "_player") exitwith {};
if (isNull _player) exitWith {};
if (_player == player) exitWith {};

[] spawn 
{
	while {dialog} do {	
		closeDialog 0;
   		sleep 0.01;
   	};
};

_player switchCamera "INTERNAL";
["<t align='center'>Vous êtes en Spec sur<br/>%1<br/><br/>Appuyez sur F10 pour quitter", (_unit getVariable["realname", (name _unit)])];
AM_Exit = (findDisplay 46) displayAddEventHandler ["KeyDown","if((_this select 1) == 68) then {(findDisplay 46) displayRemoveEventHandler ['KeyDown',AM_Exit];player switchCamera 'INTERNAL'; ['Vous avez quitté le Spec'] call ALYSIA_fnc_info;};false"];