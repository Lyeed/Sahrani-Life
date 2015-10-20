/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_abortButton", "_respawnButton", "_manuelButton"];
disableSerialization;

// quit
_abortButton = (findDisplay 49) displayCtrl 104;
_abortButton ctrlEnable false;
_abortButton buttonSetAction
"
	[] call compile PreprocessFileLineNumbers ""core\MySQL\fn_query_update_disconnect.sqf"";
	if (!(isNull (missionNamespace getVariable[""g_objPut"", objNull]))) then {
		deleteVehicle (missionNamespace getVariable[""g_objPut"", objNull]);
	};
";

// fielManual
_manuelButton = (findDisplay 49) displayCtrl 122;
_manuelButton ctrlEnable false;
_manuelButton ctrlShow false;

// respawn
_respawnButton = (findDisplay 49) displayCtrl 1010;
_respawnButton ctrlEnable false;
_respawnButton ctrlShow false;

if (!(missionNamespace getVariable["g_coma", false])) then
{
	[_abortButton] spawn
	{
		private["_abortButton", "_timeStamp"];
		disableSerialization;
		_abortButton = _this select 0;
		_timeStamp = time + 10;
		waitUntil 
		{
			_abortButton ctrlSetText format["Vous pouvez quitter dans %1 secondes...", ([(_timeStamp - time), "SS.MS"] call BIS_fnc_secondsToString)];
			_abortButton ctrlCommit 0;
			round(_timeStamp - time) <= 0 || isNull (findDisplay 49)
		};
		if (!(isNull (findDisplay 49))) then
		{
			if (!(missionNamespace getVariable["g_coma", false]) && !(missionNamespace getVariable["surrender", false]) && !(missionNamespace getVariable["restrained", false])) then
			{
				_abortButton ctrlSetText "VOUS POUVEZ DECONNECTER";
				_abortButton ctrlCommit 0;
				_abortButton ctrlEnable true;
			} else {
				_abortButton ctrlSetText "IMPOSSIBLE MAINTENANT";
				_abortButton ctrlCommit 0;
			};
		};
	};
};