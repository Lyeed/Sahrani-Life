/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_combo"];

disableSerialization;
_display = findDisplay 16000;
if (isNull _display) exitWith {};

_combo = (_display displayCtrl 16004);

player setVariable ["typeRefuel", (_combo lbData (lbCurSel _combo)), false];
["Veuillez maintenant insérer le pistolet dans le réservoir de votre véhicule. Pour annuler, veuillez ranger le pistolet dans la pompe."] call public_fnc_info;
closeDialog 0;