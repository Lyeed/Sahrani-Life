enableSaving [false, false];
[] execVM "core\Tools\KRON_Strings.sqf";

{
	_x setVariable ["BIS_noCoreConversations", true];
} forEach (allUnits);

0 fadeRadio 0;
0 fadeSpeech 0;
enableSentences false;