/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull (findDisplay 16000)) exitWith {};

player setVariable ["typeRefuel", (lbData[16004, (lbCurSel 16004)])];
["Veuillez maintenant insérer le pistolet dans le réservoir de votre véhicule<br/>Pour annuler rangez le pistolet dans la pompe."] call public_fnc_info;
closeDialog 0;
