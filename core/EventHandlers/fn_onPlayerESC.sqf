/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_abortButton", "_respawnButton", "_manuelButton", "_display"];

disableSerialization;
_display = _this select 0;

// quit
_abortButton = _display displayCtrl 104;
_abortButton ctrlEnable false;
_abortButton buttonSetAction
"
	[] call compile PreprocessFileLineNumbers ""core\MySQL\fn_query_update_disconnect.sqf"";
	if (!(isNull (missionNamespace getVariable[""g_objPut"", objNull]))) then {
		deleteVehicle (missionNamespace getVariable[""g_objPut"", objNull]);
	};
";

// fielManual
_manuelButton = _display displayCtrl 122;
_manuelButton ctrlEnable false;
_manuelButton ctrlShow false;

// respawn
_respawnButton = _display displayCtrl 1010;
_respawnButton ctrlEnable false;
_respawnButton ctrlShow false;

if (!(player getVariable ["is_coma", false]) && !(missionNamespace getVariable ["surrender", false]) && !(missionNamespace getVariable ["restrained", false])) then
{
	[_abortButton, _display] spawn
	{
		_timeStamp = time + 10;
		waitUntil 
		{
			(_this select 0) ctrlSetText format["Vous pouvez quitter dans %1 secondes...", ([(_timeStamp - time), "SS.MS"] call BIS_fnc_secondsToString)];
			(_this select 0) ctrlCommit 0;
			round(_timeStamp - time) <= 0 || isNull (_this select 1)
		};
		
		if (!(isNull (_this select 1))) then
		{
			if (!(player getVariable ["is_coma", false]) && !(missionNamespace getVariable ["surrender", false]) && !(missionNamespace getVariable ["restrained", false])) then
			{
				(_this select 0) ctrlSetText "VOUS POUVEZ DECONNECTER";
				(_this select 0) ctrlCommit 0;
				(_this select 0) ctrlEnable true;
			} else {
				(_this select 0) ctrlSetText "IMPOSSIBLE MAINTENANT";
				(_this select 0) ctrlCommit 0;
			};
		};
	};
};
