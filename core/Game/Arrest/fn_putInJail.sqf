/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

life_arrestMinuts = _this select 0;
life_arrestReason = _this select 1;

cutText ["", "BLACK FADED"];
if ((uniform player) != "U_C_Prisonnier_01") then {
	life_arrestOldUniform = uniform player; 
};
[] call life_fnc_stripDownPlayer;
{ missionNamespace setVariable[_x, 0]; } forEach (life_inv_items);
player setPos (getMarkerPos "jail_marker");
player setVariable["restrained", false, true];
player setVariable["escorting", false, true];
player setVariable["arrested", true, true];
life_arrestEscape = false;
life_arrested = true;
life_arrestUniform = "U_C_Prisonnier_01";
player forceAddUniform life_arrestUniform;
[9] call SOCK_fnc_updatePartial;

playSound "jail_arrive";
sleep 2;
titleText["Récupération de vos affaires ...", "PLAIN"];
sleep 2;
titleText["Changement de tenue ...", "PLAIN"];
sleep 2;
titleText["Mise à disposition de votre cellule ...", "PLAIN"];	

[format["Vous avez été mis en <t color='#ff8c8c'>prison</t><br/><br/><t align='left'>Raison</t><br/>%1", life_arrestReason]] call ALYSIA_fnc_info;
if (!(["Peine de prison", round(life_arrestMinuts * 60)] call ALYSIA_fnc_showProgress)) exitWith {};

player setVariable["arrested", false, true];
[life_arrestOldUniform, true] call life_fnc_handleItem;

life_arrestOldUniform = "";
life_arrested = false;
life_arrestUniform = "";
life_arrestMinuts = 0;
life_arrestReason = "";
life_arrestEscape = false;
[9] call SOCK_fnc_updatePartial;
[10] call SOCK_fnc_updatePartial;

player setPos (getMarkerPos "jail_release");
["<t align='center'>Vous êtes libre</t>"] call ALYSIA_fnc_info;
