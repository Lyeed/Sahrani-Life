/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((animationState player) != "incapacitated") then
{
	if (!g_staff_god) then
	{
		private "_inUse";
		_inUse = false;
		if (g_action_inUse) then {
			_inUse = true
		} else {
			g_action_inUse = true;
		};
		player playMoveNow "incapacitated";
		sleep round(random(7) + 2);
		player playMoveNow "amovppnemstpsraswrfldnon";

		if (!_inUse) then {
			g_action_inUse = false;
		};
	};
};
