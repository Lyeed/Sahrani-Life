/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_damage", "_source", "_projectile", "_part"];
_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;

if (g_connected && !g_staff_god && (_damage > 0)) then
{
	_damage = _damage * 180;
	if ((isNull _source) && ((vehicle player) != player)) then
	{
		 if (g_seatbelt) then {
		 	_damage = _damage * 4;
		 } else {
		 	_damage = _damage * 10;
		};
	};

	if (!(isNull _source)) then
	{
		if ((_source != player) && (_projectile != "")) then
		{
			if ((currentWeapon _source) isEqualTo "hgun_FlashBall_F") then
			{
				if ((player distance _source) < 50) then 
				{
					[] spawn AlysiaClient_fnc_knockedOut;
				};
				_damage = 0;
			} else {
				if (!(player getVariable ["bullet_check", false])) then
				{
					player setVariable ["bullet_check", true, true];
				};
			};
		};
	};

	{
		if (isPlayer _x) then
		{
			if (_x getVariable ["is_coma", false]) then
			{
				[_x, false] spawn AlysiaClient_fnc_action_body_drop;
				true breakOut "main";
			} else {
				[_x] spawn AlysiaClient_fnc_stopescort;
				true breakOut "main";
			};
		};
	} forEach attachedObjects player;

	[(abs _damage)] call AlysiaClient_fnc_handleBlood;
	[(_damage / 11)] call AlysiaClient_fnc_handleBleed;
};

0;
