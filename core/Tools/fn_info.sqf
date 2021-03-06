/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_sound", "_hud", "_info", "_frame"];

if (!hasInterface) exitWith {};

_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_sound = [_this, 1, "", [""]] call BIS_fnc_param;

if (_msg isEqualTo "") exitWith {};

if (alive player) then
{
	if (!(player getVariable ["is_coma", false])) then
	{
		15 cutRsc ["RscTitleMessage", "PLAIN"];

		disableSerialization;
		_hud = uiNameSpace getVariable ["RscTitleMessage", displayNull];

		_info = _hud displayCtrl 95000;
		_info ctrlSetStructuredText parseText format["<t font='EtelkaMonospacePro' size='0.8'>%1</t>", _msg];
		_info ctrlSetPosition [(ctrlPosition _info) select 0, (ctrlPosition _info) select 1, (ctrlPosition _info) select 2, ctrlTextHeight _info];
		_info ctrlCommit 0;

		_frame = _hud displayCtrl 95002;
		_frame ctrlSetPosition [(ctrlPosition _frame) select 0, (ctrlPosition _frame) select 1, (ctrlPosition _frame) select 2, ctrlTextHeight _info];
		_frame ctrlCommit 0;
		
		(_hud displayCtrl 95001) ctrlSetText "Information";

		if (_sound isEqualTo "") then {
			playSound "defaultNotification";
		} else {
			playSound _sound;
		};
	};
};
