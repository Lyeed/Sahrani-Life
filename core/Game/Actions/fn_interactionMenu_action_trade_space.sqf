/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
if (!params [
		["_inv", [], [[]]]
	]) exitWith {};

{
	[true, (_x select 0), (_x select 1)] call public_fnc_handleInv;
} forEach (_inv);

["L'échange a été accepté, cependant la cible n'avait pas assez de place pour tout récupérer.<br/>La différence vous a été retournée"] call public_fnc_info;