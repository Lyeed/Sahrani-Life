/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_camera", "_text", "_data", "_title", "_id"];
disableSerialization;
_data = [_this, 0, [], [[]]] call BIS_fnc_param;

_camera = "camera" camCreate [0, 0, 0];
_camera cameraEffect ["internal", "back"];
4 cutRsc ["HUD_welcome_message", "PLAIN"];
_display = uiNamespace getVariable ["HUD_welcome_message", displayNull];
_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then {true}"];
_text = _display displayCtrl 800;
_title = _display displayCtrl 801;
showCinemaBorder true;

{
	waitUntil {preloadCamera (_x select 1)};
	cutText ["", "BLACK IN"];
	playSound "welcome_cams";
	_camera camSetPos (_x select 0);
	_camera camSetTarget (_x select 1);
	_camera camCommit 0;
	_text ctrlSetStructuredText parseText (_x select 3);
	_title ctrlSetText (_x select 2);
	sleep 11;
	if (_forEachIndex < (count _data)) then
	{
		cutText ["", "BLACK"];
		sleep 1;
	};
} forEach (_data);

showCinemaBorder false;
(uiNamespace getVariable ["HUD_welcome_message", displayNull]) displayRemoveEventHandler ["KeyDown", _id];
4 cutText ["", "PLAIN"];
cutText ["", "BLACK"];
_camera cameraEffect ["terminate", "back"];
camDestroy _camera;
