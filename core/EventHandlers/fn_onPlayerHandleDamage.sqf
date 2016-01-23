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

if (g_connected && !g_staff_god) then
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

	if (_damage > 0) then
	{
		[(_damage * -1)] call public_fnc_handleBlood;
		[(_damage / 8)] call public_fnc_handleBleed;
	};
};

0;
