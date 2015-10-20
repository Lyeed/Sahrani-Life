/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ui", "_idc"];

if (isNull (uiNameSpace getVariable ["playerHUD", displayNull])) then
{
	disableSerialization;
	2 cutRsc ["playerHUD", "PLAIN"];
	_ui = uiNameSpace getVariable ["playerHUD", displayNull];
	while {true} do
	{
		_idc = 23500;
		if (!g_coma) then
		{
			{
				if (call compile format["%1", (_x select 1)]) then
				{
					ctrlSetText[_idc, (_x select 0)];
					ctrlShow[_idc, true];
					_idc = _idc + 1;
				};
			} forEach 
			([
				["\lyeed_IMG\data\player_hud\bleed.paa", "(g_bleed > 0)"],
				["\lyeed_IMG\data\player_hud\regen.paa", "(g_regen_active)"],
				["\lyeed_IMG\data\player_hud\drink.paa", "(g_thirst < 40)"],
				["\lyeed_IMG\data\player_hud\food.paa", "(g_hunger < 40)"],
				["\lyeed_IMG\data\player_hud\drug.paa", "(g_drugs_consuming > 0)"],
				["\lyeed_IMG\data\player_hud\handcuff.paa", "(player getVariable[""restrained"", false])"],
				["\lyeed_IMG\data\player_hud\blind.paa", "(player getVariable[""bandeau"", false])"]
			]);
		};

		for "_i" from _idc to 23506 do
		{
			ctrlShow[_i, false];
		};

		sleep 0.6;
	};
};