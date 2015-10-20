/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_action_inUse) exitWith {};
if ((call g_donator) < 1) exitWith {
	["Vous n'êtes pas autorisé à utiliser cet objet"] call public_fnc_error;
};

if (!(isClass(missionConfigFile >> "ALYSIA_PAINT" >> (currentWeapon player)))) then
{
	private["_missionConfigPatches", "_weaponsList"];
	_missionConfigPatches = missionConfigFile >> "ALYSIA_PAINT";
	_weaponsList = "";
	for "_i" from 0 to count (_missionConfigPatches) - 1 do 
	{
		private["_patchEntry"];
		_patchEntry = _missionConfigPatches select _i;
		if (isClass _patchEntry) then {
			_patchEntry = _patchEntry + format["%1<br/>", ([_patchEntry] call public_fnc_fetchCfgDetails) select 1];
		};
	};

	[format["Vous ne pouvez pas utiliser de bombe de peinture sur votre arme actuelle<br/><br/><t align='center'>Liste des armes disponibles<br/><t size='0.9'>%1</t></t>", _weaponsList]] call public_fnc_error; 	
};

if ([false, "paint", 1] call public_fnc_handleInv) then
{
	closeDialog 0;
	g_action_inUse = true;
	["Veuillez choisir votre couleur dans le menu déroulant"] call public_fnc_info;
	g_paint_list_actions = [];
	g_paint_weapon = currentWeapon player;
	
	{
		_nb = player addAction
		[
			format["Peindre arme (%1)", ([_x] call public_fnc_fetchCfgDetails select 1)],
			public_fnc_paintChoosen,
			_x, 
			5000,
			true,
			true,
			''
		];
		g_paint_list_actions pushBack _nb;
	} forEach (getArray(missionConfigFile >> "ALYSIA_PAINT" >> (currentWeapon player) >> "possible"));
	g_action_inUse = false;
} else {
	["Vous n'avez pas de bombe de peinture"] call public_fnc_error;
};