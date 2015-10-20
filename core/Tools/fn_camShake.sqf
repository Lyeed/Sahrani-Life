/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value"];
_value = [_this, 0, 0, [0]] call BIS_fnc_param;

if (_value == 0) then {
	g_camShakes = 0;
} else {
	if ((_value < 0) && (g_camShakes == 0)) exitWith {};
	g_camShakes = g_camShakes + _value;
	if (g_camShakes == _value) then
	{
		[] spawn
		{
			while {g_camShakes > 0} do
			{
				addcamShake[g_camShakes, 1, g_camShakes];
				sleep 1;
			};
			resetCamShake;
		};
	};
};