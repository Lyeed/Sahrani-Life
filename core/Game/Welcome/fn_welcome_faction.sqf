/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_id"];
disableSerialization;

setMousePosition [0.5, 0.2];

createDialog "RscDisplayWelcomeFaction";

ctrlShow[850, false];
ctrlShow[851, false];
ctrlShow[852, false];
ctrlShow[853, false];
ctrlShow[854, false];
ctrlShow[855, false];
ctrlShow[856, false];
ctrlShow[857, false];
ctrlShow[860, false];
ctrlShow[861, false];
ctrlShow[862, false];
ctrlShow[863, false];
ctrlShow[864, false];
ctrlShow[865, false];
ctrlShow[866, false];
ctrlShow[867, false];

_display = findDisplay 809;
_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

waitUntil {(g_choice != "")};

_display displayRemoveEventHandler ["KeyDown", _id];
closeDialog 0;