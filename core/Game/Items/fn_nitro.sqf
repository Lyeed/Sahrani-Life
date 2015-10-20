/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit"];
_unit = cursorTarget;

if ((isNull _unit) || !(_unit isKindOf "Car")) exitWith { ["Cible invalide"] call ALYSIA_fnc_error; };
if ((vehicle player) != player) exitWith { ["Vous devez être à pied pour utiliser cet objet"] call ALYSIA_fnc_error; };
if (dialog) then { closeDialog 0; };

if ([false, "nitro", 1] call life_fnc_handleInv) then
{
	life_action_inUse = true;
	["Fixation de l'injecteur nitro", 8] call ALYSIA_fnc_showProgress;
	life_action_inUse = false;
	if ((alive player) && !life_coma) then 
	{
		if (player distance _unit < 4) then
		{
			_unit setVariable["nitro", 3, true];
			["Injecteur Nitro fixé au véhicule (3 injections). Appuyez sur 6 lorsque vous conduisez pour l'activer"] call ALYSIA_fnc_info;
		}
		else { ["Vous êtes trop loin"] call ALYSIA_fnc_error; };
	};
};
